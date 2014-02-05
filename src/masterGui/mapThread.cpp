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
  * mapThread implementation files
  * Author: Dimitrios Vitsios
  * Date: 9 June 2011
  * Change History: - 
  */


#include <vector>
#include "mapThread.h"
#include "math.h"
#include "masterGui.h"

#define MAX 4000
#define PI 3.1415


QImage globalMap;
QImage globalMap2;
int widthFinalNav,heightFinalNav;
int widthFinal,heightFinal;
extern QMutex mutexGlobal;


mapThread::mapThread(){

	int i,j,k;
	map = new uchar[MAX*MAX];
	coverage = new uchar[MAX*MAX];	
	voronoi = new uchar[MAX*MAX];
	coverageLimitsx = new int[MAX];
	coverageLimitsy = new int[MAX];
	voronodesx = new int[1000];
	voronodesy = new int[1000];
	neighboursFirst = new int[1000];
	neighboursLast = new int[1000];
	goalsx = new int[1000];
	goalsy = new int[1000];

	xsize = 400;
	ysize = 400;
	drawMapSmallFlag = 0;
	drawMapFlag = 0;

	mapsize = gui->ui.mapLabel->size();
	mapsizeNav = gui->ui.mapLabelNav->size();
	widthFinalNav = mapsizeNav.width();
	heightFinalNav = mapsizeNav.height();
	widthFinal = mapsize.width();
	heightFinal = mapsize.height();

	_guiInfoLargeClient = _handle.serviceClient<navigation_communications::guiInfoLargeSrv>("/navigation/mapData");

	
	_guiInfoSmallClient = _handle.serviceClient<navigation_communications::guiInfoSmallSrv>("/navigation/navigationData");

	targetPosition_pub = _handle.advertise<gui_communications::targetPosition>("/guiMsgs/semiAutonomous",1);

	_handle.setCallbackQueue(&my_callback_queue);
	my_callback_queue.callAvailable(ros::WallDuration());

	
}

void mapThread::run()
{
	while(1){
		mutexGlobal.lock();
		if((gui->ui.mapNavGroupBox->isChecked()) || (gui->ui.mapGroupBox->isChecked())){
			generateMap();
			generateMapSmall();
		}
		mutexGlobal.unlock();
	
		sleep(2);

	}
}


void mapThread::generateMap() 
{
	int i,j;
	int flagLarge = 0;

	//clock_t begin=clock();
        if (_guiInfoLargeClient.call(srv))
  	{
		ROS_INFO("guiInfoLargeSrv was called successfully");
		xsize = srv.response.xsize;
		ysize = srv.response.ysize;
		//ROS_INFO("xsize: %i, ysize: %i", xsize, ysize);
		for(i=0; i<xsize; i++){
			for(j=0; j<ysize; j++){
				map[i + (j*xsize)] = srv.response.map[j + (i*ysize)];
				coverage[i + (j*xsize)] = srv.response.coverage[j + (i*ysize)];			
				
			
				voronoi[i + (j*xsize)] = srv.response.voronoi[j + (i*ysize)];
			}
		}

		drawMapSmallFlag = 1;
		drawMap();
  	}
  	else
  	{
    	  ROS_ERROR("Failed to call guiInfoLargeSrv");
    	  
  	}

	
}


void mapThread::drawMap()
{
	int i,j;

	QImage referenceMap((uchar*)map, xsize, ysize, QImage::Format_Indexed8);
	referenceMap = referenceMap.convertToFormat(QImage::Format_ARGB32);

		
	painter.begin(&referenceMap);
	QColor color;
	QColor color2;

	for(int i=0;i<xsize;i++){
		for(int j=0;j<ysize;j++){
			color.setRed(map[j*xsize + i]);
			color.setGreen(map[j*xsize + i]);
			color.setBlue(map[j*xsize + i]);
			if( coverage[j*xsize + i]){
				color.setBlue(255 - coverage[j*xsize + i]);
				painter.setPen(color);
				painter.drawPoint(i,j);
			}
		}
	}
	color2.setRgb(255, 0, 0);
	QPen pen2 = QPen(color2);
	pen2.setWidth(2);
	painter.setPen(pen2);
	for(int i=0;i<xsize;i++){
		for(int j=0;j<ysize;j++){
			if( voronoi[j*xsize + i] ){
			painter.drawPoint(i,j);
			}
		}
	}

	painter.end();
	globalMap = referenceMap;
    	globalMap2 = referenceMap;
	
}



void mapThread::generateMapSmall() 
{
	int i,j;

	//call service
        if (_guiInfoSmallClient.call(srvSmall))
  	{
		
		xRobot = srvSmall.response.xRobot;
		yRobot = srvSmall.response.yRobot;
		angleRobot = srvSmall.response.angleRobot;
		ROS_DEBUG("Angle robot: %f", angleRobot);
		covLimitSize = srvSmall.response.coverageLimitsx.size();
		for(unsigned int i=0; i<covLimitSize; i++){
			coverageLimitsx[i]=srvSmall.response.coverageLimitsx[i];
			coverageLimitsy[i]=srvSmall.response.coverageLimitsy[i];
		}

		voronodesSize = srvSmall.response.voronodesx.size();
		for(unsigned int i=0; i < voronodesSize; i++){
			voronodesx[i] = srvSmall.response.voronodesx[i];
			voronodesy[i] = srvSmall.response.voronodesy[i];
		}

		
		neighboursSize = srvSmall.response.neighborsFirst.size();

		for(unsigned int i=0; i<neighboursSize; i++){
			neighboursFirst[i] = srvSmall.response.neighborsFirst[i];
			neighboursLast[i] = srvSmall.response.neighborsLast[i];
		}

		goalsxSize = srvSmall.response.goalsx.size();
		goalsySize = srvSmall.response.goalsy.size();
		for(unsigned int i=0; i<goalsxSize; i++){
			goalsx[i] = srvSmall.response.goalsx[i];
			goalsy[i] = srvSmall.response.goalsy[i];
		}


		ROS_INFO("guiInfoSmallSrv was called successfully, xRobot: %i, yRobot: %i", xRobot, yRobot);

		drawMapSmall();
	}
  	else
  	{
    	  ROS_ERROR("Failed to call guiInfoSmallSrv");
  	}

}



void mapThread::drawMapSmall()
{
	widthFinalNav=globalMap.width();
	heightFinalNav=globalMap.height();
	float globalRatioNav=1.0;

	widthFinal=globalMap.width();
	heightFinal=globalMap.height();
	float globalRatio=1.0;

	while(1){
		if(mapsizeNav.width()<widthFinal){
			widthAnNav=mapsizeNav.width()/(float)widthFinalNav;
			globalRatioNav*=widthAnNav;
			widthFinalNav=widthFinalNav*widthAnNav;
			heightFinalNav=heightFinalNav*widthAnNav;
		}
		else if(mapsizeNav.height()<heightFinalNav){
			heightAnNav=mapsizeNav.height()/(float)heightFinalNav;
			globalRatioNav*=heightAnNav;
			widthFinalNav=widthFinalNav*heightAnNav;
			heightFinalNav=heightFinalNav*heightAnNav;
		}
		if(mapsize.width()<widthFinal){
			widthAn=mapsize.width()/(float)widthFinal;
			globalRatio*=widthAn;
			widthFinal=widthFinal*widthAn;
			heightFinal=heightFinal*widthAn;
		}
		else if(mapsize.height()<heightFinal){
			heightAn=mapsize.height()/(float)heightFinal;
			globalRatio*=heightAn;
			widthFinal=widthFinal*heightAn;
			heightFinal=heightFinal*heightAn;
		}
		else break;
	}


	QPainter painter2;
	QColor color;
	color.setRgb(0, 0, 255);


	painter2.begin(&globalMap);

	QPen pen = QPen(color);
	pen.setWidth(2);
	painter2.setPen(pen);

	//robot Pose
	painter2.drawPoint(xRobot,yRobot);
	for(int i=1; i<10; i++){ 
		painter2.drawPoint(xRobot,yRobot+i);
		painter2.drawPoint(xRobot,yRobot-i);
		painter2.drawPoint(xRobot+i,yRobot);
		painter2.drawPoint(xRobot-i,yRobot);
	}

	
		xAnglePoint = xRobot + 50*cos(180*angleRobot/PI);
		yAnglePoint = yRobot + 50*sin(180*angleRobot/PI);
	

	painter2.drawLine(xRobot, yRobot, xAnglePoint, yAnglePoint);	

	QPoint circleCenter(xRobot, yRobot);
	for(int i=0;i<2;i++){
		painter2.drawEllipse(circleCenter, 30, 30);
		painter2.drawEllipse(circleCenter, 60, 60);
	}

	painter2.end();
	
	
	//add remaining elements for the map at the victim identification tab
	QPainter painter3;
	painter3.begin(&globalMap2);

	QColor g;
	g.setRgb(0,0,255);
	QPen peng = QPen(g);
	peng.setWidth(2);
	painter3.setPen(peng);
	//robot Pose
	painter3.drawPoint(xRobot,yRobot);
	for(int i=1; i<10; i++){ 
		painter3.drawPoint(xRobot,yRobot+i);
		painter3.drawPoint(xRobot,yRobot-i);
		painter3.drawPoint(xRobot+i,yRobot);
		painter3.drawPoint(xRobot-i,yRobot);
	}

	for(int i=0;i<2;i++){
		painter3.drawEllipse(circleCenter, 30, 30);
		painter3.drawEllipse(circleCenter, 60, 60);
	}

	painter3.drawLine(xRobot, yRobot, xAnglePoint, yAnglePoint);
	//coverage limits	
	QColor color2;
	color2.setRgb(0, 150, 0);
	QColor colorBlue;
	QColor colorRed;
	colorBlue.setRgb(0, 0, 255);
	colorRed.setRgb(255, 0, 0);

	QPen pen2 = QPen(color2);
	QPen penBlue = QPen(colorBlue);
	QPen penRed = QPen(colorRed);
	painter3.setPen(pen2);

	for(unsigned int i=0; i<covLimitSize; i++){
			painter3.drawPoint(coverageLimitsx[i], coverageLimitsy[i]);
	}

	QFont font("Courier", 12, QFont::Normal);
	painter3.setFont(font);

	//voronodes
	for(int i=0; i<voronodesSize; i++){
			for( int j=1;j<=4;j++){
				painter3.drawPoint(voronodesx[i]+j, voronodesy[i]+j);
				painter3.drawPoint(voronodesx[i]-j, voronodesy[i]-j);
				painter3.drawPoint(voronodesx[i]-j, voronodesy[i]+j);
				painter3.drawPoint(voronodesx[i]+j, voronodesy[i]-j);
		
			}

			painter3.setPen(penBlue);

			QString str;
			str.setNum(i);
			
			painter3.drawText(voronodesx[i]+5, voronodesy[i], str);			
	}


	QColor rg;
	rg.setRgb(0, 100, 0);
	QPen penRg = QPen(rg);
	penRg.setWidth(2);
	painter3.setPen(penRg);

	for(unsigned int i=0; i<neighboursSize; i++)
		painter3.drawLine(voronodesx[neighboursFirst[i]], voronodesy[neighboursFirst[i]], voronodesx[neighboursLast[i]], voronodesy[neighboursLast[i]]);

	//goals
	int xx,yy;
	painter3.setPen(penRed);
	if( goalsxSize !=0 ){
		for(unsigned int i=0; i<goalsxSize; i++){
			xx=goalsx[i];
			yy=goalsy[i];
			QPoint goalPoint(xx,yy);

			painter3.drawEllipse(goalPoint, 4, 4);
			painter3.drawEllipse(goalPoint, 7, 7);
		}
		xx = goalsx[goalsxSize-1];
		yy = goalsy[goalsySize-1];
		QPoint goalPoint(xx,yy);
		for(int i=0; i<3; i++){
			painter3.drawEllipse(goalPoint,int(0.5/0.02*(i+1)), int(0.5/0.02*(i+1)));
		}
		
		QPen penBl = QPen(colorBlue);
		penBl.setWidth(2);
		painter3.setPen(penBl);
		for(unsigned int i=0; i<goalsxSize-1; i++)
			painter3.drawLine(goalsx[i], goalsy[i], goalsx[i+1], goalsy[i+1]);

	}

	

	painter3.end();	
	
}


