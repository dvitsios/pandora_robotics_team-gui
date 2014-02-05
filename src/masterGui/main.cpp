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
  * main function
  * Author: Dimitrios Vitsios
  * Date:  9 March 2011
  * Change History: - 
  */

#define QT_NO_KEYWORDS

#include "setVecSpeedThread.h"
#include "sensorsThread.h"
#include "videoStreamThread.h"
#include "mapStreamThread.h"
#include "consoleManager.h"
#include "masterGui.h"
#include "geotiffCreator.h"
#include "math.h"
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

QString homeFolderString;
QString curFolderString;

int main(int argc, char *argv[])
{
	
	QApplication app(argc, argv);
	
	
	//Can be used instead of shell export of variable ROS_MASTER_URI
	//setenv("ROS_MASTER_URI","http://localhost:11311",1);
	
	//Setting the ROS_IP variable will force ros master to use this ip instead of
	//trying to resolve the hostname
	//setenv("ROS_IP","192.168.1.6",1);

	ros::init(argc, argv, "gui");
	
	//get home directory name
	struct passwd *pw = getpwuid(getuid());
	const char *homedir = pw->pw_dir;
	std::string homeFolderStr(homedir);
	homeFolderString = homeFolderStr.c_str();
	
	
	
	//create masterGui Object
	masterGui masterG;		

	curFolderString = app.applicationDirPath();
	curFolderString.remove("/bin");
	
	//display pandora logo
	QImage logo;
	QString logoPath = curFolderString;
	logoPath = logoPath.append("/src/masterGui/pandora_logo.jpg");
	logo.load(logoPath);
	gui->ui.pandoraLogoLabel->setPixmap(QPixmap().fromImage(logo));

	QSize pandoraGuiSize = gui->ui.tabWidget->size();


	//set tab1 background
	QImage backg1;
	QString tab1BackgPath = curFolderString;
	tab1BackgPath = tab1BackgPath.append("/src/masterGui/tab1Background.jpg");
	backg1.load(tab1BackgPath);  
	gui->ui.tab1BackLabel->setPixmap(QPixmap().fromImage(backg1).scaled(pandoraGuiSize.width(), pandoraGuiSize.height()));
	
	//set tab2 background
	QImage backg2;
	QString tab2BackgPath = curFolderString;
	tab2BackgPath = tab2BackgPath.append("/src/masterGui/tab2Background.jpg");
	backg2.load(tab2BackgPath);
	gui->ui.tab2BackLabel->setPixmap(QPixmap().fromImage(backg2).scaled(pandoraGuiSize.width(), pandoraGuiSize.height()));
	
	//set tab3 background
	QImage backg3;
	QString tab3BackgPath = curFolderString;
	tab3BackgPath = tab3BackgPath.append("/src/masterGui/tab3Background.jpg");
	backg3.load(tab3BackgPath);
	gui->ui.tab3BackLabel->setPixmap(QPixmap().fromImage(backg3).scaled(pandoraGuiSize.width(), pandoraGuiSize.height()));
	
	
	consoleManager consManag;
	
	//--- create gui elements ---
	
	stateManagerGui stmanGui;
	butterflyGui btfGui;
	thermalGui thermal;
	
	//optionally enable-disable display of rosout_agg messages in Debug tab
	//debugText dbText;
	
	//start sensors (for mainMotorState, IRs, Sonars, CO2) in a new thread
	sensorsThread sensTh;
	sensTh.moveToThread(&sensTh);
	sensTh.start();
	
	soundTest sndst;
	
	//start "setVehicleSpeedGui" in a new thread
	setVecSpeedThread svsTh;
	svsTh.moveToThread(&svsTh);
	svsTh.start();
	
	//start video streaming in a new thread
	videoStreamThread vidStrTh;
	vidStrTh.moveToThread(&vidStrTh);
	vidStrTh.start();
	displayVideo vidG;


	//draw map using "compressed image" streaming of ROS.
	mapStreaming mapStr;
	displayMap disMap;

	// -- draw map after calling the corresponding services (deprecated). --
	//start map in a new thread
	/*
	mapThread mapTh;
	mapTh.start();
	*/
	
	//arm manipulation
	moveArmGui maGui;

	victimsFound vf;
	semiAutonomousGui smaugui;
	semiAutoMsgPublisher samsgpub;
	
	
	//class for geotiff creation
	geotiffCreator geotCr;
	
	ros::AsyncSpinner spinner(2);
	spinner.start();
	app.exec();

	return 0;
}
