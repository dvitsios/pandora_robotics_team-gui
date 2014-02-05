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
  * sonarGui Module implementation
  * Author: Dimitrios Vitsios
  * Date: 16 March 2011
  * Change History: - 
  */

#include "sonarGui.h"
#include "masterGui.h"

sonarGui::sonarGui()
{
	
     //Declare subscribers
     _sonarSubscriber = _handle.subscribe("/gui/sensors/sonar", 1 ,&sonarGui::sonarGuiReceiver,this);

	_handle.setCallbackQueue(&my_callback_queue);
	my_callback_queue.callAvailable(ros::WallDuration());
	
	gui->ui.sonarLCDLeft->display(-1);
	gui->ui.sonarLCDRear1->display(-1);
	gui->ui.sonarLCDRear2->display(-1);
	gui->ui.sonarLCDRight->display(-1);
	gui->ui.sonarLCDFront->display(-1);
	gui->ui.sonarLCDArm->display(-1);

	QTimer *sonarTimer= new QTimer(this);
     	connect(sonarTimer, SIGNAL(timeout()), this, SLOT(updateSonars()));//, Qt::QueuedConnection); //Qt::DirectConnection);
     	sonarTimer->start(1000);
}


void sonarGui::sonarGuiReceiver(const controllersAndSensors_communications::sonarMsg &msg)
{		
	sonarMessage = msg;
}

void sonarGui::updateSonars()
{
	//display distance from sonars in cm
	if(sonarMessage.distance[0] == -1)
		gui->ui.sonarLCDLeft->display(-1);
	else
		gui->ui.sonarLCDLeft->display((sonarMessage.distance[0])/10);
		
	if(sonarMessage.distance[3] == -1)
		gui->ui.sonarLCDRear1->display(-1);
	else
		gui->ui.sonarLCDRear1->display((sonarMessage.distance[3])/10);
	
	if(sonarMessage.distance[4] == -1)
		gui->ui.sonarLCDRear2->display(-1);
	else
		gui->ui.sonarLCDRear2->display((sonarMessage.distance[4])/10);
		
	if(sonarMessage.distance[2] == -1)
		gui->ui.sonarLCDRight->display(-1);
	else
		gui->ui.sonarLCDRight->display((sonarMessage.distance[2])/10);
		
	if(sonarMessage.distance[1] == -1)
		gui->ui.sonarLCDFront->display(-1);
	else
		gui->ui.sonarLCDFront->display((sonarMessage.distance[1])/10);
		
	if(sonarMessage.distance[5] == -1)
		gui->ui.sonarLCDArm->display(-1);
	else
		gui->ui.sonarLCDArm->display((sonarMessage.distance[5])/10);
}

