/*
 *	Copyright (C) 2011 by Pandora Robotics Team, Aristotle Univeristy of Thessaloniki, Greece
 *
 *	Permission is hereby granted, free of charge, to any person obtaining a copy
 *	of this software and associated documentation files (the "Software"), to deal
 *	in the Software without restriction, including without limitation the rights
 *	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *	copies of the Software, and to permit persons to whom the Software is
 *	furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in
 *	all copies or substantial portions of the Software.
 *
 *	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *	THE SOFTWARE.
 */
/**
  * geotiffCreator implementation files
  * Author: Dimitrios Vitsios
  * Date: 24 June 2011
  * Change History: 
*/


#include "geotiffCreator.h"
#include "masterGui.h"
#include <vector>


extern QString homeFolderString;

geotiffCreator::geotiffCreator()
{
	connect(gui->ui.createGeotiffPushButton, SIGNAL(clicked()), this, SLOT(onCreateGeotiffClicked()));
	connect(gui->ui.geotiffMissionNamePlainTextEdit, SIGNAL(textChanged(const QString &)), this, SLOT(saveMissionName(const QString &)));
	
	_geotiffServiceClient = _handle.serviceClient<navigation_communications::geotiffSrv>("/navigation/geotiffSrv");
	
}

void geotiffCreator::saveMissionName(const QString & textInserted)
{
	missionName = textInserted;
}


void geotiffCreator::onCreateGeotiffClicked()
{
	
	//call geotiff service
	if (_geotiffServiceClient.call(srv))
  	{
		ROS_INFO("geotiffSrv was called successfully");
		xsize = srv.response.xsize;
		ysize = srv.response.ysize;
		
		map = new uchar[xsize*ysize];
		coverage = new uchar[xsize*ysize];
		
		for(int i=0; i<xsize; i++){
			for(int j=0; j<ysize; j++){
				map[i + (j*xsize)] = srv.response.map[j + (i*ysize)];
				coverage[i + (j*xsize)] = srv.response.coverage[j + (i*ysize)];
			}
		}
		
		pathSize = srv.response.rposesx.size();
		pathx = new int[pathSize];
		pathy = new int[pathSize];
		
		for(int i=0; i<pathSize; i++){
			pathx[i] = srv.response.rposesx[i];
			pathy[i] = srv.response.rposesy[i];
		}
		
		victimsSize = srv.response.victimsx.size();
		victimsx = new int[victimsSize];
		victimsy = new int[victimsSize];
		for(int i=0; i<victimsSize; i++){
			victimsx[i] = srv.response.victimsx[i];
			victimsy[i] = srv.response.victimsy[i];
		}
		
		hazmatSize = srv.response.hazmatx.size();
		hazmatx = new int[hazmatSize];
		hazmaty = new int[hazmatSize];
		hazmatType = new int[hazmatSize];
		
		for(int i=0; i<hazmatSize; i++){
			hazmatx[i] = srv.response.hazmatx[i];
			hazmaty[i] = srv.response.hazmaty[i];
			hazmatType[i] = srv.response.pattern[i];
		}
			
		
  	}
  	else
  	{
    	  ROS_ERROR("Failed to call geotiffSrv");
  	}
  	
  
  	// --- draw geotiff ---
		
	
	// *************draw map & coverage
	QImage mapIm(xsize, ysize, QImage::Format_ARGB32);
	QPainter mapPainter;
	mapPainter.begin(&mapIm);
	
	
	
	mapPainter.setCompositionMode(QPainter::CompositionMode_Source);
	mapPainter.fillRect(mapIm.rect(), Qt::transparent);
	mapPainter.setCompositionMode(QPainter::CompositionMode_SourceOver);
		
		
	QColor wallsObstaclesColor;
	wallsObstaclesColor.setRgb(0, 40, 120);
	
	for(int i=0; i<xsize; i++){
		for(int j=0; j<ysize; j++){
			if(map[j*xsize + i] < 127 && map[j*xsize + i] > 0){
				
				QPen wallsObstaclesPen(wallsObstaclesColor);
				wallsObstaclesPen.setWidth(3);
				mapPainter.setPen(wallsObstaclesPen);
				mapPainter.drawPoint(i,ysize-1-j);
			}
			else if(map[j*xsize + i] > 170 ){
				QColor searchedAreaColor;
				searchedAreaColor.setRgb(map[j*xsize + i], map[j*xsize + i], map[j*xsize + i]);
				mapPainter.setPen(searchedAreaColor);
				mapPainter.drawPoint(i,ysize-1-j);
			}
			
			QColor coverageColor;
			if(coverage[j*xsize + i]){
				if(map[j*xsize + i] < 170 &&  map[j*xsize + i] >= 127)
					continue;
				if(coverage[j*xsize + i] <= 85){
					int colorTmp = (coverage[j*xsize + i]*17) / 255;
					coverageColor.setRgb(163+colorTmp, 230, 163+colorTmp);
					mapPainter.setPen(coverageColor);
					
					mapPainter.drawPoint(i,ysize-1-j);
				}
				else if(coverage[j*xsize + i] <= 170){
					int colorTmp = (coverage[j*xsize + i]*17) / 170;
					coverageColor.setRgb(146+colorTmp, 230, 146+colorTmp);
					mapPainter.setPen(coverageColor);
					
					mapPainter.drawPoint(i,ysize-1-j);
				}
				else {
					int colorTmp = (coverage[j*xsize + i]*16) / 85;
					coverageColor.setRgb(130+colorTmp, 230, 130+colorTmp);
					mapPainter.setPen(coverageColor);
					
					mapPainter.drawPoint(i,ysize-1-j);
				}
			}
		}
	}
	
	
	
	//*****************draw path
	
	QColor pathColor;
	pathColor.setRgb(120,0,140);
	QPen pathPen(pathColor);
	pathPen.setWidth(2);
	mapPainter.setPen(pathPen);
	
	for(int i=0; i<pathSize-1; i++){
		mapPainter.drawLine(pathx[i], ysize-1-pathy[i], pathx[i+1], ysize-1-pathy[i+1]);
	}

    


	//draw robot's initial position
	int robotx = pathx[0]; 
	int roboty = ysize-1-pathy[0];
	QColor initPoseColor;
	initPoseColor.setRgb(255, 200, 0);
	QPen initPosePen(initPoseColor);
	mapPainter.setPen(initPosePen);
	QBrush initPoseBrush(initPoseColor);
	mapPainter.setBrush(initPoseBrush);
	QPoint *initPosePoints = new QPoint[5];
	initPosePoints[0].setX(robotx+15);
	initPosePoints[0].setY(roboty);
	initPosePoints[1].setX(robotx-10);
	initPosePoints[1].setY(roboty-5);
	initPosePoints[2].setX(robotx-5);
	initPosePoints[2].setY(roboty);
	initPosePoints[3].setX(robotx-10);
	initPosePoints[3].setY(roboty+5);
	mapPainter.drawPolygon(initPosePoints, 4);
	
	mapPainter.end();
	
	QColor victimsColor;
	victimsColor.setRgb(240,10,10);
	QRgb victRgb = victimsColor.rgb();
	
	QColor hazmatColor;
	hazmatColor.setRgb(255,100,30);
	QRgb hazRgb = hazmatColor.rgb();
	
	
	//draw hazmats
	for(int i=0; i<hazmatSize; i++){
		
		QImage hazmat(40, 40, QImage::Format_ARGB32);
		QPainter hazPainter;
		
		hazPainter.begin(&hazmat);
		
		hazPainter.setCompositionMode(QPainter::CompositionMode_Source);
		hazPainter.fillRect(hazmat.rect(), Qt::transparent);
		hazPainter.setCompositionMode(QPainter::CompositionMode_SourceOver);

		hazPainter.setPen(hazmatColor);
		
		int x = 20; 
		int y = 20; 
				
		for(int iter=0; iter<10; iter++){
			for(int k=x-iter; k<=x+iter; k++){
				hazPainter.drawPoint(k, y-(10-iter));
			}
		}
		for(int iter=0; iter<=10; iter++){
			for(int k=x-iter; k<=x+iter; k++){
				hazPainter.drawPoint(k, y+(10-iter));
			}
		}
		
		QPen penWhite(Qt::white);
		penWhite.setWidth(2);
		hazPainter.setPen(penWhite);
		int hazId = i+1;
		QString hazIdStr = QString::number(hazId);
		hazPainter.drawText(x-4, y+5, hazIdStr);
		hazPainter.end();
		
		
		QTransform transform90DegTmp;
		transform90DegTmp.rotate(90);
		QTransform transform90Deg = hazmat.trueMatrix(transform90DegTmp, 40, 40);
		
		hazmat = hazmat.transformed(transform90Deg);
		
		//flags indicating occupancy of a particular area by other victims or hazmats
		int flag0 = 0;
		int flag1 = 0;
		int exitloop = 0;
		
		QPen blackPen(Qt::black);
		
		
		//check area "0"
		for(int k=hazmatx[i]-14.14-15; k<hazmatx[i]-14.14+15; k++){
			for(int l=ysize-1-hazmaty[i]-14.14-15; l<ysize-1-hazmaty[i]-14.14+15; l++){
				if( (mapIm.pixel(k,l) == victRgb) || (mapIm.pixel(k,l) == hazRgb)){
					flag0=1;
					exitloop = 1;
					break;
				}
			}
			if(exitloop == 1){
				exitloop = 0;
				break;
			}
		} 
		if(!flag0){
			//gui->ui.pandoraTextBrowser->append("draw 0");
			QPoint vicP(hazmatx[i]-14.14, ysize-1-hazmaty[i]-14.14);
			mapPainter.begin(&mapIm);
			mapPainter.drawImage(vicP,hazmat);
			mapPainter.end();
		}
		else {
			for(int k=hazmatx[i]-14.14-45; k<hazmatx[i]-14.14-15; k++){
				for(int l=ysize-1-hazmaty[i]-14.14-15; l<ysize-1-hazmaty[i]-14.14+15; l++){
					if( (mapIm.pixel(k,l) == victRgb) || (mapIm.pixel(k,l) == hazRgb)){
						flag1=1;
						exitloop = 1;
						break;
					}
				}
				if(exitloop == 1){
					exitloop = 0;
					break;
				}
			} 
			if(!flag1){
				//gui->ui.pandoraTextBrowser->append("draw 1");
				QPoint vicPnorm(hazmatx[i]-14.14-30, ysize-1-hazmaty[i]-14.14);
				QPoint vicP(hazmatx[i]-20, ysize-1-hazmaty[i]+3);
				mapPainter.begin(&mapIm);
				mapPainter.drawImage(vicPnorm,hazmat);
				blackPen.setWidth(1);
				mapPainter.setPen(blackPen);
				QPoint smallCircleCenter(hazmatx[i], ysize-1-hazmaty[i]-4);
				mapPainter.drawEllipse(smallCircleCenter,2,2);
				mapPainter.drawLine(smallCircleCenter, vicP);
				mapPainter.end();
			}
			else{	
				flag1 = 0;			
				//gui->ui.pandoraTextBrowser->append("draw 2");
				QPoint vicPnorm(hazmatx[i]-14.14+30, ysize-1-hazmaty[i]-14.14);
				QPoint vicP(hazmatx[i]+28, ysize-1-hazmaty[i]+3);
				mapPainter.begin(&mapIm);
				mapPainter.drawImage(vicPnorm,hazmat);
				blackPen.setWidth(1);
				mapPainter.setPen(blackPen);
				QPoint smallCircleCenter(hazmatx[i], ysize-1-hazmaty[i]-4);
				mapPainter.drawEllipse(smallCircleCenter,2,2);
				mapPainter.drawLine(smallCircleCenter, vicP);
				mapPainter.end();
			}
		}			
		
	}
	
	
	//draw victims
	for(int i=0; i<victimsSize; i++){
		
		QImage victim(40, 40, QImage::Format_ARGB32);
		QPainter victPainter;
		victPainter.begin(&victim);
		victPainter.setCompositionMode(QPainter::CompositionMode_Source);
		victPainter.fillRect(victim.rect(), Qt::transparent);
		victPainter.setCompositionMode(QPainter::CompositionMode_SourceOver);


		victPainter.setPen(victimsColor);
		victPainter.setBrush(victimsColor);
		
		QPoint circleCenter(20, 20);
		victPainter.drawEllipse(circleCenter, 10, 10);
		QPen penWhite(Qt::white);
		penWhite.setWidth(2);
		victPainter.setPen(penWhite);
		int victId = i+1;
		QString victIdStr = QString::number(victId);
		if(i+1>=10)
			victPainter.drawText(13, 25, victIdStr);
		else
			victPainter.drawText(16, 25, victIdStr);
		victPainter.end();
		
		QTransform transform90DegTmp;
		transform90DegTmp.rotate(90);
		QTransform transform90Deg = victim.trueMatrix(transform90DegTmp, 40, 40);
		 
		victim = victim.transformed(transform90Deg);
		
		//flags indicating occupancy of a particular area by other victims or hazmats
		int flag0 = 0;
		int flag1 = 0;
		int exitloop = 0;
		
		QPen blackPen(Qt::black);
		
		
		//check area "0"
		for(int k=victimsx[i]-14.14-15; k<victimsx[i]-14.14+15; k++){
			for(int l=ysize-1-victimsy[i]-14.14-15; l<ysize-1-victimsy[i]-14.14+15; l++){
				if( (mapIm.pixel(k,l) == victRgb) || (mapIm.pixel(k,l) == hazRgb)){
					flag0=1;
					exitloop = 1;
					break;
				}
			}
			if(exitloop == 1){
				exitloop = 0;
				break;
			}
		} 
		if(!flag0){
			//gui->ui.pandoraTextBrowser->append("draw 0");
			QPoint vicP(victimsx[i]-14.14, ysize-1-victimsy[i]-14.14);
			mapPainter.begin(&mapIm);
			mapPainter.drawImage(vicP,victim);
			mapPainter.end();
		}
		else {
			for(int k=victimsx[i]-14.14-45; k<victimsx[i]-14.14-15; k++){
				for(int l=ysize-1-victimsy[i]-14.14-15; l<ysize-1-victimsy[i]-14.14+15; l++){
					if( (mapIm.pixel(k,l) == victRgb) || (mapIm.pixel(k,l) == hazRgb)){
						flag1=1;
						exitloop = 1;
						break;
					}
				}
				if(exitloop == 1){
					exitloop = 0;
					break;
				}
			} 
			if(!flag1){
				//gui->ui.pandoraTextBrowser->append("draw 1");
				QPoint vicPnorm(victimsx[i]-14.14-30, ysize-1-victimsy[i]-14.14);
				QPoint vicP(victimsx[i]-20, ysize-1-victimsy[i]+3);
				mapPainter.begin(&mapIm);
				mapPainter.drawImage(vicPnorm,victim);
				blackPen.setWidth(1);
				mapPainter.setPen(blackPen);
				QPoint smallCircleCenter(victimsx[i], ysize-1-victimsy[i]-4);
				mapPainter.drawEllipse(smallCircleCenter,2,2);
				mapPainter.drawLine(smallCircleCenter, vicP);
				mapPainter.end();
			}
			else{	
				flag1 = 0;			
				//gui->ui.pandoraTextBrowser->append("draw 2");
				QPoint vicPnorm(victimsx[i]-14.14+30, ysize-1-victimsy[i]-14.14);
				QPoint vicP(victimsx[i]+28, ysize-1-victimsy[i]+3);
				mapPainter.begin(&mapIm);
				mapPainter.drawImage(vicPnorm,victim);
				blackPen.setWidth(1);
				mapPainter.setPen(blackPen);
				QPoint smallCircleCenter(victimsx[i], ysize-1-victimsy[i]-4);
				mapPainter.drawEllipse(smallCircleCenter,2,2);
				mapPainter.drawLine(smallCircleCenter, vicP);
				mapPainter.end();
			}
		}
			
	}
    
    //find appropriate width and height sizes from mapIm's actually drawn area in order to crop the final "geotiff" image
    //-- not currently used!
    /*
    int maxX, minX, maxY, minY;
  	int flag = 0;
  	for(int i=0; i<ysize; i++){
		for(int j=0; j<xsize; j++){
			if(mapIm.pixel(i, j)){
				minY = i;
				flag = 1;
				break;
			}
		}
		if( flag == 1 ){
			flag = 0;
			break;
		}
	}
	
	for(int i=ysize-1; i>=0; i--){
		for(int j=0; j<xsize; j++){
			if(mapIm.pixel(i, j)){
				maxY = i;
				flag = 1;
				break;
			}
		}
		if( flag == 1 ){
			flag = 0;
			break;
		}
	}
	
	for(int i=0; i<xsize; i++){
		for(int j=0; j<ysize; j++){
			if(mapIm.pixel(j,i)){
				minX = i;
				flag = 1;
				break;
			}
		}
		if( flag == 1 ){
			flag = 0;
			break;
		}
	}
	
	for(int i=xsize-1; i>=0; i--){
		for(int j=0; j<ysize; j++){
			if(mapIm.pixel(j,i)){
				maxX = i;
				flag = 1;
				break;
			}
		}
		if( flag == 1 ){
			flag = 0;
			break;
		}
	}
    */
   
    int finalSizeY = (xsize/100)*100 +200;
  	int finalSizeX = (ysize/100)*100 +200;
  
    
    QTransform transform90DegTmp;
	transform90DegTmp.rotate(-90);
	QTransform transform90Deg = mapIm.trueMatrix(transform90DegTmp, 40, 40);
		
    
    mapIm = mapIm.transformed(transform90Deg);
    
	
	QImage geotiff(finalSizeX,finalSizeY, QImage::Format_RGB32);
	QPainter geotiffPainter;
	geotiffPainter.begin(&geotiff);
	
	QColor colorLightGreyGrid;
	QColor colorDarkGreyGrid;
	colorLightGreyGrid.setRgb(226,226,227);
	colorDarkGreyGrid.setRgb(237,237,238);

	
	
	QBrush gridBrush(colorLightGreyGrid);

	//draw (checkerboard) grid
	bool dark = true;
    for (int i = 0; i < finalSizeX/50 ; i++) {
        dark = !dark;
        for (int j = 0; j < finalSizeY/50 ; j++) {
            dark = !dark;
           
            if (dark) {
                gridBrush.setColor(colorLightGreyGrid);
				geotiffPainter.setPen(colorLightGreyGrid);
            } else {
                gridBrush.setColor(colorDarkGreyGrid);
				geotiffPainter.setPen(colorDarkGreyGrid);
            }
 
            int x = 50 * i;
            int y = 50 * j;
            int width = 50;
            int height = 50;
            // Draw rectangle to screen.
            geotiffPainter.drawRect(x, y, width, height);
            geotiffPainter.fillRect(x, y, width, height, gridBrush);
        }
    }
	
	//draw filename
	QColor colorBlueText;
	colorBlueText.setRgb(0, 44, 207);
	QPen filenamePen = QPen(colorBlueText);
	filenamePen.setWidth(4);
	geotiffPainter.setPen(filenamePen);
	
	QPointF filenamePoint(25, 25); 
	QString filenameString("/RRL_2011_PANDORA_");
	filenameString.append(missionName);
	filenameString.append(".tiff");
	
	QPen colorBlueTextPen(colorBlueText);
	colorBlueTextPen.setWidth(2);
	geotiffPainter.setPen(colorBlueTextPen);
	geotiffPainter.drawText(filenamePoint, filenameString);
	
	
	//draw mapscale
	QColor colorMapScale;
	colorMapScale.setRgb(0, 50, 140);
	
	QPen colorMapScalePen = QPen(colorMapScale);
	colorMapScalePen.setWidth(4);
	geotiffPainter.setPen(colorMapScalePen);
	
	geotiffPainter.setPen(colorMapScale);
	QPointF lengthUnitPoint1(25, 50);
	QPointF lengthUnitPoint2(25, 100);
	geotiffPainter.drawLine(lengthUnitPoint1, lengthUnitPoint2);
	
	QPointF lengthUnitPoint1Up(21, 50);
	QPointF lengthUnitPoint2Up(29, 50);
	geotiffPainter.drawLine(lengthUnitPoint1Up, lengthUnitPoint2Up);
	
	QPointF lengthUnitPoint1Down(21, 100);
	QPointF lengthUnitPoint2Down(29, 100);
	geotiffPainter.drawLine(lengthUnitPoint1Down, lengthUnitPoint2Down);
	
	QPointF lengthUnitTextPoint(28, 80);
	QString lengthUnitText("1m");
	geotiffPainter.drawText(lengthUnitTextPoint, lengthUnitText);
	
	//draw map orientation
	QColor colorOrientation;
	colorOrientation.setRgb(0, 50, 140);
	
	QPointF pointX1(100, 50);
	QPointF pointX2(100, 100);
	QPointF pointY1(50, 100);
	QPointF pointY2(100, 100);
	
	geotiffPainter.drawLine(pointX1, pointX2);
	geotiffPainter.drawLine(pointY1, pointY2);
	
	QPointF pointYup(55, 95);
	QPointF pointYdown(55, 105);
	geotiffPainter.drawLine(pointY1, pointYup);
	geotiffPainter.drawLine(pointY1, pointYdown);
	
	QPointF pointXright(105, 55);
	QPointF pointXleft(95, 55);
	geotiffPainter.drawLine(pointX1, pointXright);
	geotiffPainter.drawLine(pointX1, pointXleft);
	
	QPointF pointXText(110, 52);
	QString XString("x");
	geotiffPainter.drawText(pointXText, XString);
	
	QPointF pointYText(60, 93);
	QString YString("y");
	geotiffPainter.drawText(pointYText, YString);
    
    
    int ioffset = 100;
	int joffset = 100;
	
	QPoint mapP(ioffset, joffset);
	geotiffPainter.drawImage(mapP, mapIm);
	
	
	
	
	//draw explored area grid
	QColor exploredAreaColor;
	exploredAreaColor.setRgb(190,190,191);
	QPen exploredAreaPen(exploredAreaColor);
	geotiffPainter.setPen(exploredAreaPen);
	
	for(int j=15; j<finalSizeX-50; j+=25){
		for(int i=0; i<finalSizeY-50; i++){
		    	QRgb rgb = geotiff.pixel(i,j);
		    	int r = qRed(rgb);
		    	int g = qGreen(rgb);
		    	int b = qBlue(rgb);
		    	if( ((r==g)&&(g==b)&&(r>=140)) || ((g==230)&&(r==b)&&(r>=130)&&(r<=180)) ){
					geotiffPainter.drawPoint(i,j);
				}
		}
	}
	
	for(int i=15; i<finalSizeX-50; i+=25){
		for(int j=0; j<finalSizeY-50; j++){
		    	QRgb rgb = geotiff.pixel(i,j);
		    	int r = qRed(rgb);
		    	int g = qGreen(rgb);
		    	int b = qBlue(rgb);
		    	if( ((r==g)&&(g==b)&&(r>=140)) || ((g==230)&&(r==b)&&(r>=130)&&(r<=180)) ){
					geotiffPainter.drawPoint(i,j);
				}
		}
	}

	geotiffPainter.end();
		
	//save geotiff in Desktop
	QString filepath = homeFolderString;
	filepath = filepath.append("/Desktop/");
	filepath.append(filenameString);
	geotiff.save(filepath);
	
}
