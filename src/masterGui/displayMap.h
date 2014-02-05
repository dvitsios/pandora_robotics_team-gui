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
  * displayMap Module header files
  * Author: Dimitrios Vitsios
  * Date: 8 June 2011
  * Change History: - 
  */

#include "ros/ros.h"
#include <ros/callback_queue.h>
#include "gui_communications/targetPosition.h"
#include <QtGui>

/**
* Class as a displayMap subscriber node
*/
class displayMap : QWidget
{
	Q_OBJECT

	private:
		ros::NodeHandle _handle;
		ros::Publisher targetPosition_pub;
		gui_communications::targetPosition positionMsg;
		ros::CallbackQueue my_callback_queue;
		QSize mapsizeNav;
		QSize mapsize;
		float widthAnNav,heightAnNav;
		int widthFinalNav,heightFinalNav;
		float widthAn,heightAn;
		int targetX;
		int targetY;
	public:
		//displayMap Constructor
		displayMap();
		bool eventFilter(QObject *obj, QEvent *event);

	public Q_SLOTS:
		void displayMapTimer();
		void onClearTextBrowserClicked();
};


