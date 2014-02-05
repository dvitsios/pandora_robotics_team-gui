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
  * consoleManager Module header files
  * Author: Dimitrios Vitsios
  * Date: 16 June 2011
  * Change History: - 
  */

#include "moveArmGui.h"
#include <QApplication>
#include <QtCore>
#include "mainMotorStateGui.h"
#include "setVehicleSpeedGui.h"
#include "semiAutonomousGui.h"
#include "irGui.h"
#include "sonarGui.h"
#include "co2Gui.h"
#include "thermalGui.h"
#include "butterflyGui.h"
#include "debugText.h"
#include "stateManagerGui.h"
#include "victimsFound.h"
#include "displayVideo.h"
#include "displayMap.h"
#include "videoStreaming.h"
#include "mapStreaming.h"
#include "semiAutoMsgPublisher.h"
#include "soundTest.h"


class consoleManager : public QWidget 
{
		Q_OBJECT
		
		public:
			consoleManager();
		
		public Q_SLOTS:
			//functions for calling console commands on remote machine via ssh
			void onShutdownClicked();
			void onRestartClicked();
			void onStartGlobalLauncherClicked();
			void onKillGlobalLauncherClicked();
};
