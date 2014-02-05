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
  * debugText Module implementation
  * Author: Dimitrios Vitsios
  * Date: 16 March 2011
  * Change History: - 
  */

#include "debugText.h"
#include "masterGui.h"

debugText::debugText()
{
	debugCnt = 0;
	infoCnt = 0;
	warnCnt = 0;
	errorCnt = 0;
	fatalCnt = 0;
	debugFlag = 0;
	infoFlag = 0;
	warnFlag = 0;
	errorFlag = 0;
	fatalFlag = 0;


	gui->ui.dbgDebugButton->setText("OFF");
	gui->ui.dbgInfoButton->setText("OFF");
	gui->ui.dbgWarnButton->setText("OFF");
	gui->ui.dbgErrorButton->setText("OFF");
	gui->ui.dbgFatalButton->setText("OFF");

	connect(this, SIGNAL(enableDebugHandle()), this, SLOT(handleMessage()));//, Qt::QueuedConnection);

	connect(gui->ui.dbgDebugButton, SIGNAL(clicked()), this, SLOT(onDebugClicked()));
	connect(gui->ui.dbgInfoButton, SIGNAL(clicked()), this, SLOT(onInfoClicked()));
	connect(gui->ui.dbgWarnButton, SIGNAL(clicked()), this, SLOT(onWarnClicked()));
	connect(gui->ui.dbgErrorButton, SIGNAL(clicked()), this, SLOT(onErrorClicked()));
	connect(gui->ui.dbgFatalButton, SIGNAL(clicked()), this, SLOT(onFatalClicked()));
	connect(gui->ui.startConsoleButton, SIGNAL(clicked()), this, SLOT(onStartConsoleClicked()));
	connect(gui->ui.stopConsoleButton, SIGNAL(clicked()), this, SLOT(onStopConsoleClicked()));
	connect(gui->ui.clearConsoleButton, SIGNAL(clicked()), this, SLOT(onClearConsoleClicked()));
	

	//Declare subscribers
	_debugTextSubscriber = _handle.subscribe("/rosout_agg", 1 ,&debugText::debugTextReceiver,this);
	
}


void debugText::debugTextReceiver(const rosgraph_msgs::Log &msg)
{	
	globalMessage = msg;
	enableDebugHandle();
}

void debugText::handleMessage()
{
	if(globalMessage.level == 1 && debugFlag == 1){
		gui->ui.debugTextBrowser->append("DEBUG -- [ Node name ]:");
		QString nodeName  = QString::fromStdString(globalMessage.name);
		gui->ui.debugTextBrowser->append(nodeName);
		
		gui->ui.debugTextBrowser->append("[ Message ]:");
		QString message  = QString::fromStdString(globalMessage.msg);
		gui->ui.debugTextBrowser->append(message);
		gui->ui.debugTextBrowser->append("---------------------------------------------------------------------------------------------------------\n");
	}
	
	if(globalMessage.level == 2 && infoFlag == 1){
		gui->ui.debugTextBrowser->append("INFO -- [ Node name ]:");
		QString nodeName  = QString::fromStdString(globalMessage.name);
		gui->ui.debugTextBrowser->append(nodeName);
		
		gui->ui.debugTextBrowser->append("[ Message ]:");
		QString message  = QString::fromStdString(globalMessage.msg);
		gui->ui.debugTextBrowser->append(message);
		gui->ui.debugTextBrowser->append("---------------------------------------------------------------------------------------------------------\n");
	}

	if(globalMessage.level == 4 && warnFlag == 1){
		gui->ui.debugTextBrowser->append("WARNING -- [ Node name ]:");
		QString nodeName  = QString::fromStdString(globalMessage.name);
		gui->ui.debugTextBrowser->append(nodeName);
		
		gui->ui.debugTextBrowser->append("[ Message ]:");
		QString message  = QString::fromStdString(globalMessage.msg);
		gui->ui.debugTextBrowser->append(message);
		gui->ui.debugTextBrowser->append("---------------------------------------------------------------------------------------------------------\n");
	}


	if(globalMessage.level == 8 && errorFlag == 1){
		gui->ui.debugTextBrowser->append("<font color=red>ERROR -- [ Node name ]:</font>");
		QString nodeName  = QString::fromStdString(globalMessage.name);
		gui->ui.debugTextBrowser->append(nodeName);
		
		gui->ui.debugTextBrowser->append("[ Message ]:");
		QString message  = QString::fromStdString(globalMessage.msg);
		gui->ui.debugTextBrowser->append(message);
		gui->ui.debugTextBrowser->append("---------------------------------------------------------------------------------------------------------\n");
	}

	if(globalMessage.level == 16 && fatalFlag == 1){
		gui->ui.debugTextBrowser->append("FATAL ERROR -- [ Node name ]:");
		QString nodeName  = QString::fromStdString(globalMessage.name);
		gui->ui.debugTextBrowser->append(nodeName);
		
		gui->ui.debugTextBrowser->append("[ Message ]:");
		QString message  = QString::fromStdString(globalMessage.msg);
		gui->ui.debugTextBrowser->append(message);
		gui->ui.debugTextBrowser->append("---------------------------------------------------------------------------------------------------------\n");
	}
}

void debugText::onDebugClicked()
{
	debugCnt++;
	if(debugCnt%2 == 1){
		debugFlag = 1;
		gui->ui.dbgDebugButton->setText("ON");
	}
	else{
		debugFlag = 0;
		gui->ui.dbgDebugButton->setText("OFF");
	}
}

void debugText::onInfoClicked()
{
	infoCnt++;
	if(infoCnt%2 == 1){
		infoFlag = 1;
		gui->ui.dbgInfoButton->setText("ON");
	}
	else{
		infoFlag = 0;
		gui->ui.dbgInfoButton->setText("OFF");
	}
}

void debugText::onWarnClicked()
{
	warnCnt++;
	if(warnCnt%2 == 1){
		warnFlag = 1;
		gui->ui.dbgWarnButton->setText("ON");
	}
	else{
		warnFlag = 0;
		gui->ui.dbgWarnButton->setText("OFF");
	}
}

void debugText::onErrorClicked()
{
	errorCnt++;
	if(errorCnt%2 == 1){
		errorFlag = 1;
		gui->ui.dbgErrorButton->setText("ON");
	}
	else{
		errorFlag = 0;
		gui->ui.dbgErrorButton->setText("OFF");
	}
}

void debugText::onFatalClicked()
{
	fatalCnt++;
	if(fatalCnt%2 == 1){
		fatalFlag = 1;
		gui->ui.dbgFatalButton->setText("ON");
	}
	else{
		fatalFlag = 0;
		gui->ui.dbgFatalButton->setText("OFF");
	}
}

void debugText::onStartConsoleClicked()
{
	debugCnt = 1;
	infoCnt = 1;
	warnCnt = 1;
	errorCnt = 1;
	fatalCnt = 1;
	debugFlag = 1;
	infoFlag = 1;
	warnFlag = 1;
	errorFlag = 1;
	fatalFlag = 1;

	gui->ui.dbgDebugButton->setText("ON");
	gui->ui.dbgInfoButton->setText("ON");
	gui->ui.dbgWarnButton->setText("ON");
	gui->ui.dbgErrorButton->setText("ON");
	gui->ui.dbgFatalButton->setText("ON");
}

void debugText::onStopConsoleClicked()
{
	debugCnt = 0;
	infoCnt = 0;
	warnCnt = 0;
	errorCnt = 0;
	fatalCnt = 0;
	debugFlag = 0;
	infoFlag = 0;
	warnFlag = 0;
	errorFlag = 0;
	fatalFlag = 0;

	gui->ui.dbgDebugButton->setText("OFF");
	gui->ui.dbgInfoButton->setText("OFF");
	gui->ui.dbgWarnButton->setText("OFF");
	gui->ui.dbgErrorButton->setText("OFF");
	gui->ui.dbgFatalButton->setText("OFF");
}

void debugText::onClearConsoleClicked()
{
	gui->ui.debugTextBrowser->setText("");
}

