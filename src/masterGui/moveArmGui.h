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
  * moveArmGui client header files
  * Author: Dimitrios Vitsios
  * Date: 12 April 2011
  * Change History: 
*/

#define QT_NO_KEYWORDS
#include <tf/transform_listener.h>
#include <actionlib/client/simple_action_client.h>
#include "signalslib.hpp"
#include <ros/ros.h>
#include "RoboticArm_communications/moveArmAction.h"
#include <QtGui>
#include <QAction>
#include <QMutexLocker>
#include "math.h"
#include "controllersAndSensors_communications/gripperControlSrv.h"

/**
* Class as a moveArm actionlib Client
*/
class moveArmGui : public QWidget
{

	Q_OBJECT

	private:
		/**
		 * The ROS client handle
		 */
		ros::NodeHandle _handle;
		ros::Subscriber _tfSubscriber;
		
		tf::TransformListener listener;
		tf::StampedTransform transform;

		actionlib::SimpleActionClient<RoboticArm_communications::moveArmAction> _actionClient;
		RoboticArm_communications::moveArmGoal goal;
		ros::ServiceClient _gripperClient;
		controllersAndSensors_communications::gripperControlSrv srv;

		QMutex mutex;
		float X;
		float Y;
		float Z;
		float readX;
		float readY;
		float readZ;
		float newX;
		float newY;
		float newZ;
		double A;
		double B;	
		double C;	
		float xyzStep;
		float angleStep;
		float toRad;
		float armHeadPosition;
		float armHeadVerticalPosition;
		QMutex armHeadMutex;
		float parkingOffset;
		
	public:
		/**
		 * moveArmGui Constructor
		 */
		moveArmGui();	

		void generateActions(void);
		QAction* XForwardAction;
		QAction* XBackwardAction;
		QAction* YForwardAction;
		QAction* YBackwardAction;
		QAction* ZForwardAction;
		QAction* ZBackwardAction;
		QAction* bUpAction;
		QAction* bDownAction;
		QAction* aLeftAction;
		QAction* aResetAction;
		QAction* aRightAction;
		QAction* parkAction;
		QAction* armHeadLeftAction;
		QAction* armHeadRightAction;
		QAction* armHeadResetAction;
		QAction* armHeadUpAction;
		QAction* armHeadDownAction;
		QAction* armHeadResetUpDownAction;

		QMutex mutexGoal;
		QMutex mutexCurPose;
    		 

	public  Q_SLOTS:
		void onXForwardClicked();
		void onXBackwardClicked();
		void onYForwardClicked();
		void onYBackwardClicked();
		void onZForwardClicked();
		void onZBackwardClicked();
		void onBUpClicked();
		void onBDownClicked();
		void onAResetClicked();
		void onALeftClicked();
		void onARightClicked();
		void onParkClicked();
		int readPosition();
		void onXyzStepChanged(double newXyzStep);
		void onAngleStepChanged(double newAngleStep);
		void onArmHeadLeftClicked();
		void onArmHeadRightClicked();
		void onArmHeadResetClicked();
		void onArmHeadUpClicked();
		void onArmHeadDownClicked();
		void onArmHeadResetUpDownClicked();		
		
		void onGrabGripperClicked();
		void onReleaseGripperClicked();
		void onStopGripperClicked();
		
};

