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
  * geotiffCreator header files
  * Author: Dimitrios Vitsios
  * Date: 24 June 2011
  * Change History: 
*/

#include "ros/ros.h"
#include <ros/callback_queue.h>
#include "navigation_communications/geotiffSrv.h"
#include <QtGui>
#include <QAction>

/**
 * Class as a "geotiff painter" that creates a geotiff-formatted image 
 * conforming to the rules and the standards of the Robocup - Rescue Robot League Competition.
 */
class geotiffCreator : public QWidget
{

	Q_OBJECT

	private: 
		ros::NodeHandle _handle;
		ros::ServiceClient _geotiffServiceClient;
		navigation_communications::geotiffSrv srv;
		QString missionName;
		
		uchar *map;
		uchar *coverage;
		int xsize;
		int ysize;
		int *pathx;
		int *pathy;
		int *victimsx;
		int *victimsy;
		int *hazmatx;
		int *hazmaty;
		int *hazmatType;
		
		int pathSize;
		int victimsSize;
		int hazmatSize;

	public:
		geotiffCreator();
	
	public Q_SLOTS:
		void onCreateGeotiffClicked();
		void saveMissionName(const QString & textInserted);
};
