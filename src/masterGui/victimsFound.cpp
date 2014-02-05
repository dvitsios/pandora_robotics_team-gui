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
  * victimsFound Module implementation
  * Author: Dimitrios Vitsios
  * Date: 27 April 2011
  * Change History: - 
  */

#include "victimsFound.h"
#include "masterGui.h"
#include <vector>

int continueInAutonomousMode;
QMutex contAutonMutex;
extern  int teleoperatedStateFlag;
//std::ofstream victimsFile("/home/pandora/Desktop/victimsInfo.txt");

victimsFound::victimsFound()
{
	connect(this, SIGNAL(enableHandle()), this, SLOT(handleVictimsFoundMessage()), Qt::QueuedConnection);

	victimsCounter = 0;
     //Declare subscribers
     _victimsFoundSubscriber = _handle.subscribe("/navigation/victimsData", 1 ,&victimsFound::victimsFoundReceiver,this);
	_acceptDeclineVictimClient = _handle.serviceClient<navigation_communications::victimIdentificationSrv>("/navigation/victimIdentificationSrv");
	 
	connect(gui->ui.acceptVictimPushButton, SIGNAL(clicked()), this, SLOT(onAcceptClicked()), Qt::DirectConnection);
	connect(gui->ui.declineVictimPushButton, SIGNAL(clicked()), this, SLOT(onDeclineClicked()), Qt::DirectConnection);
	 
	continueInAutonomousMode = 0;
	gui->ui.victimsTreeWidget->setColumnWidth(0,90);
	gui->ui.victimsTreeWidget->setColumnWidth(1,50);
	gui->ui.victimsTreeWidget->setColumnWidth(2,50);
	gui->ui.victimsTreeWidget->setColumnWidth(3,150);
	
	
	
	//victimsFile.open("/home/pandora/Desktop/victimsInfo.txt", ios::app );
	//victimsFile.close();
		
}


void victimsFound::victimsFoundReceiver(const navigation_communications::victimsMsg &msg)
{		 
	victimsFoundMessage = msg;
	enableHandle();
}

void victimsFound::handleVictimsFoundMessage()
{
	victimsCounter = victimsFoundMessage.victimsFoundx.size();
	gui->ui.numOfVictimsLCD->display(victimsCounter);
	QString victFoundStr = "NEW VICTIM FOUND!!! #";
	QString vicNumStr = QString::number(victimsCounter);
	victFoundStr.append(vicNumStr);
	
	gui->ui.pandoraTextBrowser->append(victFoundStr);
	
	gui->ui.victimsTreeWidget->clear();
	
	for(int i=0; i<victimsCounter; i++){
		QTreeWidgetItem *newVictimItem = new QTreeWidgetItem(gui->ui.victimsTreeWidget);
		QString victId = QString::number(i+1);
		
		for(int m=0; m<4; m++)
			newVictimItem->setTextAlignment(m, Qt::AlignHCenter);
		
		newVictimItem->setText(0, victId);
		
		QString victX  = QString::number(victimsFoundMessage.victimsFoundx[i]-2000);
		newVictimItem->setText(1, victX);
		QString victY  = QString::number(victimsFoundMessage.victimsFoundy[i]-2000);
		newVictimItem->setText(2, victY);
		QString sensorStrings = QString::fromUtf8(victimsFoundMessage.sensorIDFound[i].c_str());
		
		newVictimItem->setText(3, sensorStrings);
		
	}
}


int victimsFound::onAcceptClicked()
{
	if(teleoperatedStateFlag == 1){
		srv.request.victimValid = true;

		if (_acceptDeclineVictimClient.call(srv)) {
			//ROS_INFO("OnAcceptClicked was clicked successfully");
			gui->ui.pandoraTextBrowser->append("** Victim approved! **");
		}
		else {
			//ROS_ERROR("Failed to call OnAcceptClicked");
			gui->ui.pandoraTextBrowser->append("Failed to call OnAcceptClicked");
			return 1;
		}
		
		
	}
		
	return 0;
}

int victimsFound::onDeclineClicked()
{
	if( teleoperatedStateFlag == 1){
		srv.request.victimValid = false;

		if (_acceptDeclineVictimClient.call(srv)) {
			//ROS_INFO("OnDeclineClicked was clicked successfully");
			gui->ui.pandoraTextBrowser->append("-- The victim was rejected! --");
		}
		else {
			//ROS_ERROR("Failed to call OnDeclineClicked");
			gui->ui.pandoraTextBrowser->append("Failed to call OnDeclineClicked");
			return 1;
		}
		
	}
	
	return 0;
}

