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
  * soundTest Module implementation
  * Author: Dimitrios Vitsios
  * Date: 28 June 2011
  * Change History: - 
  */

#include "soundTest.h"
#include "masterGui.h"

soundTest::soundTest()
{
	
	//Declare subscribers
	_soundSubscriber = _handle.subscribe("/sensors/soundExistence", 1 ,&soundTest::soundReceiver,this);

	connect(gui->ui.testSoundButton, SIGNAL(clicked()), this, SLOT(testSoundService()));
	
	QTimer *soundTimer = new QTimer(this);
    connect(soundTimer, SIGNAL(timeout()), this, SLOT(updateSoundIndicator()));
    soundTimer->start(1000);
}

void soundTest::updateSoundIndicator()
{
	if(msg.soundExists == true){
		gui->ui.soundExistenceLabel->setStyleSheet("color: yellow");
		gui->ui.soundExistenceLabel->setText("true");
	}
	else{
		gui->ui.soundExistenceLabel->setStyleSheet("color: red");
		gui->ui.soundExistenceLabel->setText("false");
	}
	gui->ui.progressBar->setValue(msg.certainty*100);
}

void soundTest::soundReceiver(const controllersAndSensors_communications::soundExistenceMsg &soundMessage)
{	
	//ROS_INFO("Sound msg received");
	mutex.lock();
	msg = soundMessage;
	mutex.unlock();
}


void soundTest::testSoundService()
{
	//soundExistPercentage = (butterflyMessage.voltage[0]-20)/BATTERIES_RANGE*100;
	//gui->ui.MotorsBatteryProgressBar->setValue(motorsPercentage);
}
