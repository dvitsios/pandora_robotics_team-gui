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
  * stateManagerGui header files
  * Author: Dimitrios Vitsios
  * Date: 18 April 2011
  * Change History: 
*/

#define QT_NO_KEYWORDS
#include "ros/ros.h"
#include "StateClient.h"
#include <string>
#include <QtGui>
#include <QAction>
#include <QMutexLocker>
#include <time.h>
#include "dataFusion_communications/fusionGlobalMsg.h"



/**
* Class as a stateManagerGui Client
*/
class stateManagerGui : public QWidget, StateClient
{

	Q_OBJECT

	private:
		/**
		 * The ROS client handle
		 */
		ros::NodeHandle _handle;
		ros::Subscriber _testSensorsSubscriber;
		std::string MODES[9];
		int curState;
		int transState;
		int globalCnt;
		int timer;
		QAction *forceModeOffAction;
		float mlx, co2, sound, skin, motion, face;
		
		dataFusion_communications::fusionGlobalMsg msg;
	public:
		/**
		 * stateManagerGui Constructor
		 */
		stateManagerGui();

		void generateActions(void);
		void startTransition(int newState);
		void completeTransition();

		QMutex mutex;
		
		void testSensorsReceiver(const dataFusion_communications::fusionGlobalMsg &sensorsMsg);

	public Q_SLOTS:
		int changeState(int index);
		int changeArmState(int index);
		void displayElapsedTime();
		void onModeOffClicked();
		void onClearPandoraTextBrClicked();
		void displaySensorsValues();
};
