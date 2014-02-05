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
  * mapStreaming Module header files
  * Author: Dimitrios Vitsios
  * Date: 8 June 2011
  * Change History: - 
  */

#include <QtGui>
#include "ros/ros.h"
#include "image_transport/image_transport.h"
#include <sensor_msgs/Image.h>
#include <sensor_msgs/image_encodings.h>
#include <sensor_msgs/CompressedImage.h>
#include <cv_bridge/CvBridge.h>
#include <opencv/highgui.h>
#include <cv_bridge/CvBridge.h>
#include <opencv/cvwimage.h>


/**
* Class as a mapStreaming subscriber node
*/
class mapStreaming : QWidget
{

	private:
		//The ROS Node handle 
		ros::NodeHandle _handle;
		image_transport::Subscriber sub;
		QImage mapStream;


		sensor_msgs::CvBridge img_bridge_;
		cv::Mat last_image_;
		cv::Mat mat_rgb;
		IplImage *last_image_Ipl;
	public:
		//mapStreaming Constructor
		mapStreaming();
		void mapReceiver(const sensor_msgs::ImageConstPtr& msg);
		QImage IplImage2QImage(const IplImage *iplImage);
};


