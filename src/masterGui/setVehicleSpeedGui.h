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
  * setVehicleSpeedGui client header files
  * Author: Dimitrios Vitsios
  * Date: 14 March 2011
  * Change History: 
*/

#define QT_NO_KEYWORDS
#include "ros/ros.h"
#include "mainMotorControl_communications/setVehicleSpeedSrv.h"
#include <QtGui>
#include <QAction>
#include <QMutexLocker>


/**
* Class as a setVehicleSpeedSrv Client
*/
class setVehicleSpeedGui : public QWidget
{

	Q_OBJECT

	private:
		/**
		 * The ROS client handle
		 */
		ros::NodeHandle _handle;

		/**
		* The setVehicleSpeedSrv client
		*/
		ros::ServiceClient _setVehicleSpeedClient;
		mainMotorControl_communications::setVehicleSpeedSrv srv;	
		
		float curLinearSpeed;
		float prevLinearSpeed;
		float curRotationalSpeed;
		int testCnt;
		
	public:
		/**
		 * setVehicleSpeedGui Constructor
		 */
		setVehicleSpeedGui();
		

		QMutex mutex;
		
		void generateActions(void);
		QAction* forwardAction;
		QAction* backwardAction;
		QAction* leftAction;
		QAction* rightAction;
		QAction* brakeAction;	
		
	public Q_SLOTS:
		int onForwardClicked(void);
		int onBackwardClicked(void);
		int onRightClicked(void);
		int onLeftClicked(void);
		int forceStop(void);
		void setSpeed(void);
};
