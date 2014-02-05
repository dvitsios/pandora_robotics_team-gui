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
  * semiAutonomousGui client header files
  * Author: Dimitrios Vitsios
  * Date: 15 March 2011
  * Change History: 
*/


#include <cstdlib>
#include <QtGui>
#include <QAction>


/**
* Class for the manual marking of a victim's position on the map
* by clicking on a specific point on the mapLabel in "Victim Identification" tab.
* It's also used to register the sensors that contributed to identify the victim.
*/
class semiAutonomousGui : public QWidget
{

	Q_OBJECT

	private:

		//auxiliary variables
		QSize mapsize;
		
	public:
		semiAutonomousGui();
		bool eventFilter(QObject *obj, QEvent *event);
		

	public Q_SLOTS:
		void onSensor1Selected(int index);
		void onSensor2Selected(int index);
		void onSensor3Selected(int index);
		void onSensor4Selected(int index);
		void onSensor5Selected(int index);
		void onSensor6Selected(int index);
		void onClearTextBrowserClicked();
};
