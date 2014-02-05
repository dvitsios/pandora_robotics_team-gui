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
  * co2Gui Module implementation
  * Author: Dimitrios Vitsios
  * Date: 16 March 2011
  * Change History: - 
  */

#include "co2Gui.h"
#include "masterGui.h"

co2Gui::co2Gui()
{
	
     //Declare subscribers
     _co2Subscriber = _handle.subscribe("/gui/sensors/co2", 1 ,&co2Gui::co2GuiReceiver,this);

	_handle.setCallbackQueue(&my_callback_queue);
	my_callback_queue.callAvailable(ros::WallDuration());

	QTimer *CO2Timer= new QTimer(this);
     	connect(CO2Timer, SIGNAL(timeout()), this, SLOT(updateCO2()));
     	CO2Timer->start(1000);
}


void co2Gui::co2GuiReceiver(const controllersAndSensors_communications::co2Msg &msg)
{	
	CO2Message = msg;
}

void co2Gui::updateCO2()
{
	gui->ui.CO2Lcd->display(int(CO2Message.ppm));
}
