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
  * Date: 8 Jun 2011
  * Change History: - 
  */


#include "mapStreaming.h"
#include "masterGui.h"

QImage mapImage;
QMutex mapMutex;
int imageWidth,imageHeight;

mapStreaming::mapStreaming() 
{
	std::string transport = "compressed"; 
	image_transport::TransportHints transHints(transport, ros::TransportHints().unreliable());
	sub = image_transport::ImageTransport(_handle).subscribe("/navigation/navigationStreaming", 1, &mapStreaming::mapReceiver, this, transport); //transHints); 
}


void mapStreaming::mapReceiver(const sensor_msgs::ImageConstPtr& msg)
{
	ROS_INFO("Map callback function was called!");
	// May want to view raw bayer data, which CvBridge doesn't know about
	   if (msg->encoding.find("bayer") != std::string::npos)
	   {
	     	last_image_ = cv::Mat(msg->height, msg->width, CV_8UC1,
		                   const_cast<uint8_t*>(&msg->data[0]), msg->step);
	     	cvtColor(last_image_, mat_rgb, CV_BGR2RGB); 
	     	mapStream = QImage((uchar*)(mat_rgb.data), mat_rgb.cols,
        mat_rgb.rows, QImage::Format_RGB888); 
	   }
	   else
	   {
	     // Convert to OpenCV native BGR color
	       last_image_Ipl = img_bridge_.imgMsgToCv(msg, "bgr8");
	       mapStream = IplImage2QImage(last_image_Ipl);
	   }
	 
	   mapMutex.lock();
	   mapImage = mapStream.convertToFormat(QImage::Format_ARGB32);	
	   mapMutex.unlock();

}

QImage mapStreaming::IplImage2QImage(const IplImage *iplImage)
{
	int height = iplImage->height;
	int width = iplImage->width;

	imageWidth = width;
	imageHeight = height;

	if  (iplImage->depth == IPL_DEPTH_8U && iplImage->nChannels == 3)
	{
	const uchar *qImageBuffer = (const uchar*)iplImage->imageData;
	QImage img(qImageBuffer, width, height, QImage::Format_RGB888);
	return img.rgbSwapped();
	} else if  (iplImage->depth == IPL_DEPTH_8U && iplImage->nChannels == 1){
	const uchar *qImageBuffer = (const uchar*)iplImage->imageData;
	QImage img(qImageBuffer, width, height, QImage::Format_Indexed8);

	QVector<QRgb> colorTable;
	for (int i = 0; i < 256; i++){
	    colorTable.push_back(qRgb(i, i, i));
	}
	img.setColorTable(colorTable);
	return img;
	}else{
	qWarning() << "Image cannot be converted.";
	return QImage();
	}
}
