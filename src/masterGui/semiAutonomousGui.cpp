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
  * semiAutonomousGui client implementation files
  * Author: Dimitrios Vitsios
  * Date: 15 March 2011
  * Change History: 
*/


#include <vector>
#include "semiAutonomousGui.h"
#include "masterGui.h"
#include "math.h"
#include "time.h"
using namespace std;

#define MAX 4000
#define PI 3.1415

extern int teleoperatedStateFlag;
extern int widthFinal,heightFinal;
extern int imageWidth,imageHeight;
extern int sensorsCounter;
int targetX;
int targetY;

int selectedSensorID1;
int selectedSensorID2;
int selectedSensorID3;
int selectedSensorID4;
int selectedSensorID5;
int selectedSensorID6;



semiAutonomousGui::semiAutonomousGui(){

	int i,j,k;
	mapsize = gui->ui.mapLabel->size();
	selectedSensorID1 = -1;
	selectedSensorID2 = -1;
	selectedSensorID3 = -1;
	selectedSensorID4 = -1;
	selectedSensorID5 = -1;
	selectedSensorID6 = -1;
	
	connect(gui->ui.clearMousePressEventsPushButton, SIGNAL(clicked()), this, SLOT(onClearTextBrowserClicked()));
	connect(gui->ui.sensorsComboBox1, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor1Selected(int)));
	connect(gui->ui.sensorsComboBox2, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor2Selected(int)));
	connect(gui->ui.sensorsComboBox3, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor3Selected(int)));
	connect(gui->ui.sensorsComboBox4, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor4Selected(int)));
	connect(gui->ui.sensorsComboBox5, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor5Selected(int)));
	connect(gui->ui.sensorsComboBox6, SIGNAL(currentIndexChanged(int)), this, SLOT(onSensor6Selected(int)));

	gui->ui.mapLabel->setAlignment(Qt::AlignLeft | Qt::AlignTop);
	gui->ui.mapLabel->installEventFilter(this);
	
}

void semiAutonomousGui::onSensor1Selected(int index)
{
	if(index == 0)
		selectedSensorID1 = -1;
	else if(index == 1)
		selectedSensorID1 = 9;
	else if(index == 2)
		selectedSensorID1 = 7;
	else if(index == 3)
		selectedSensorID1 = 1;
	else if(index == 4)
		selectedSensorID1 = 4;
	else if(index == 5)
		selectedSensorID1 = 0;
	else if(index == 6)
		selectedSensorID1 = 5;
	else if(index == 7)
		selectedSensorID1 = 8;		
}

void semiAutonomousGui::onSensor2Selected(int index)
{
	if(index == 0)
		selectedSensorID2 = -1;
	else if(index == 1)
		selectedSensorID2 = 9;
	else if(index == 2)
		selectedSensorID2 = 7;
	else if(index == 3)
		selectedSensorID2 = 1;
	else if(index == 4)
		selectedSensorID2 = 4;
	else if(index == 5)
		selectedSensorID2 = 0;
	else if(index == 6)
		selectedSensorID2 = 5;
	else if(index == 7)
		selectedSensorID2 = 8;
}

void semiAutonomousGui::onSensor3Selected(int index)
{
	if(index == 0)
		selectedSensorID3 = -1;
	else if(index == 1)
		selectedSensorID3 = 9;
	else if(index == 2)
		selectedSensorID3 = 7;
	else if(index == 3)
		selectedSensorID3 = 1;
	else if(index == 4)
		selectedSensorID3 = 4;
	else if(index == 5)
		selectedSensorID3 = 0;
	else if(index == 6)
		selectedSensorID3 = 5;
	else if(index == 7)
		selectedSensorID3 = 8;
}

void semiAutonomousGui::onSensor4Selected(int index)
{
	if(index == 0)
		selectedSensorID4 = -1;
	else if(index == 1)
		selectedSensorID4 = 9;
	else if(index == 2)
		selectedSensorID4 = 7;
	else if(index == 3)
		selectedSensorID4 = 1;
	else if(index == 4)
		selectedSensorID4 = 4;
	else if(index == 5)
		selectedSensorID4 = 0;
	else if(index == 6)
		selectedSensorID4 = 5;
	else if(index == 7)
		selectedSensorID4 = 8;
}

void semiAutonomousGui::onSensor5Selected(int index)
{
	if(index == 0)
		selectedSensorID5 = -1;
	else if(index == 1)
		selectedSensorID5 = 9;
	else if(index == 2)
		selectedSensorID5 = 7;
	else if(index == 3)
		selectedSensorID5 = 1;
	else if(index == 4)
		selectedSensorID5 = 4;
	else if(index == 5)
		selectedSensorID5 = 0;
	else if(index == 6)
		selectedSensorID5 = 5;
	else if(index == 7)
		selectedSensorID5 = 8;
}

void semiAutonomousGui::onSensor6Selected(int index)
{
	if(index == 0)
		selectedSensorID6 = -1;
	else if(index == 1)
		selectedSensorID6 = 9;
	else if(index == 2)
		selectedSensorID6 = 7;
	else if(index == 3)
		selectedSensorID6 = 1;
	else if(index == 4)
		selectedSensorID6 = 4;
	else if(index == 5)
		selectedSensorID6 = 0;
	else if(index == 6)
		selectedSensorID6 = 5;
	else if(index == 7)
		selectedSensorID6 = 8;
}


bool semiAutonomousGui::eventFilter(QObject *obj, QEvent *event)
{

	if(teleoperatedStateFlag){
		if (event->type() == QEvent::MouseButtonPress)
		{
			QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
			if(imageWidth > widthFinal)
				targetX = mouseEvent->x()*imageWidth/widthFinal;
			else 
				targetX = mouseEvent->x();
			if(imageHeight > heightFinal)
				targetY = mouseEvent->y()*imageHeight/heightFinal;
			else
				targetY = mouseEvent->y();			
		
			QString xPos  = QString::number(targetX);
			QString yPos  = QString::number(targetY);
			gui->ui.semiAutoXValueLabel->setText(xPos);
			gui->ui.semiAutoYValueLabel->setText(yPos);
			
			gui->ui.mousePressEventTextBrowser->append("Received mouse press event");
			gui->ui.mousePressEventTextBrowser->append("x-position on map: ");
			gui->ui.mousePressEventTextBrowser->append(xPos);
			gui->ui.mousePressEventTextBrowser->append("y-position on map: ");
			gui->ui.mousePressEventTextBrowser->append(yPos);
			gui->ui.mousePressEventTextBrowser->append("--------------\n");
			
		}
	

		return QWidget::eventFilter(obj, event);
	}
	return false;
}


void semiAutonomousGui::onClearTextBrowserClicked()
{
	gui->ui.mousePressEventTextBrowser->setText("");
}




