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
  * moveArmGui client implementation files
  * Author: Dimitrios Vitsios
  * Date: 6 April 2011
  * Change History: 
*/


#include "moveArmGui.h"
#include "masterGui.h"

#define PI 3.14159 

extern int armTeleoperatedStateFlag;
extern int teleoperatedStateFlag;


moveArmGui::moveArmGui() : _actionClient("/arm/armControl",true) 
{

	//ROS_INFO("Waiting for action server to start.");
  		//_actionClient.waitForServer(); 
  	//ROS_INFO("Action server started, sending goal.");
  	
  	_gripperClient = _handle.serviceClient<controllersAndSensors_communications::gripperControlSrv>("/sensors/gripperControl");
	

	generateActions();
	connect(gui->ui.xyzStepDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(onXyzStepChanged(double)));
	connect(gui->ui.angleStepDoubleSpinBox, SIGNAL(valueChanged(double)), this, SLOT(onAngleStepChanged(double)));

	connect(gui->ui.gripperGrabButton, SIGNAL(clicked()), this, SLOT(onGrabGripperClicked()));
	connect(gui->ui.gripperReleaseButton, SIGNAL(clicked()), this, SLOT(onReleaseGripperClicked()));
	connect(gui->ui.gripperStopButton, SIGNAL(clicked()), this, SLOT(onStopGripperClicked()));
	
	QTimer *timerRead = new QTimer(this);
    connect(timerRead, SIGNAL(timeout()), this, SLOT(readPosition()));
    timerRead->start(100);

	A = 0;
	B = 0;
	C = 0;
	toRad = PI/180;	
	xyzStep = 0.15;
	angleStep = 4.0*toRad;
	
	parkingOffset = 0.121;
}

void moveArmGui::onGrabGripperClicked()
{
	if(armTeleoperatedStateFlag){
		srv.request.state = 1;
		
		if (_gripperClient.call(srv)) 
	  	{
	    	  ROS_INFO("Gripper closed successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call **Close Gripper** - Forward Button");
	  	}
	}
}

void moveArmGui::onReleaseGripperClicked()
{
	if(armTeleoperatedStateFlag){
		srv.request.state = 2;
		
		if (_gripperClient.call(srv)) 
	  	{
	    	  ROS_INFO("Gripper opened successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call **Release Gripper** - Forward Button");
	  	}
	}
}

void moveArmGui::onStopGripperClicked()
{
	if(armTeleoperatedStateFlag){
		srv.request.state = 0;
		
		if (_gripperClient.call(srv)) 
	  	{
	    	  ROS_INFO("Gripper stopped successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call **Stop Gripper** - Forward Button");
	  	}
	}
}

void moveArmGui::onXyzStepChanged(double newXyzStep)
{
	mutex.lock();
	xyzStep = newXyzStep/100;
	mutex.unlock();	
	ROS_INFO("New xyzStep: %lf m", xyzStep);
}

void moveArmGui::onAngleStepChanged(double newAngleStep)
{
	mutex.lock();
	angleStep = newAngleStep*toRad;
	mutex.unlock();	
	ROS_INFO("New angleStep: %lf rad", angleStep);
}

void moveArmGui::generateActions()
{
	
	XForwardAction = new QAction(this);
	XForwardAction->setStatusTip(tr("Increase x-position of arm head"));
	XForwardAction->setShortcut(Qt::Key_W);
	connect(XForwardAction,SIGNAL(triggered()),this,SLOT(onXForwardClicked()));
	connect(gui->ui.xForwardButton, SIGNAL(clicked()), this, SLOT(onXForwardClicked()));
	gui->ui.xForwardButton->addAction(XForwardAction);

	XBackwardAction = new QAction(this);
	XBackwardAction->setStatusTip(tr("Decrease x-position of arm head"));
	XBackwardAction->setShortcut(Qt::Key_S);
	connect(XBackwardAction,SIGNAL(triggered()),this,SLOT(onXBackwardClicked()));
	connect(gui->ui.xBackwardButton, SIGNAL(clicked()), this, SLOT(onXBackwardClicked()));
	gui->ui.xBackwardButton->addAction(XBackwardAction);

	YForwardAction = new QAction(this);
	YForwardAction->setStatusTip(tr("Increase y-position of arm head"));
	YForwardAction->setShortcut(Qt::Key_A);
	connect(YForwardAction,SIGNAL(triggered()),this,SLOT(onYForwardClicked()));
	connect(gui->ui.yLeftButton, SIGNAL(clicked()), this, SLOT(onYForwardClicked()));
	gui->ui.yLeftButton->addAction(YForwardAction);

	YBackwardAction = new QAction(this);
	YBackwardAction->setStatusTip(tr("Decrease y-position of arm head"));
	YBackwardAction->setShortcut(Qt::Key_D);
	connect(YBackwardAction,SIGNAL(triggered()),this,SLOT(onYBackwardClicked()));
	connect(gui->ui.yRightButton, SIGNAL(clicked()), this, SLOT(onYBackwardClicked()));
	gui->ui.yRightButton->addAction(YBackwardAction);

	ZForwardAction = new QAction(this);
	ZForwardAction->setStatusTip(tr("Increase z-position of arm head"));
	ZForwardAction->setShortcut(Qt::Key_R);
	connect(ZForwardAction,SIGNAL(triggered()),this,SLOT(onZForwardClicked()));
	connect(gui->ui.zUpButton, SIGNAL(clicked()), this, SLOT(onZForwardClicked()));
	gui->ui.zUpButton->addAction(ZForwardAction);

	ZBackwardAction = new QAction(this);
	ZBackwardAction->setStatusTip(tr("Decrease z-position of arm head"));
	ZBackwardAction->setShortcut(Qt::Key_F);
	connect(ZBackwardAction,SIGNAL(triggered()),this,SLOT(onZBackwardClicked()));
	connect(gui->ui.zDownButton, SIGNAL(clicked()), this, SLOT(onZBackwardClicked()));
	gui->ui.zDownButton->addAction(ZBackwardAction);

	bUpAction = new QAction(this);
	bUpAction->setStatusTip(tr("Increase arm angle (upwards)"));
	bUpAction->setShortcut(Qt::Key_Y);
	connect(bUpAction,SIGNAL(triggered()),this,SLOT(onBUpClicked()));
	connect(gui->ui.bUpButton, SIGNAL(clicked()), this, SLOT(onBUpClicked()));
	gui->ui.bUpButton->addAction(bUpAction);

	bDownAction = new QAction(this);
	bDownAction->setStatusTip(tr("Decrease arm angle (downwards)"));
	bDownAction->setShortcut(Qt::Key_B);
	connect(bDownAction,SIGNAL(triggered()),this,SLOT(onBDownClicked()));
	connect(gui->ui.bDownButton, SIGNAL(clicked()), this, SLOT(onBDownClicked()));
	gui->ui.bDownButton->addAction(bDownAction);

	aResetAction = new QAction(this);
	aResetAction->setStatusTip(tr("Reset angle a to zero."));
	aResetAction->setShortcut(Qt::Key_Z);
	connect(aResetAction,SIGNAL(triggered()),this,SLOT(onAResetClicked()));
	connect(gui->ui.resetAngleAButton, SIGNAL(clicked()), this, SLOT(onAResetClicked()));
	gui->ui.resetAngleAButton->addAction(aResetAction);

	aLeftAction = new QAction(this);
	aLeftAction->setStatusTip(tr("Turn arm to the left"));
	aLeftAction->setShortcut(Qt::Key_G);
	connect(aLeftAction,SIGNAL(triggered()),this,SLOT(onALeftClicked()));
	connect(gui->ui.aLeftButton, SIGNAL(clicked()), this, SLOT(onALeftClicked()));
	gui->ui.aLeftButton->addAction(aLeftAction);

	aRightAction = new QAction(this);
	aRightAction->setStatusTip(tr("Turn arm to the right"));
	aRightAction->setShortcut(Qt::Key_H);
	connect(aRightAction,SIGNAL(triggered()),this,SLOT(onARightClicked()));
	connect(gui->ui.aRightButton, SIGNAL(clicked()), this, SLOT(onARightClicked()));
	gui->ui.aRightButton->addAction(aRightAction); 

	parkAction = new QAction(this);
	parkAction->setStatusTip(tr("Set arm to the parking position"));
	parkAction->setShortcut(Qt::Key_P);
	connect(parkAction,SIGNAL(triggered()),this,SLOT(onParkClicked()));
	connect(gui->ui.parkArmButton, SIGNAL(clicked()), this, SLOT(onParkClicked()));
	gui->ui.parkArmButton->addAction(parkAction); 
	
	 armHeadLeftAction = new QAction(this);
	 armHeadLeftAction->setStatusTip(tr("Turn arm head to the left."));
	 armHeadLeftAction->setShortcut(Qt::Key_J);
	 connect(armHeadLeftAction,SIGNAL(triggered()),this,SLOT(onArmHeadLeftClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadLeftPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadLeftClicked()), Qt::DirectConnection);
	 gui->ui.armHeadLeftPushButton->addAction(armHeadLeftAction);
	 
	 armHeadRightAction = new QAction(this);
	 armHeadRightAction->setStatusTip(tr("Turn arm head to the right."));
	 armHeadRightAction->setShortcut(Qt::Key_K);
	 connect(armHeadRightAction,SIGNAL(triggered()),this,SLOT(onArmHeadRightClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadRightPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadRightClicked()), Qt::DirectConnection);
	 gui->ui.armHeadRightPushButton->addAction(armHeadRightAction);
	 
	 armHeadResetAction = new QAction(this);
	 armHeadResetAction->setStatusTip(tr("Reset arm head position to 90 deg (lef-right direction)."));
	 armHeadResetAction->setShortcut(Qt::Key_C);
	 connect(armHeadResetAction,SIGNAL(triggered()),this,SLOT(onArmHeadResetClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadResetPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadResetClicked()), Qt::DirectConnection);
	 gui->ui.armHeadResetPushButton->addAction(armHeadResetAction);
	 
	 armHeadUpAction = new QAction(this);
	 armHeadUpAction->setStatusTip(tr("Turn up arm head."));
	 armHeadUpAction->setShortcut(Qt::Key_I);
	 connect(armHeadUpAction,SIGNAL(triggered()),this,SLOT(onArmHeadUpClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadUpPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadUpClicked()), Qt::DirectConnection);
	 gui->ui.armHeadUpPushButton->addAction(armHeadUpAction);
	 
	 armHeadDownAction = new QAction(this);
	 armHeadDownAction->setStatusTip(tr("Turn down arm head."));
	 armHeadDownAction->setShortcut(Qt::Key_M);
	 connect(armHeadDownAction,SIGNAL(triggered()),this,SLOT(onArmHeadDownClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadDownPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadDownClicked()), Qt::DirectConnection);
	 gui->ui.armHeadDownPushButton->addAction(armHeadDownAction);
	 
	 armHeadResetUpDownAction = new QAction(this);
	 armHeadResetUpDownAction->setStatusTip(tr("Reset up-down arm head."));
	 armHeadResetUpDownAction->setShortcut(Qt::Key_X);
	 connect(armHeadResetUpDownAction,SIGNAL(triggered()),this,SLOT(onArmHeadResetUpDownClicked()), Qt::DirectConnection);
	 connect(gui->ui.armHeadResetUpDownPushButton, SIGNAL(clicked()), this, SLOT(onArmHeadResetUpDownClicked()), Qt::DirectConnection);
	 gui->ui.armHeadResetPushButton->addAction(armHeadResetUpDownAction);

}

void moveArmGui::onParkClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.motionType = 3;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in PARK: Unable to move!"); 
		else
			gui->ui.pandoraTextBrowser->append("PARK called succesfully!");
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onXForwardClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X + (xyzStep*cos(A)*cos(B));	
		goal.y = Y + xyzStep*(sin(A)*cos(B)); 
		goal.z = Z + xyzStep*(-sin(B));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in X+: Unable to move!"); 
		else
			gui->ui.pandoraTextBrowser->append("X+ called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onXBackwardClicked()
{
	if( armTeleoperatedStateFlag == 1){
	     	mutex.lock();
	     	gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X - (xyzStep*cos(A)*cos(B));	
		goal.y = Y - xyzStep*(sin(A)*cos(B)); 
		goal.z = Z - xyzStep*(-sin(B));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in X-: Unable to move!"); 
		else
			gui->ui.pandoraTextBrowser->append("X- called succesfully!");
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onYForwardClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X + (xyzStep*(cos(A)*sin(B)*sin(C)-sin(A)*cos(C)));	
		goal.y = Y + xyzStep*(sin(A)*sin(B)*sin(C)+cos(A)*cos(C)); 
		goal.z = Z + xyzStep*(cos(B)*sin(C));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in Y+: Unable to move!"); 
		else
			gui->ui.pandoraTextBrowser->append("Y+ called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
} 

void moveArmGui::onYBackwardClicked()
{
	if( armTeleoperatedStateFlag == 1){
	     	mutex.lock();
	     	gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X - (xyzStep*(cos(A)*sin(B)*sin(C)-sin(A)*cos(C)));	
		goal.y = Y - xyzStep*(sin(A)*sin(B)*sin(C)+cos(A)*cos(C)); 
		goal.z = Z - xyzStep*(cos(B)*sin(C));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in Y-: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("Y- called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onZForwardClicked()
{	
	ROS_INFO("[ARM]-outter inside Z+");
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X + (xyzStep*(cos(A)*sin(B)*cos(C)+sin(A)*sin(C)));	
		goal.y = Y + xyzStep*(sin(A)*sin(B)*cos(C)-cos(A)*sin(C)); 
		goal.z = Z + xyzStep*(cos(B)*cos(C));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));	
		ROS_INFO("[ARM]-inside Z+");
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in Z+: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("Z+ called succesfully!");
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onZBackwardClicked()
{
	if( armTeleoperatedStateFlag == 1){
	     	mutex.lock();
	     	gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		goal.x = X - (xyzStep*(cos(A)*sin(B)*cos(C)+sin(A)*sin(C)));	
		goal.y = Y - xyzStep*(sin(A)*sin(B)*cos(C)-cos(A)*sin(C)); 
		goal.z = Z - xyzStep*(cos(B)*cos(C));
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in Z-: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("Z- called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onBUpClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		B -= angleStep;
		goal.x = X;
		goal.y = Y;
		goal.z = Z;
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in B+: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("B+ called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onBDownClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		B += angleStep;
		goal.x = X;
		goal.y = Y;
		goal.z = Z;
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);	
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in B-: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("B- called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onAResetClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		A = 0;
		goal.x = X;
		goal.y = Y;
		goal.z = Z;
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(5.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in A reset: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("A reset called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onALeftClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		A -= angleStep;
		goal.x = X;
		goal.y = Y;
		goal.z = Z;
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in A+: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("A+ called succesfully!");		
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

void moveArmGui::onARightClicked()
{
	if( armTeleoperatedStateFlag == 1){
		mutex.lock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(255,0, 0,130)\n");
		A += angleStep;
		goal.x = X;
		goal.y = Y;
		goal.z = Z;
		goal.a = A;
		goal.b = B;
		goal.c = C;
		goal.motionType = 2;
		_actionClient.sendGoal(goal);
		_actionClient.waitForResult(ros::Duration(12.0));
		if(_actionClient.getResult()->error)
			gui->ui.pandoraTextBrowser->append("[ARM]-ERROR in A-: Unable to move!");
		else
			gui->ui.pandoraTextBrowser->append("A- called succesfully!");
		mutex.unlock();
		gui->ui.armControlLabel->setStyleSheet("color: rgb(255,255,255);\nbackground:rgba(0,205, 0,130)\n");
	}
}

int moveArmGui::readPosition()
{
	int ret=0;

	
		try{
			listener.lookupTransform("/armBase", "/headCamera",
					ros::Time(0), transform);
		ret = 0;
		}
		catch (tf::TransformException ex){
			ROS_ERROR("%s",ex.what());
		ret = 1;
		}

		mutex.lock();
		X = transform.getOrigin().x();
		Y = transform.getOrigin().y();
		Z = transform.getOrigin().z();
		btMatrix3x3(transform.getRotation()).getRPY(C,B,A);
		ROS_INFO("X: %f, Y: %f, Z: %f \n", X, Y, Z);
		mutex.unlock();

	return ret;
}

void moveArmGui::onArmHeadLeftClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){
		mutex.lock();
		float temp_position = armHeadPosition;
		ROS_INFO("[GUI] Start: arm head left = %f", armHeadPosition);
		armHeadPosition += 20;
		if(armHeadPosition>=-70 && armHeadPosition<=70){	
			ROS_INFO("[GUI] Middle: arm head left = %f", armHeadPosition);
			goal.motionType = 1;
			goal.th5 = armHeadPosition*toRad;	
			_actionClient.sendGoal(goal);
			//wait for the action to return
			bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		}
		else
			armHeadPosition -= 20;
		ROS_INFO("[GUI] End: arm head left = %f", armHeadPosition);
		mutex.unlock();
	}
}

void moveArmGui::onArmHeadRightClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){	
		mutex.lock();
		float temp_position = armHeadPosition;
		ROS_INFO("[GUI] Start: arm head left = %f", armHeadPosition);
		armHeadPosition -= 20;
		
		if(armHeadPosition>=-70 && armHeadPosition<=70){	
			ROS_INFO("[GUI] Middle: arm head left = %f", armHeadPosition);
			goal.motionType = 1;
			goal.th5 = armHeadPosition*toRad;	
			_actionClient.sendGoal(goal);
			//wait for the action to return
			bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		}
		else
			armHeadPosition +=20;
		ROS_INFO("[GUI] End: arm head left = %f", armHeadPosition);
		mutex.unlock();
	}
}

void moveArmGui::onArmHeadResetClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){	
		mutex.lock();
		
		armHeadPosition = 0;
		goal.motionType = 1;
		goal.th5 = armHeadPosition;	
		_actionClient.sendGoal(goal);
		//wait for the action to return
		bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		ROS_INFO("[GUI] arm head left = %f", armHeadPosition);
		mutex.unlock();
	}
}



void moveArmGui::onArmHeadUpClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){	
		mutex.lock();
		float temp_position = armHeadVerticalPosition;
		
		armHeadVerticalPosition += 10;
		if(armHeadVerticalPosition>=-90 && armHeadVerticalPosition<=70){	
			
			goal.motionType = 5;
			goal.th4 = armHeadVerticalPosition*toRad + parkingOffset;	
			goal.th1 = 87;
			goal.th5 = 87;
			_actionClient.sendGoal(goal);
			//wait for the action to return
			bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		}
		else
			armHeadPosition = temp_position;
		
		mutex.unlock();
	}
}

void moveArmGui::onArmHeadDownClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){	
		mutex.lock();
		float temp_position = armHeadVerticalPosition;
		armHeadVerticalPosition -= 10;
		
		if(armHeadVerticalPosition>=-90 && armHeadVerticalPosition<=70){	
			goal.motionType = 5;
			goal.th4 = armHeadVerticalPosition*toRad + parkingOffset;	
			goal.th1 = 87;
			goal.th5 = 87;
			_actionClient.sendGoal(goal);
			//wait for the action to return
			bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		}
		else
			armHeadPosition = temp_position;
		mutex.unlock();
	}
}

void moveArmGui::onArmHeadResetUpDownClicked()
{
	if( (teleoperatedStateFlag == 1) || (armTeleoperatedStateFlag == 1)){	
		mutex.lock();
		
		armHeadVerticalPosition = 0;
		goal.motionType = 5;
		goal.th4 = armHeadVerticalPosition + parkingOffset;	
		goal.th1 = 87;
		goal.th5 = 87;
		_actionClient.sendGoal(goal);
		//wait for the action to return
		bool finished_before_timeout = _actionClient.waitForResult(ros::Duration(5.0));
		
		mutex.unlock();
	}
}
