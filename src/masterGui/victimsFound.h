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
  * victimsFound Module header files
  * Author: Dimitrios Vitsios
  * Date: 27 April 2011
  * Change History: - 
  */

#include "ros/ros.h"
#include "navigation_communications/victimsMsg.h"
#include "navigation_communications/victimIdentificationSrv.h"
#include <QtGui>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
* Class as a victimsFound subscriber node
*/
class victimsFound : QWidget
{
	Q_OBJECT

	private:
		//The ROS Node handle 
		ros::NodeHandle _handle;

		//subscriber
		ros::Subscriber _victimsFoundSubscriber;	
		navigation_communications::victimsMsg victimsFoundMessage;
		ros::ServiceClient _acceptDeclineVictimClient;
		navigation_communications::victimIdentificationSrv srv;

		int victimsCounter;
		int *victimsx;
		int *victimsy;
		char *sensorsString;
		

	public:
		//Constructor
		victimsFound();

		//callback function
		void victimsFoundReceiver(const navigation_communications::victimsMsg &msg);

	Q_SIGNALS:
		void enableHandle();

	public Q_SLOTS:
		void handleVictimsFoundMessage();
		int onAcceptClicked();
		int onDeclineClicked();

};


