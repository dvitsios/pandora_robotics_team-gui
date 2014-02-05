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
  * stateManagerGui implementation files
  * Author: Dimitrios Vitsios
  * Date: 18 April 2011
  * Change History: 
*/


#include "stateManagerGui.h"
#include "masterGui.h"
#include <iostream>
using namespace std;

int autonomousStateFlag;
int semiAutonomousStateFlag;
int teleoperatedStateFlag;
int armTeleoperatedStateFlag;
extern int continueInAutonomousMode;
extern QMutex contAutonMutex;
int armSearchCompleteFlag;

clock_t start = clock();


stateManagerGui::stateManagerGui() : StateClient()
{
	/*enum { MODE_OFF = 0 };
	  enum { MODE_TELEOPERATED_LOCOMOTION = 7 };
	  enum { MODE_SEMI_AUTONOMOUS = 6 };
	  enum { MODE_ARM_TELEOPERATION = 8 };
	  enum { MODE_ARM_TELEOPERATION_TUCK = 9 };
	  enum { MODE_EXPLORATION = 1 };
	  enum { MODE_IDENTIFICATION = 2 };
	  enum { MODE_ARM_APPROACH = 3 };
	  enum { MODE_ARM_SCAN = 4 };
	  enum { MODE_ARM_SEARCH_COMPLETE = 5 };
	  enum { MODE_TERMINATING = 10 };
	  enum { TYPE_TRANSITION = 0 };
	  enum { TYPE_START = 1 };
	  enum { TYPE_REQUEST = 3 };
	  enum { TYPE_ACK = 4 };
  */
	armSearchCompleteFlag = 0;
	mlx = co2 = sound = skin = motion = face = 0.0;
	
	_testSensorsSubscriber = _handle.subscribe("/dataFusion/fusionGlobal", 1 ,&stateManagerGui::testSensorsReceiver,this);
	
	connect(gui->ui.statesComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeState(int)), Qt::DirectConnection);
	connect(gui->ui.armTeleoperationCheckBox, SIGNAL(stateChanged(int)), this, SLOT(changeArmState(int)), Qt::DirectConnection);
	connect(gui->ui.forceModeOffButton, SIGNAL(clicked()), this, SLOT(onModeOffClicked()), Qt::DirectConnection);
	connect(gui->ui.clearPandoraTextBrowserButton, SIGNAL(clicked()), this, SLOT(onClearPandoraTextBrClicked()), Qt::DirectConnection);
	
	
	autonomousStateFlag = 0;
	semiAutonomousStateFlag = 0;
	teleoperatedStateFlag = 0;
	armTeleoperatedStateFlag = 0;
	gui->ui.armTeleoperationCheckBox->setEnabled(true);
	gui->ui.currentStateLabel->setText("MODE_OFF");
	
	timer = 0;
	
	forceModeOffAction = new QAction(this);
    forceModeOffAction->setStatusTip(tr("Force MODE_OFF state!"));
    forceModeOffAction->setShortcut(Qt::Key_Escape);
    connect(forceModeOffAction,SIGNAL(triggered()),this,SLOT(onModeOffClicked()), Qt::DirectConnection);
    connect(gui->ui.forceModeOffButton, SIGNAL(clicked()), this, SLOT(onModeOffClicked()), Qt::DirectConnection);
    gui->ui.forceModeOffButton->addAction(forceModeOffAction);

	
	QTimer *displayElapsedTimeTimer= new QTimer(this);
    connect(displayElapsedTimeTimer, SIGNAL(timeout()), this, SLOT(displayElapsedTime()));//, Qt::QueuedConnection); //Qt::DirectConnection);
    displayElapsedTimeTimer->start(1000);
    
    gui->ui.armTeleoperationCheckBox->setEnabled(false);
    
    QTimer *displaySensorsValuesTimer = new QTimer(this);
	connect(displaySensorsValuesTimer, SIGNAL(timeout()), this, SLOT(displaySensorsValues()), Qt::QueuedConnection); //Qt::DirectConnection);
	displaySensorsValuesTimer->start(1000);
	
}

void stateManagerGui::displaySensorsValues()
{
	if(armSearchCompleteFlag == 1){
		mlx = msg.mlx;
		co2 = msg.co2;
		sound = msg.sound;
		skin = msg.skin;
		motion = msg.motion;
		face = msg.face; 
		gui->ui.mlxProgressbar->setValue(mlx*100);
		gui->ui.co2Progressbar->setValue(co2*100);
		gui->ui.soundProgressbar->setValue(sound*100);
		gui->ui.skinProgressbar->setValue(skin*100);
		gui->ui.motionProgressbar->setValue(motion*100);
		gui->ui.faceProgressbar->setValue(face*100);
		gui->ui.mlxDbgLCD->display(mlx*100);
		gui->ui.co2DbgLCD->display(co2*100);
		gui->ui.soundDbgLCD->display(sound*100);
		gui->ui.skinDbgLCD->display(skin*100);
		gui->ui.motionDbgLCD->display(motion*100);
		gui->ui.faceDbgLCD->display(face*100);
	}
	else{
		gui->ui.mlxProgressbar->setValue(0);
		gui->ui.co2Progressbar->setValue(0);
		gui->ui.soundProgressbar->setValue(0);
		gui->ui.skinProgressbar->setValue(0);
		gui->ui.motionProgressbar->setValue(0);
		gui->ui.faceProgressbar->setValue(0);
		gui->ui.mlxDbgLCD->display(0);
		gui->ui.co2DbgLCD->display(0);
		gui->ui.soundDbgLCD->display(0);
		gui->ui.skinDbgLCD->display(0);
		gui->ui.motionDbgLCD->display(0);
		gui->ui.faceDbgLCD->display(0);
	}
	
}

void stateManagerGui::testSensorsReceiver(const dataFusion_communications::fusionGlobalMsg &sensorsMsg)
{
	msg = sensorsMsg;
}

void stateManagerGui::onClearPandoraTextBrClicked()
{
	gui->ui.pandoraTextBrowser->setText("");
}

void stateManagerGui::onModeOffClicked()
{
	transitionToState(stateManager_communications::robotModeMsg::MODE_OFF);
	gui->ui.statesComboBox->setCurrentIndex(0);
}

void stateManagerGui::displayElapsedTime()
{
	timer++;
	int sec = timer%60;
	int min = timer/60;
	gui->ui.timeElapsedMinutesLCD->display(min);
	gui->ui.timeElapsedSecondsLCD->display(sec);
}

int stateManagerGui::changeState(int index)
{
	if(index == 0){	
		transitionToState(stateManager_communications::robotModeMsg::MODE_OFF);
		//gui->ui.pandoraTextBrowser->append("[GUI]: Changing to MODE_OFF");
	}
	else if(index == 1){	
		transitionToState(stateManager_communications::robotModeMsg::MODE_TELEOPERATED_LOCOMOTION);
		//gui->ui.pandoraTextBrowser->append("[GUI]: Changing to teleoperation");
	}
	else if(index == 2){
		transitionToState(stateManager_communications::robotModeMsg::MODE_EXPLORATION);
		//gui->ui.pandoraTextBrowser->append("[GUI]: Changing to AUTONOMOUS");
	}
	else if(index == 3){
		transitionToState(stateManager_communications::robotModeMsg::MODE_ARM_SEARCH_COMPLETE);
		//gui->ui.pandoraTextBrowser->append("[GUI]: Changing to AMODE_ARM_SEARCH_COMPLETE");
	}
	
	return index;
}

int stateManagerGui::changeArmState(int index)
{
	if(index == 2)
		transitionToState(stateManager_communications::robotModeMsg::MODE_ARM_TELEOPERATION);
	else if(index == 0){
		transitionToState(stateManager_communications::robotModeMsg::MODE_TELEOPERATED_LOCOMOTION);
		gui->ui.statesComboBox->setCurrentIndex(1);
	}

	return index;
}

void stateManagerGui::startTransition(int newState)
{
	transState = newState;
	ROS_INFO("[GUI] Transition Started!");
	switch(newState){
		case 0:
			mutex.lock();
			autonomousStateFlag = 0;
			semiAutonomousStateFlag = 0;
			teleoperatedStateFlag = 0;
			armTeleoperatedStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.groupBox_2->setChecked(false);
			mutex.unlock();	
			gui->ui.statesComboBox->setCurrentIndex(0);
			//ROS_INFO("[GUI] changed into *** MODE_OFF *** state!");
			gui->ui.currentStateLabel->setText("MODE_OFF");
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 1:
			mutex.lock();
			autonomousStateFlag = 1;
			semiAutonomousStateFlag = 0;
			teleoperatedStateFlag = 0;
			armTeleoperatedStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.groupBox_2->setChecked(false);
			mutex.unlock();	
			//ROS_INFO("[GUI] changed into *** AUTONOMOUS *** state!");
			gui->ui.statesComboBox->setCurrentIndex(2);
			gui->ui.currentStateLabel->setText("MODE_EXPLORATION");
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 2:
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_IDENTIFICATION");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 3:
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_ARM_APPROACH");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 4:	
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_ARM_SCAN");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 5:
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_ARM_SEARCH_COMPLETE");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(true);
			armSearchCompleteFlag =  1;
			break;
		case 6:
			mutex.lock();
			autonomousStateFlag = 0;
			semiAutonomousStateFlag = 1;
			teleoperatedStateFlag = 1;
			armTeleoperatedStateFlag = 0;
			mutex.unlock();	
			//ROS_INFO("[GUI] changed into *** SEMI-AUTONOMOUS ***");
			gui->ui.armTeleoperationCheckBox->setEnabled(true);
			gui->ui.groupBox_2->setChecked(true);
			gui->ui.currentStateLabel->setText("MODE_SEMI_AUTONOMOUS");
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 7:
			mutex.lock();
			autonomousStateFlag = 0;
			semiAutonomousStateFlag = 0;
			teleoperatedStateFlag = 1;
			armTeleoperatedStateFlag = 0;
			gui->ui.groupBox_2->setChecked(true);
			gui->ui.armTeleoperationCheckBox->setEnabled(true);
			mutex.unlock();	
			//ROS_INFO("[GUI] changed into *** TELEOPERATION *** state!");
			gui->ui.statesComboBox->setCurrentIndex(1);
			gui->ui.currentStateLabel->setText("MODE_TELEOPERATED_LOCOMOTION");
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 8:
			mutex.lock();
			autonomousStateFlag = 0;
			semiAutonomousStateFlag = 0;
			teleoperatedStateFlag = 1;
			armTeleoperatedStateFlag = 1;
			gui->ui.groupBox_2->setChecked(true);
			mutex.unlock();	
			//ROS_INFO("[GUI] changed into *** ARM-TELEOPERATION *** state!");
			
			gui->ui.currentStateLabel->setText("MODE_ARM_TELEOPERATION");
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 9:
			//ROS_INFO("[GUI] changed into *** ARM-TELEOPERATION TUCK*** state!");
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_ARM_TELEOPERATION_TUCK");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		case 10:
			teleoperatedStateFlag = 0;
			semiAutonomousStateFlag = 0;
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("MODE_TERMINATING");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
		default:
			//ROS_ERROR("[GUI]: NOT A VALID STATE!");
			gui->ui.armTeleoperationCheckBox->setEnabled(false);
			gui->ui.currentStateLabel->setText("NOT A VALID STATE!");
			gui->ui.groupBox_2->setChecked(false);
			gui->ui.checkSensorsGroupBox->setChecked(false);
			armSearchCompleteFlag =  0;
			break;
	}
	transitionComplete(newState);
}


void stateManagerGui::completeTransition()
{
	curState = transState;
	//gui->ui.pandoraTextBrowser->append("[GUI]: Transition Completed!");
	//gui->ui.pandoraTextBrowser->append("------------------");
}
