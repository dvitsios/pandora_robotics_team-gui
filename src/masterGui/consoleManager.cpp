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
  * consoleManager Module implementation
  * Author: Dimitrios Vitsios
  * Date: 16 June 2011
  * Change History: - 
  */

#include "consoleManager.h"
#include "math.h"
#include "masterGui.h"


consoleManager::consoleManager()
{
	connect(gui->ui.shutdownPandoraButton, SIGNAL(clicked()), this, SLOT(onShutdownClicked()));
	connect(gui->ui.restartPandoraButton, SIGNAL(clicked()), this, SLOT(onRestartClicked()));
	connect(gui->ui.startGlobLauncherButton, SIGNAL(clicked()), this, SLOT(onStartGlobalLauncherClicked()));
	connect(gui->ui.killGlobLauncherButton, SIGNAL(clicked()), this, SLOT(onKillGlobalLauncherClicked()));
}

void consoleManager::onStartGlobalLauncherClicked()
{
      QStringList arguments;
      QProcess exec;
      arguments << "-c" << "ssh pandora@10.100.0.5 'roslaunch --pid=/tmp/globalLaunch.pid pandora_robot globalLauncherReal.launch'";
      exec.start("/bin/sh", arguments);
      exec.waitForFinished(4000);
}

void consoleManager::onKillGlobalLauncherClicked()
{
      QStringList arguments;
      QProcess exec;
      arguments << "-c" << "ssh pandora@10.100.0.5 'kill -INT `cat /tmp/globalLaunch.pid` '";
      exec.start("/bin/sh", arguments);
      exec.waitForFinished(4000);
}

void consoleManager::onShutdownClicked()
{
      QStringList arguments;
      QProcess exec;
      arguments << "-c" << "ssh pandora@10.100.0.5 'echo pandora | sudo -S shutdown -h now'";
      exec.start("/bin/sh", arguments);
      exec.waitForFinished(2000);
}

void consoleManager::onRestartClicked()
{
QStringList arguments;
      QProcess exec;
      arguments << "-c" << "ssh pandora@10.100.0.5 'echo pandora | sudo -S shutdown -r now'";
      exec.start("/bin/sh", arguments);
      exec.waitForFinished(2000);
}
