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
  * mainMotorStateGui node implementation files
  * Author: Dimitrios Vitsios
  * Date: 10 March 2011
  * Change History: 
*/

#include "mainMotorStateGui.h"
#include "masterGui.h"

extern int teleoperatedStateFlag;

mainMotorStateGui::mainMotorStateGui(){

	//Declare subscribers
	_mainMotorStateSubscriber = _handle.subscribe("/mainMotorControl/status",1,&mainMotorStateGui::mainMotorStateReceiver,this);

	//_handle.setCallbackQueue(&my_callback_queue);
	//my_callback_queue.callAvailable(ros::WallDuration());

	QTimer *motorStatusTimer= new QTimer(this);
	connect(motorStatusTimer, SIGNAL(timeout()), this, SLOT(updateMotorStatus()));
	motorStatusTimer->start(1000);
	
}


void mainMotorStateGui::mainMotorStateReceiver(const mainMotorControl_communications::mainMotorStateMsg &msg){
	
	//ROS_INFO("Hi I got the message %i",msg.velocityLeft);
	mainMotStMessage = msg;
}

void mainMotorStateGui::updateMotorStatus()
{	
	//displaying in navigation tab
	if(!teleoperatedStateFlag){
		gui->ui.motorLinearLCD->display(mainMotStMessage.velocityLinear);
		gui->ui.motorAngularLCD->display(mainMotStMessage.velocityAngular);
	}
	
	//displaying in debug tab
	gui->ui.debugMotorLinearLCD->display(mainMotStMessage.velocityLinear);
	gui->ui.debugMotorAngularLCD->display(mainMotStMessage.velocityAngular);
	gui->ui.motorLeftRpm->display(mainMotStMessage.velocityLeft);
	gui->ui.motorRightRpm->display(mainMotStMessage.velocityRight);
}

