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
  * debugText Module header files
  * Author: Dimitrios Vitsios
  * Date: 16 March 2011
  * Change History: - 
  */

#define QT_NO_KEYWORDS
#include "signalslib.hpp"
#include "ros/ros.h"
#include "rosgraph_msgs/Log.h"
#include <QtGui>
#include <QAction>

/**
* Class as a debugText subscriber node
*/
class debugText : QWidget
{
	Q_OBJECT

	private:
		//The ROS Node handle 
		ros::NodeHandle _handle;

		//The rosout_agg msg subscriber
		ros::Subscriber _debugTextSubscriber;	
		rosgraph_msgs::Log globalMessage;

		int debugCnt;
		int infoCnt;
		int warnCnt;
		int errorCnt;
		int fatalCnt;
		int debugFlag;
		int infoFlag;
		int warnFlag;
		int errorFlag;
		int fatalFlag;

		
	public:
		//debugText Constructor
		debugText();

		//A callback function to receive rosout_agg msg
		void debugTextReceiver(const rosgraph_msgs::Log &msg);

	Q_SIGNALS:
		void enableDebugHandle();

	public Q_SLOTS:
	
		void onDebugClicked();	
		void onInfoClicked();
		void onWarnClicked();
		void onErrorClicked();
		void onFatalClicked();
		void onStartConsoleClicked();
		void onStopConsoleClicked();
		void onClearConsoleClicked();
		void handleMessage();
};


