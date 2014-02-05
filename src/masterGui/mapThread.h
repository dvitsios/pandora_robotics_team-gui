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
  * mapThread header files
  * Author: Dimitrios Vitsios
  * Date: 9 June 2011
  * Change History: - 
  */
  
#include "ros/ros.h"
#include <ros/callback_queue.h>
#include "navigation_communications/guiInfoLargeSrv.h"
#include "navigation_communications/guiInfoSmallSrv.h"
#include "gui_communications/targetPosition.h"
#include <QtGui>


/*
 * Class for acquiring map data from corresponding services
 * and for map drawing with Qt painters.
 * -- deprecated.
 */ 
class mapThread : public QThread
{

	private:

		ros::NodeHandle _handle;
		ros::ServiceClient _guiInfoLargeClient;	
		ros::ServiceClient _guiInfoSmallClient;
		ros::Publisher targetPosition_pub;
		gui_communications::targetPosition positionMsg;
		ros::CallbackQueue my_callback_queue;
		
		navigation_communications::guiInfoLargeSrv srv;	
		navigation_communications::guiInfoSmallSrv srvSmall;

		//read from services
		uchar *map;
		uchar *coverage;
		uchar *voronoi;
		int xsize;
		int ysize;
		int xRobot;
		int yRobot;
		int *coverageLimitsx;
		int *coverageLimitsy;
		int *voronodesx;
		int *voronodesy;
		int *neighboursFirst;
		int *neighboursLast;
		int *goalsx;
		int *goalsy;

		//auxiliary variables
		float widthAnNav,heightAnNav;
		float widthAn,heightAn;
		int covLimitSize;
		int voronodesSize;
		int neighboursSize;
		int goalsxSize;
		int goalsySize;
		float angleRobot;
		int targetX;
		int targetY;
		int xAnglePoint;
		int yAnglePoint;
		QSize mapsize;
		QSize mapsizeNav;

		QPainter painter;
		QMutex mutex;

		int drawMapSmallFlag;
		int drawMapFlag;
		

	public:
		mapThread();
		void run();
		void generateMap(); 
		void generateMapSmall(); 
		void drawMap();
		void drawMapSmall();

};
