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
  * thermalGui Module header files
  * Author: Dimitrios Vitsios
  * Date: 30 March 2011
  * Change History: - 
  */

#include "ros/ros.h"
#include "controllersAndSensors_communications/tpaMsg.h"
#include "controllersAndSensors_communications/mlxTempMsg.h"
#include <QtGui>

/**
* Class as a thermalGui subscriber node
*/
class thermalGui : public QWidget
{

	Q_OBJECT

	private:
		//The ROS Node handle 
		ros::NodeHandle _handle;

		//The tpaMsg and mlxMsg subscribers
		ros::Subscriber _thermalSubscriber0;	
		ros::Subscriber _thermalSubscriber1;
		ros::Subscriber _thermalSubscriber2;
		ros::Subscriber _mlxSubscriber;
		

		QSize mapsize;
		QPainter painter0;
		QPainter painter1;
		QPainter painter2;
		QColor color;
		QImage thermRed;
		QImage thermYellow;
		QPixmap pixmapRed;
		QPixmap pixmapYellow;
		QPainter painter;

		QPixmap videoPixRed;
		QPixmap videoPixYellow;
		
		int labelWidth;
		int labelHeight;
		float thermalThreshold;

	public:
		//thermalGui Constructor
		thermalGui();


		//Callback functions to receive tpaMsg
		void thermalGuiReceiver0(const controllersAndSensors_communications::tpaMsg &msg);

		void thermalGuiReceiver1(const controllersAndSensors_communications::tpaMsg &msg);

		void thermalGuiReceiver2(const controllersAndSensors_communications::tpaMsg &msg);
		
		void mlxGuiReceiver(const controllersAndSensors_communications::mlxTempMsg &msg);

		controllersAndSensors_communications::tpaMsg msg0;
		controllersAndSensors_communications::tpaMsg msg1;
		controllersAndSensors_communications::tpaMsg msg2;
		controllersAndSensors_communications::mlxTempMsg mlxMsg;
		
		void drawThermal0();
		void drawThermal1();
		void drawThermal2();
		void drawMlxThermal();
		

	Q_SIGNALS:
		void enableThermal0();
		void enableThermal1();
		void enableThermal2();
		void enableMlxThermal();

	public Q_SLOTS:
		void updateThermals();
		void onThresChanged(double newThres);
};


