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
  * thermalGui Module implementation
  * Author: Dimitrios Vitsios
  * Date: 30 March 2011
  * Change History: - 
  */

#include "thermalGui.h"
#include "masterGui.h"


int glCnt;

thermalGui::thermalGui()
{
	
	thermalThreshold = 30;

	connect(gui->ui.thermalThresDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(onThresChanged(double)));

     //Declare subscribers
     	_thermalSubscriber0 = _handle.subscribe("/gui/sensors/tpa/1", 1 ,&thermalGui::thermalGuiReceiver0,this);  //left
     	_thermalSubscriber1 = _handle.subscribe("/gui/sensors/tpa/2", 1 ,&thermalGui::thermalGuiReceiver2,this);  //front
     	_thermalSubscriber2 = _handle.subscribe("/gui/sensors/tpa/0", 1 ,&thermalGui::thermalGuiReceiver1,this);  //right
		_mlxSubscriber = _handle.subscribe("/sensors/mlx", 1 ,&thermalGui::mlxGuiReceiver,this);

	labelWidth = gui->ui.thermalLeft1->width();
	labelHeight = gui->ui.thermalLeft1->height();


	glCnt = 0;
	QImage therm(labelWidth, labelHeight, QImage::Format_RGB32);

	color.setRgb(255, 0, 0);		
	painter.begin(&therm);
	painter.setPen(color);
	for(int i=0; i<labelWidth; i++)
		for(int j=0; j<labelHeight; j++)
			painter.drawPoint(i,j);
	painter.end();
	thermRed =therm;
	pixmapRed = QPixmap::fromImage(thermRed);

	color.setRgb(255, 255, 0);
	painter.begin(&therm);
	painter.setPen(color);
	for(int i=0; i<labelWidth; i++)
		for(int j=0; j<labelHeight; j++)
			painter.drawPoint(i,j);
	painter.end();
	thermYellow =therm;
	pixmapYellow = QPixmap::fromImage(thermYellow);

	gui->ui.thermalLeft1->setPixmap(pixmapYellow);
	gui->ui.thermalLeft2->setPixmap(pixmapYellow);
	gui->ui.thermalLeft3->setPixmap(pixmapYellow);
	gui->ui.thermalLeft4->setPixmap(pixmapYellow);
	gui->ui.thermalLeft5->setPixmap(pixmapYellow);
	gui->ui.thermalLeft6->setPixmap(pixmapYellow);
	gui->ui.thermalLeft7->setPixmap(pixmapYellow);
	gui->ui.thermalLeft8->setPixmap(pixmapYellow);
	gui->ui.thermalFront1->setPixmap(pixmapYellow);
	gui->ui.thermalFront2->setPixmap(pixmapYellow);
	gui->ui.thermalFront3->setPixmap(pixmapYellow);
	gui->ui.thermalFront4->setPixmap(pixmapYellow);
	gui->ui.thermalFront5->setPixmap(pixmapYellow);
	gui->ui.thermalFront6->setPixmap(pixmapYellow);
	gui->ui.thermalFront7->setPixmap(pixmapYellow);
	gui->ui.thermalFront8->setPixmap(pixmapYellow);
	gui->ui.thermalRight1->setPixmap(pixmapYellow);
	gui->ui.thermalRight2->setPixmap(pixmapYellow);
	gui->ui.thermalRight3->setPixmap(pixmapYellow);
	gui->ui.thermalRight4->setPixmap(pixmapYellow);
	gui->ui.thermalRight5->setPixmap(pixmapYellow);
	gui->ui.thermalRight6->setPixmap(pixmapYellow);
	gui->ui.thermalRight7->setPixmap(pixmapYellow);
	gui->ui.thermalRight8->setPixmap(pixmapYellow);

	
	QImage video(480, 640, QImage::Format_RGB32);
	QColor color;
	QPainter painter;
	color.setRgb(255, 0, 0);		
	painter.begin(&video);
	painter.setPen(color);
	for(int i=0; i<480; i++)
		for(int j=0; j<640; j++)
			painter.drawPoint(i,j);
	painter.end();
	videoPixRed = QPixmap::fromImage(video);

	color.setRgb(0, 255, 255);
	painter.begin(&video);
	painter.setPen(color);
	for(int i=0; i<480; i++)
		for(int j=0; j<640; j++)
			painter.drawPoint(i,j);
	painter.end();
	videoPixYellow = QPixmap::fromImage(video);

	QTimer *thermalTimer= new QTimer(this);
    connect(thermalTimer, SIGNAL(timeout()), this, SLOT(updateThermals()));//, Qt::QueuedConnection); //Qt::DirectConnection);
    thermalTimer->start(1000);

}

void thermalGui::onThresChanged(double newThres)
{
	thermalThreshold = newThres;
}
void thermalGui::thermalGuiReceiver0(const controllersAndSensors_communications::tpaMsg &msg)
{	
	msg0 = msg;	
}

void thermalGui::thermalGuiReceiver1(const controllersAndSensors_communications::tpaMsg &msg)
{	
	msg1 = msg;
}

void thermalGui::thermalGuiReceiver2(const controllersAndSensors_communications::tpaMsg &msg)
{	
	msg2 = msg;
}

void thermalGui::mlxGuiReceiver(const controllersAndSensors_communications::mlxTempMsg &msg)
{	
	mlxMsg = msg;
}

void thermalGui::updateThermals()
{
	drawThermal0();
	drawThermal1();
	drawThermal2();
	drawMlxThermal();
}

void thermalGui::drawMlxThermal()
{
	gui->ui.mlxUpLCD->display(mlxMsg.mlxTemp[0]);
	gui->ui.mlxDownLCD->display(mlxMsg.mlxTemp[1]);
}

void thermalGui::drawThermal0()
{	
	//ROS_INFO("Thermal msg from topic 0 received, ambient: %i", msg0.ambientTemp);

	for(int i=7; i>=0; i--){	
		if(msg0.pixelTemp[i] >= thermalThreshold){
			switch(i){
				case 0:
					gui->ui.thermalLeft1->setPixmap(pixmapRed);
				break;
				case 1:
					gui->ui.thermalLeft2->setPixmap(pixmapRed);
				break;
				case 2:
					gui->ui.thermalLeft3->setPixmap(pixmapRed);
				break;
				case 3:
					gui->ui.thermalLeft4->setPixmap(pixmapRed);
				break;
				case 4:
					gui->ui.thermalLeft5->setPixmap(pixmapRed);
				break;
				case 5:
					gui->ui.thermalLeft6->setPixmap(pixmapRed);
				break;
				case 6:
					gui->ui.thermalLeft7->setPixmap(pixmapRed);
				break;
				case 7:
					gui->ui.thermalLeft8->setPixmap(pixmapRed);
				break;
			}	
		}
		else{
			switch(i){

				case 0:
					gui->ui.thermalLeft1->setPixmap(pixmapYellow);
				break;
				case 1:
					gui->ui.thermalLeft2->setPixmap(pixmapYellow);
				break;
				case 2:
					gui->ui.thermalLeft3->setPixmap(pixmapYellow);
				break;
				case 3:
					gui->ui.thermalLeft4->setPixmap(pixmapYellow);
				break;
				case 4:
					gui->ui.thermalLeft5->setPixmap(pixmapYellow);
				break;
				case 5:
					gui->ui.thermalLeft6->setPixmap(pixmapYellow);
				break;
				case 6:
					gui->ui.thermalLeft7->setPixmap(pixmapYellow);
				break;
				case 7:
					gui->ui.thermalLeft8->setPixmap(pixmapYellow);
				break;
			}
		}
	}
}

void thermalGui::drawThermal1()
{	
	//ROS_INFO("Thermal msg from topic 1 received, ambient: %i", msg1.ambientTemp);
	
	for(int i=7; i>=0; i--){	
		if(msg1.pixelTemp[i] >= thermalThreshold){
			switch(i){
				case 0:
					gui->ui.thermalFront1->setPixmap(pixmapRed);
				break;
				case 1:
					gui->ui.thermalFront2->setPixmap(pixmapRed);
				break;
				case 2:
					gui->ui.thermalFront3->setPixmap(pixmapRed);
				break;
				case 3:
					gui->ui.thermalFront4->setPixmap(pixmapRed);
				break;
				case 4:
					gui->ui.thermalFront5->setPixmap(pixmapRed);
				break;
				case 5:
					gui->ui.thermalFront6->setPixmap(pixmapRed);
				break;
				case 6:
					gui->ui.thermalFront7->setPixmap(pixmapRed);
				break;
				case 7:
					gui->ui.thermalFront8->setPixmap(pixmapRed);
				break;
			}
		}
		else{
			switch(i){

				case 0:
					gui->ui.thermalFront1->setPixmap(pixmapYellow);
				break;
				case 1:
					gui->ui.thermalFront2->setPixmap(pixmapYellow);
				break;
				case 2:
					gui->ui.thermalFront3->setPixmap(pixmapYellow);
				break;
				case 3:
					gui->ui.thermalFront4->setPixmap(pixmapYellow);
				break;
				case 4:
					gui->ui.thermalFront5->setPixmap(pixmapYellow);
				break;
				case 5:
					gui->ui.thermalFront6->setPixmap(pixmapYellow);
				break;
				case 6:
					gui->ui.thermalFront7->setPixmap(pixmapYellow);
				break;
				case 7:
					gui->ui.thermalFront8->setPixmap(pixmapYellow);
				break;
			}
		}
	}

}

void thermalGui::drawThermal2()
{	
	//ROS_INFO("Thermal msg from topic 2 received, ambient: %i", msg2.ambientTemp);
	
	for(int i=0; i<8; i++){	
		if(msg2.pixelTemp[i] >= thermalThreshold){
			switch(i){
				case 0:
					gui->ui.thermalRight1->setPixmap(pixmapRed);
				break;
				case 1:
					gui->ui.thermalRight2->setPixmap(pixmapRed);
				break;
				case 2:
					gui->ui.thermalRight3->setPixmap(pixmapRed);
				break;
				case 3:
					gui->ui.thermalRight4->setPixmap(pixmapRed);
				break;
				case 4:
					gui->ui.thermalRight5->setPixmap(pixmapRed);
				break;
				case 5:
					gui->ui.thermalRight6->setPixmap(pixmapRed);
				break;
				case 6:
					gui->ui.thermalRight7->setPixmap(pixmapRed);
				break;
				case 7:
					gui->ui.thermalRight8->setPixmap(pixmapRed);
				break;
			}
		}
		else{
			switch(i){

				case 0:
					gui->ui.thermalRight1->setPixmap(pixmapYellow);
				break;
				case 1:
					gui->ui.thermalRight2->setPixmap(pixmapYellow);
				break;
				case 2:
					gui->ui.thermalRight3->setPixmap(pixmapYellow);
				break;
				case 3:
					gui->ui.thermalRight4->setPixmap(pixmapYellow);
				break;
				case 4:
					gui->ui.thermalRight5->setPixmap(pixmapYellow);
				break;
				case 5:
					gui->ui.thermalRight6->setPixmap(pixmapYellow);
				break;
				case 6:
					gui->ui.thermalRight7->setPixmap(pixmapYellow);
				break;
				case 7:
					gui->ui.thermalRight8->setPixmap(pixmapYellow);
				break;
			}
		}
	}

}

