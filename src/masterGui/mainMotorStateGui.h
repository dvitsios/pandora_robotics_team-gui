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
  * mainMotorStateGui node header files
  * Author: Dimitrios Vitsios
  * Date: 10 March 2011
  * Change History: 
*/

#include "ros/ros.h"
#include "mainMotorControl_communications/mainMotorStateMsg.h"
#include <QtGui>

/**
* Class as a mainMotorState subscriber node
*/
class mainMotorStateGui : QWidget
{
	Q_OBJECT

	private:
		/**
		 * The ROS Node handle
		 */
		ros::NodeHandle _handle;

		/**
		* The mainMotorStateMsg subscriber
		*/
		ros::Subscriber _mainMotorStateSubscriber;

		mainMotorControl_communications::mainMotorStateMsg mainMotStMessage;
	public:
		/**
		 * mainMotorStateGui Constructor
		 */
		mainMotorStateGui();

		/**
		 * A callback function to receive mainMotorStateMsg
		 */
		void mainMotorStateReceiver(const mainMotorControl_communications::mainMotorStateMsg &msg);

	public Q_SLOTS:	
		void updateMotorStatus();
};
