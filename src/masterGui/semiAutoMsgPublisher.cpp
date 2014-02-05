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
  * semiAutoMsgPublisher client implementation files
  * Author: Dimitrios Vitsios
  * Date: 28 June 2011
  * Change History: 
*/


#include "semiAutoMsgPublisher.h"
#include "masterGui.h"
#include "math.h"
#include "time.h"
#include <iostream>
#include <fstream>


#define MAX 4000
#define PI 3.1415

extern int teleoperatedStateFlag;
extern int widthFinal,heightFinal;
extern int targetX;
extern int targetY;

extern int selectedSensorID1;
extern int selectedSensorID2;
extern int selectedSensorID3;
extern int selectedSensorID4;
extern int selectedSensorID5;
extern int selectedSensorID6;


semiAutoMsgPublisher::semiAutoMsgPublisher(){

	
	connect(gui->ui.semiAutoConfirmButton, SIGNAL(clicked()), this, SLOT(onConfirmButtonClicked()));

	targetPosition_pub = _handle.advertise<gui_communications::targetPosition>("/guiMsgs/semiAutonomous",1);

	_handle.setCallbackQueue(&my_callback_queue);
	my_callback_queue.callAvailable(ros::WallDuration());
	
}


void semiAutoMsgPublisher::onConfirmButtonClicked()
{
	
	if(teleoperatedStateFlag){
		positionMsg.x = targetX;
		positionMsg.y = targetY;
		
		selectedSensors.clear();
		
		if(selectedSensorID1 != -1){
			selectedSensors.push_back(selectedSensorID1);
		}
		if(selectedSensorID2 != -1){
			selectedSensors.push_back(selectedSensorID2);
		}
		if(selectedSensorID3 != -1){
			selectedSensors.push_back(selectedSensorID3);
		}
		if(selectedSensorID4 != -1){
			selectedSensors.push_back(selectedSensorID4);
		}
		if(selectedSensorID5 != -1){
			selectedSensors.push_back(selectedSensorID5);
		}
		if(selectedSensorID6 != -1){
			selectedSensors.push_back(selectedSensorID6);
		}
		
		positionMsg.sensorsIDs = selectedSensors;	
		
		targetPosition_pub.publish(positionMsg); 	
		gui->ui.pandoraTextBrowser->append("[GUI]: Victim was registered succesfully!");
	}
}







