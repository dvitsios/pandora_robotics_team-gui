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
  * setVehicleSpeedGui client implementation files
  * Author: Dimitrios Vitsios
  * Date: 14 March 2011
  * Change History: 
*/

#include "setVehicleSpeedGui.h"
#include "masterGui.h"

extern int teleoperatedStateFlag;


setVehicleSpeedGui::setVehicleSpeedGui() 
{

	//Declare clients
	_setVehicleSpeedClient = _handle.serviceClient<mainMotorControl_communications::setVehicleSpeedSrv>("/mainMotorControl/setVehicleSpeed");
	                    
	curLinearSpeed = 0;
	prevLinearSpeed = curLinearSpeed;
	curRotationalSpeed = 0;
	testCnt = 0;

	generateActions();

	QTimer *timerRead = new QTimer(this);
    connect(timerRead, SIGNAL(timeout()), this, SLOT(setSpeed()));
    timerRead->start(500);

}


void setVehicleSpeedGui::generateActions()
{
     forwardAction = new QAction(this);
     forwardAction->setStatusTip(tr("Move the vehicle forward"));
     forwardAction->setShortcut(Qt::Key_Up);
     connect(forwardAction,SIGNAL(triggered()),this,SLOT(onForwardClicked()), Qt::DirectConnection);
     connect(gui->ui.forwardPushButton, SIGNAL(clicked()), this, SLOT(onForwardClicked()), Qt::DirectConnection);
     gui->ui.forwardPushButton->addAction(forwardAction);

     backwardAction = new QAction(this);
     backwardAction->setStatusTip(tr("Move the vehicle backward"));
     backwardAction->setShortcut(Qt::Key_Down);
     connect(backwardAction,SIGNAL(triggered()),this,SLOT(onBackwardClicked()), Qt::DirectConnection);
     connect(gui->ui.backwardPushButton, SIGNAL(clicked()), this, SLOT(onBackwardClicked()), Qt::DirectConnection);
     gui->ui.backwardPushButton->addAction(backwardAction);

     leftAction = new QAction(this);
     leftAction->setStatusTip(tr("Move the vehicle left"));
     leftAction->setShortcut(Qt::Key_Left);
     connect(leftAction,SIGNAL(triggered()),this,SLOT(onLeftClicked()), Qt::DirectConnection);
     connect(gui->ui.LeftPushButton, SIGNAL(clicked()), this, SLOT(onLeftClicked()), Qt::DirectConnection);
     gui->ui.LeftPushButton->addAction(leftAction);

     rightAction = new QAction(this);
     rightAction->setStatusTip(tr("Move the vehicle right"));
     rightAction->setShortcut(Qt::Key_Right);
     gui->ui.RightPushButton->addAction(rightAction);
     connect(rightAction,SIGNAL(triggered()),this,SLOT(onRightClicked()), Qt::DirectConnection);
     connect(gui->ui.RightPushButton, SIGNAL(clicked()), this, SLOT(onRightClicked()), Qt::DirectConnection);
     

     brakeAction = new QAction(this);
     brakeAction->setStatusTip(tr("Force the vehicle to stop"));
     brakeAction->setShortcut(Qt::Key_Space);
     connect(brakeAction,SIGNAL(triggered()),this,SLOT(forceStop()), Qt::DirectConnection);
     connect(gui->ui.forceStopPushButton, SIGNAL(clicked()), this, SLOT(forceStop()), Qt::DirectConnection);
     gui->ui.forceStopPushButton->addAction(brakeAction);
     
}


int setVehicleSpeedGui::onForwardClicked()
{
	int sign = 1;

	if(teleoperatedStateFlag == 1){	
	
		if( curLinearSpeed <= 0.2 ){	
			prevLinearSpeed = curLinearSpeed;
			curLinearSpeed += 0.04;
		}

		//mutex.lock();
		srv.request.linearSpeed = curLinearSpeed;
		srv.request.rotationalSpeed = curRotationalSpeed;
		//mutex.unlock();

		if (_setVehicleSpeedClient.call(srv)) 
	  	{
			  ROS_INFO("Forward Button was clicked successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call setVehicleSpeedSrv - Forward Button");
	    	  return 1;
	  	}
	
	}
	
	return 0;
	

}

int setVehicleSpeedGui::onBackwardClicked()
{
	int sign = 1;

	if(teleoperatedStateFlag == 1){

		if( curLinearSpeed >= -0.2 ){
			prevLinearSpeed = curLinearSpeed;
			curLinearSpeed -= 0.04;
		}	

		//mutex.lock();
		srv.request.linearSpeed = curLinearSpeed;
		srv.request.rotationalSpeed = curRotationalSpeed;
		//mutex.unlock();

		if (_setVehicleSpeedClient.call(srv))
	  	{
			  ROS_INFO("Backward Button was clicked successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call setVehicleSpeedSrv - Backward Button");
	    	  return 1;
	  	}

	}

	return 0;
}

int setVehicleSpeedGui::onRightClicked()
{

	if(teleoperatedStateFlag == 1){

		if( curRotationalSpeed <= 0.28 ){
			if((curLinearSpeed < 0.2) && (curLinearSpeed >= 0)){	
				
				curRotationalSpeed += 0.04;
			}
			else if((curLinearSpeed > -0.2) && (curLinearSpeed < 0)){	
				
				curRotationalSpeed -= 0.04;
			}
			else if(curLinearSpeed > 0.2){	
				prevLinearSpeed = curLinearSpeed;
				curLinearSpeed -= 0.04;
				curRotationalSpeed += 0.04;
			}
			else if(curLinearSpeed < -0.2){	
				prevLinearSpeed = curLinearSpeed;
				curLinearSpeed += 0.04;
				curRotationalSpeed -= 0.04;
			}
		
		}	

		//mutex.lock();
		srv.request.linearSpeed = curLinearSpeed;
		srv.request.rotationalSpeed = curRotationalSpeed;
		//mutex.unlock();

		if (_setVehicleSpeedClient.call(srv))
	  	{
			  ROS_INFO("Right Button was clicked successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call setVehicleSpeedSrv - Right Button");
	    	  return 1;
	  	}

	}

	return 0;
}

int setVehicleSpeedGui::onLeftClicked()
{
	if(teleoperatedStateFlag == 1){

		if( curRotationalSpeed >= -0.28 ){
			if((curLinearSpeed < 0.2) && (curLinearSpeed >= 0)){	
				
				curRotationalSpeed -= 0.04;
				
			}
			else if((curLinearSpeed > -0.2) && (curLinearSpeed < 0)){	
				curRotationalSpeed += 0.04;
			}
			else if(curLinearSpeed > 0.2){
				prevLinearSpeed = curLinearSpeed;
				curLinearSpeed -= 0.04;
				curRotationalSpeed -= 0.04;
			}
			else if(curLinearSpeed < -0.2){	
				prevLinearSpeed = curLinearSpeed;
				curLinearSpeed += 0.04;
				curRotationalSpeed += 0.04;
			}
		}	

		//mutex.lock();
		srv.request.linearSpeed = curLinearSpeed;
		srv.request.rotationalSpeed = curRotationalSpeed;
		//mutex.unlock();

		if (_setVehicleSpeedClient.call(srv))
	  	{
			  ROS_INFO("Left Button was clicked successfully");
	  	}
	  	else
	  	{
	    	  ROS_ERROR("Failed to call setVehicleSpeedSrv - Left Button");
	    	  return 1;
	  	}
	}

	return 0;
}

int setVehicleSpeedGui::forceStop()
{
	prevLinearSpeed = curLinearSpeed;
	curLinearSpeed = 0;
	curRotationalSpeed = 0;
	
	
	srv.request.linearSpeed = curLinearSpeed;
	srv.request.rotationalSpeed = curRotationalSpeed;
	
	if (_setVehicleSpeedClient.call(srv) )
  	{
	  //mutex.unlock();
	    ROS_INFO("Space Button was clicked successfully");
	  
  	}
  	else
  	{
	  //mutex.unlock();
    	  ROS_ERROR("Failed to call setVehicleSpeedSrv - Space Button");
    	  return 1;
  	}

	return 0;
}

void setVehicleSpeedGui::setSpeed()
{
	if(teleoperatedStateFlag == 1){
		mutex.lock();
		srv.request.linearSpeed = curLinearSpeed;
		srv.request.rotationalSpeed = curRotationalSpeed;
	
		if (_setVehicleSpeedClient.call(srv))
	  	{
			gui->ui.motorLinearLCD->display(curLinearSpeed);
			gui->ui.motorAngularLCD->display(curRotationalSpeed);
			mutex.unlock();
	    	ROS_INFO("Service was called successfully");
	  	}
	  	else
	  	{
			mutex.unlock();
	    	        ROS_ERROR("Failed to call setVehicleSpeedSrv");
	  	}
	}

}
