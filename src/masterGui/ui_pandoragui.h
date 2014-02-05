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
/********************************************************************************
** Form generated from reading UI file 'pandoragui.ui'
**
** Created: Tue Jul 5 21:30:52 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANDORAGUI_H
#define UI_PANDORAGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pandoraGui
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QLabel *tab1BackLabel;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QGroupBox *SensorsGoupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFrame *sonarFrame;
    QLCDNumber *sonarLCDArm;
    QLabel *sonarLabel;
    QLCDNumber *sonarLCDFront;
    QLCDNumber *sonarLCDLeft;
    QLCDNumber *sonarLCDRight;
    QLCDNumber *sonarLCDRear1;
    QLCDNumber *sonarLCDRear2;
    QFrame *irFrame;
    QGridLayout *gridLayout_4;
    QLabel *irLabel;
    QLCDNumber *irLCDFront;
    QLCDNumber *irLCDLeft;
    QLCDNumber *irLCDRight;
    QLCDNumber *irLCDRear;
    QLCDNumber *irLCDArm;
    QFrame *frame_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_11;
    QLabel *mlxLabel;
    QLCDNumber *mlxUpLCD;
    QLCDNumber *mlxDownLCD;
    QFrame *frame;
    QLabel *CO2Label;
    QLCDNumber *CO2Lcd;
    QFrame *line_21;
    QGroupBox *groupBox;
    QLabel *label_3;
    QFrame *videoFrame;
    QLabel *videoLabel;
    QLabel *label_14;
    QGroupBox *mapNavGroupBox;
    QLabel *mapTagNav;
    QLabel *mapLabelNav;
    QLabel *lowVoltageLabel;
    QHBoxLayout *horizontalLayout_29;
    QHBoxLayout *horizontalLayout_28;
    QVBoxLayout *verticalLayout_15;
    QFrame *motorsSpeedMpsFrame;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *motorSpeedLabel;
    QFrame *motorMpsFrame;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *motorLeftLinearLabel;
    QLCDNumber *motorLinearLCD;
    QHBoxLayout *horizontalLayout_18;
    QLabel *motorRightAngularLabel;
    QLCDNumber *motorAngularLCD;
    QLabel *pandoraLogoLabel;
    QFrame *line_3;
    QWidget *widget;
    QFrame *frame_2;
    QWidget *widget_11;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *ThermalGroupBox;
    QLabel *thermalFront8;
    QLabel *thermalFront2;
    QLabel *thermalFront4;
    QLabel *thermalFront7;
    QLabel *thermalFront5;
    QLabel *thermalFront1;
    QLabel *thermalFront3;
    QLabel *thermalFront6;
    QLabel *thermalLeft2;
    QLabel *thermalLeft4;
    QLabel *thermalLeft7;
    QLabel *thermalLeft5;
    QLabel *thermalLeft1;
    QLabel *thermalLeft8;
    QLabel *thermalLeft3;
    QLabel *thermalLeft6;
    QLabel *thermalRight2;
    QLabel *thermalRight4;
    QLabel *thermalRight7;
    QLabel *thermalRight5;
    QLabel *thermalRight1;
    QLabel *thermalRight8;
    QLabel *thermalRight3;
    QLabel *thermalRight6;
    QFrame *frame_5;
    QLabel *irLabel_2;
    QDoubleSpinBox *thermalThresDoubleSpinBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *vehicleControlLabel;
    QFrame *line_5;
    QLabel *gripperLabel;
    QPushButton *forceStopPushButton;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout;
    QPushButton *forwardPushButton;
    QPushButton *LeftPushButton;
    QPushButton *backwardPushButton;
    QPushButton *RightPushButton;
    QWidget *widget1;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *gripperGrabButton;
    QPushButton *gripperStopButton;
    QPushButton *gripperReleaseButton;
    QFrame *line_2;
    QFrame *armControlFrame;
    QLabel *armControlLabel;
    QFrame *line_15;
    QFrame *frame_12;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *xForwardButton;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *zUpButton;
    QPushButton *yLeftButton;
    QPushButton *xBackwardButton;
    QPushButton *yRightButton;
    QPushButton *zDownButton;
    QWidget *layoutWidget_13;
    QVBoxLayout *verticalLayout_2;
    QLabel *xyzStepLabel;
    QDoubleSpinBox *xyzStepDoubleSpinBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_31;
    QVBoxLayout *verticalLayout_20;
    QSpacerItem *verticalSpacer_10;
    QPushButton *parkArmButton;
    QSpacerItem *verticalSpacer_9;
    QLabel *angleStepLabel;
    QDoubleSpinBox *angleStepDoubleSpinBox;
    QGridLayout *anglesControlGridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *bUpButton;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout;
    QPushButton *aLeftButton;
    QPushButton *resetAngleAButton;
    QPushButton *aRightButton;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *bDownButton;
    QSpacerItem *horizontalSpacer_23;
    QGridLayout *gridLayout_17;
    QPushButton *armHeadResetUpDownPushButton;
    QPushButton *armHeadUpPushButton;
    QPushButton *armHeadLeftPushButton;
    QPushButton *armHeadRightPushButton;
    QPushButton *armHeadDownPushButton;
    QPushButton *armHeadResetPushButton;
    QLabel *label_16;
    QGridLayout *gridLayout_6;
    QFrame *voltageFrame;
    QLabel *butterflyLabel;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_9;
    QLabel *butMotorsLabel;
    QLCDNumber *motorsVoltage;
    QLabel *butPsuLabel;
    QLCDNumber *psuVoltage;
    QProgressBar *MotorsBatteryProgressBar;
    QProgressBar *psuBatteryProgressBar;
    QFrame *line_7;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_3;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *butterflyLabel_2;
    QComboBox *statesComboBox;
    QCheckBox *armTeleoperationCheckBox;
    QHBoxLayout *horizontalLayout_20;
    QLabel *numOfVictimsLabel;
    QLCDNumber *numOfVictimsLCD;
    QFrame *line_18;
    QHBoxLayout *horizontalLayout_30;
    QVBoxLayout *verticalLayout_18;
    QLabel *pandoraLabel;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QTextBrowser *pandoraTextBrowser;
    QFrame *line_4;
    QPushButton *clearPandoraTextBrowserButton;
    QWidget *tab_2;
    QLabel *tab2BackLabel;
    QTreeWidget *victimsTreeWidget;
    QLabel *mapTag_2;
    QGroupBox *mapGroupBox;
    QLabel *mapLabel;
    QLabel *mapTag;
    QLabel *lowVoltageLabel_2;
    QFrame *line_8;
    QFrame *frame1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *acceptVictimPushButton;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line_16;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *declineVictimPushButton;
    QFrame *topFrame_2;
    QPushButton *createGeotiffPushButton;
    QLineEdit *geotiffMissionNamePlainTextEdit;
    QLabel *misionNameLabel;
    QFrame *line_6;
    QGroupBox *groupBox_2;
    QFrame *frame_8;
    QLabel *semiAutoSensorLabel1_2;
    QLabel *semiAutoSensorLabel1_3;
    QLabel *semiAutoSensorLabel1_4;
    QLabel *semiAutoSensorLabel1_5;
    QLabel *semiAutoSensorLabel1_6;
    QFrame *line_12;
    QLabel *semiAutoSensorsLabel;
    QLabel *semiAutoSensorLabel1;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_23;
    QHBoxLayout *horizontalLayout_22;
    QLabel *semiAutoXLabel;
    QLabel *semiAutoXValueLabel;
    QLabel *semiAutoYLabel;
    QLabel *semiAutoYValueLabel;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *semiAutoConfirmButton;
    QLabel *semiAutonomousInstructions;
    QLabel *semiAutonomousLabel;
    QFrame *line_13;
    QComboBox *sensorsComboBox1;
    QComboBox *sensorsComboBox2;
    QComboBox *sensorsComboBox3;
    QComboBox *sensorsComboBox4;
    QComboBox *sensorsComboBox5;
    QComboBox *sensorsComboBox6;
    QWidget *tab_3;
    QLabel *tab3BackLabel;
    QLabel *label;
    QLabel *label_7;
    QFrame *frame_4;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *motorSpeedLabel_2;
    QFrame *motorRpmFrame_2;
    QWidget *layoutWidget_14;
    QGridLayout *gridLayout_11;
    QLabel *motorLeftRpmLabel;
    QLCDNumber *motorLeftRpm;
    QLabel *motorRightRpmLabel;
    QLCDNumber *motorRightRpm;
    QLabel *motorRpmLabel_2;
    QFrame *frame_6;
    QWidget *layoutWidget_15;
    QGridLayout *gridLayout_13;
    QLabel *debugMotorLinearLabel;
    QLCDNumber *debugMotorLinearLCD;
    QLabel *debugMotorAngularrLabel;
    QLCDNumber *debugMotorAngularLCD;
    QFrame *line_19;
    QWidget *layoutWidget_17;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *clearMousePressEventsPushButton;
    QSpacerItem *horizontalSpacer_12;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QTextBrowser *mousePressEventTextBrowser;
    QLabel *label_2;
    QFrame *line_11;
    QFrame *line;
    QLabel *label_13;
    QWidget *layoutWidget_16;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QTextBrowser *debugTextBrowser;
    QHBoxLayout *horizontalLayout_16;
    QLabel *dbgDebugLabel;
    QPushButton *dbgDebugButton;
    QLabel *dbgInfoLabel;
    QPushButton *dbgInfoButton;
    QLabel *dbgWarnLabel;
    QPushButton *dbgWarnButton;
    QLabel *dbgErrorLabel;
    QPushButton *dbgErrorButton;
    QLabel *dbgFatalLabel;
    QPushButton *dbgFatalButton;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *startConsoleButton;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *clearConsoleButton;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *stopConsoleButton;
    QSpacerItem *horizontalSpacer_9;
    QFrame *line_10;
    QFrame *line_17;
    QGroupBox *groupBox_3;
    QLabel *motorSpeedLabel_3;
    QFrame *frame_9;
    QFrame *topFrame_3;
    QLabel *misionNameLabel_2;
    QFrame *topFrame_5;
    QLabel *misionNameLabel_4;
    QLabel *soundExistenceDbgLabel;
    QProgressBar *soundExistProbPogressBar;
    QFrame *topFrame_6;
    QLabel *misionNameLabel_6;
    QFrame *frame_11;
    QFrame *topFrame_8;
    QLineEdit *soundExistenceLabel_6;
    QLabel *misionNameLabel_8;
    QFrame *topFrame_9;
    QLabel *misionNameLabel_9;
    QLabel *soundDirLabel;
    QProgressBar *soundDirProbPogressBar;
    QFrame *topFrame_10;
    QLabel *misionNameLabel_10;
    QFrame *line_23;
    QPushButton *testSoundButton;
    QGroupBox *checkSensorsGroupBox;
    QLabel *motorSpeedLabel_4;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_24;
    QFrame *frame_13;
    QFrame *topFrame_4;
    QLabel *misionNameLabel_3;
    QProgressBar *mlxProgressbar;
    QLCDNumber *mlxDbgLCD;
    QFrame *frame_14;
    QFrame *topFrame_11;
    QLabel *misionNameLabel_7;
    QProgressBar *co2Progressbar;
    QLCDNumber *co2DbgLCD;
    QFrame *frame_15;
    QFrame *topFrame_12;
    QLabel *misionNameLabel_11;
    QProgressBar *soundProgressbar;
    QLCDNumber *soundDbgLCD;
    QFrame *frame_16;
    QFrame *topFrame_13;
    QLabel *misionNameLabel_12;
    QProgressBar *skinProgressbar;
    QLCDNumber *skinDbgLCD;
    QFrame *frame_17;
    QFrame *topFrame_14;
    QLabel *misionNameLabel_13;
    QProgressBar *motionProgressbar;
    QLCDNumber *motionDbgLCD;
    QFrame *frame_18;
    QFrame *topFrame_15;
    QLabel *misionNameLabel_14;
    QProgressBar *faceProgressbar;
    QLCDNumber *faceDbgLCD;
    QWidget *layoutWidget8;
    QGridLayout *gridLayout_10;
    QFrame *topFrame;
    QFrame *line_20;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_7;
    QLCDNumber *timeElapsedMinutesLCD;
    QLabel *label_17;
    QLCDNumber *timeElapsedSecondsLCD;
    QFrame *line_22;
    QPushButton *forceModeOffButton;
    QGroupBox *launchButtonsGroupBox;
    QPushButton *startGlobLauncherButton;
    QPushButton *killGlobLauncherButton;
    QFrame *frame_19;
    QLabel *misionNameLabel_5;
    QLabel *soundExistenceLabel;
    QProgressBar *progressBar;
    QPushButton *shutdownPandoraButton;
    QPushButton *restartPandoraButton;
    QLabel *label_15;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *currentStateLabel;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_8;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_9;
    QWidget *layoutWidget13;
    QHBoxLayout *horizontalLayout_10;
    QWidget *layoutWidget14;
    QHBoxLayout *horizontalLayout_19;
    QWidget *layoutWidget15;
    QHBoxLayout *horizontalLayout_21;
    QWidget *layoutWidget16;
    QGridLayout *gridLayout_15;

    void setupUi(QWidget *pandoraGui)
    {
        if (pandoraGui->objectName().isEmpty())
            pandoraGui->setObjectName(QString::fromUtf8("pandoraGui"));
        pandoraGui->resize(1430, 804);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pandoraGui->sizePolicy().hasHeightForWidth());
        pandoraGui->setSizePolicy(sizePolicy);
        pandoraGui->setMinimumSize(QSize(1430, 804));
        pandoraGui->setMaximumSize(QSize(1430, 804));
        pandoraGui->setBaseSize(QSize(1284, 600));
        pandoraGui->setStyleSheet(QString::fromUtf8("background: rgba()"));
        tabWidget = new QTabWidget(pandoraGui);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1430, 800));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(1430, 800));
        tabWidget->setMaximumSize(QSize(1430, 800));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/newPrefix/matrixFaded.jpg);"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setMovable(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab_1->sizePolicy().hasHeightForWidth());
        tab_1->setSizePolicy(sizePolicy2);
        tab_1->setBaseSize(QSize(0, 0));
        tab1BackLabel = new QLabel(tab_1);
        tab1BackLabel->setObjectName(QString::fromUtf8("tab1BackLabel"));
        tab1BackLabel->setGeometry(QRect(0, 0, 1441, 771));
        QFont font;
        font.setPointSize(9);
        tab1BackLabel->setFont(font);
        tab1BackLabel->setStyleSheet(QString::fromUtf8(""));
        layoutWidget_2 = new QWidget(tab_1);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 0, 1427, 770));
        gridLayout_14 = new QGridLayout(layoutWidget_2);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout_8->setHorizontalSpacing(10);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        SensorsGoupBox = new QGroupBox(layoutWidget_2);
        SensorsGoupBox->setObjectName(QString::fromUtf8("SensorsGoupBox"));
        SensorsGoupBox->setMinimumSize(QSize(185, 471));
        SensorsGoupBox->setMaximumSize(QSize(185, 16777215));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(true);
        font1.setWeight(75);
        SensorsGoupBox->setFont(font1);
        SensorsGoupBox->setAutoFillBackground(false);
        SensorsGoupBox->setStyleSheet(QString::fromUtf8(""));
        SensorsGoupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        layoutWidget = new QWidget(SensorsGoupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 183, 510));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(181, 31));
        label_6->setMaximumSize(QSize(181, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 205, 0, 190));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 130));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        QBrush brush4(QColor(0, 0, 0, 192));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_6->setPalette(palette);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background:rgba(0, 205, 0,190)"));
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setLineWidth(2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        sonarFrame = new QFrame(layoutWidget);
        sonarFrame->setObjectName(QString::fromUtf8("sonarFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sonarFrame->sizePolicy().hasHeightForWidth());
        sonarFrame->setSizePolicy(sizePolicy3);
        sonarFrame->setMinimumSize(QSize(181, 178));
        sonarFrame->setAutoFillBackground(false);
        sonarFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        sonarFrame->setFrameShape(QFrame::Box);
        sonarFrame->setFrameShadow(QFrame::Raised);
        sonarFrame->setLineWidth(1);
        sonarLCDArm = new QLCDNumber(sonarFrame);
        sonarLCDArm->setObjectName(QString::fromUtf8("sonarLCDArm"));
        sonarLCDArm->setGeometry(QRect(75, 70, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDArm->sizePolicy().hasHeightForWidth());
        sonarLCDArm->setSizePolicy(sizePolicy3);
        sonarLCDArm->setMinimumSize(QSize(46, 40));
        sonarLCDArm->setBaseSize(QSize(0, 0));
        QFont font3;
        font3.setPointSize(10);
        sonarLCDArm->setFont(font3);
        sonarLCDArm->setStyleSheet(QString::fromUtf8("color: white; background: rgba(255,0,0,80)"));
        sonarLCDArm->setFrameShadow(QFrame::Sunken);
        sonarLCDArm->setNumDigits(3);
        sonarLCDArm->setSegmentStyle(QLCDNumber::Flat);
        sonarLabel = new QLabel(sonarFrame);
        sonarLabel->setObjectName(QString::fromUtf8("sonarLabel"));
        sonarLabel->setGeometry(QRect(10, 10, 57, 39));
        sizePolicy3.setHeightForWidth(sonarLabel->sizePolicy().hasHeightForWidth());
        sonarLabel->setSizePolicy(sizePolicy3);
        sonarLabel->setMinimumSize(QSize(57, 0));
        sonarLabel->setMaximumSize(QSize(57, 16777215));
        sonarLabel->setFont(font2);
        sonarLabel->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        sonarLabel->setFrameShape(QFrame::Box);
        sonarLabel->setFrameShadow(QFrame::Plain);
        sonarLabel->setLineWidth(1);
        sonarLabel->setAlignment(Qt::AlignCenter);
        sonarLCDFront = new QLCDNumber(sonarFrame);
        sonarLCDFront->setObjectName(QString::fromUtf8("sonarLCDFront"));
        sonarLCDFront->setGeometry(QRect(75, 10, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDFront->sizePolicy().hasHeightForWidth());
        sonarLCDFront->setSizePolicy(sizePolicy3);
        sonarLCDFront->setMinimumSize(QSize(46, 40));
        sonarLCDFront->setBaseSize(QSize(0, 0));
        sonarLCDFront->setFont(font3);
        sonarLCDFront->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        sonarLCDFront->setFrameShadow(QFrame::Sunken);
        sonarLCDFront->setNumDigits(3);
        sonarLCDFront->setSegmentStyle(QLCDNumber::Flat);
        sonarLCDLeft = new QLCDNumber(sonarFrame);
        sonarLCDLeft->setObjectName(QString::fromUtf8("sonarLCDLeft"));
        sonarLCDLeft->setGeometry(QRect(15, 70, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDLeft->sizePolicy().hasHeightForWidth());
        sonarLCDLeft->setSizePolicy(sizePolicy3);
        sonarLCDLeft->setMinimumSize(QSize(40, 40));
        sonarLCDLeft->setBaseSize(QSize(0, 0));
        sonarLCDLeft->setFont(font3);
        sonarLCDLeft->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        sonarLCDLeft->setFrameShadow(QFrame::Sunken);
        sonarLCDLeft->setNumDigits(3);
        sonarLCDLeft->setSegmentStyle(QLCDNumber::Flat);
        sonarLCDRight = new QLCDNumber(sonarFrame);
        sonarLCDRight->setObjectName(QString::fromUtf8("sonarLCDRight"));
        sonarLCDRight->setGeometry(QRect(130, 70, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDRight->sizePolicy().hasHeightForWidth());
        sonarLCDRight->setSizePolicy(sizePolicy3);
        sonarLCDRight->setMinimumSize(QSize(40, 40));
        sonarLCDRight->setBaseSize(QSize(0, 0));
        sonarLCDRight->setFont(font3);
        sonarLCDRight->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        sonarLCDRight->setFrameShadow(QFrame::Sunken);
        sonarLCDRight->setNumDigits(3);
        sonarLCDRight->setSegmentStyle(QLCDNumber::Flat);
        sonarLCDRear1 = new QLCDNumber(sonarFrame);
        sonarLCDRear1->setObjectName(QString::fromUtf8("sonarLCDRear1"));
        sonarLCDRear1->setGeometry(QRect(40, 130, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDRear1->sizePolicy().hasHeightForWidth());
        sonarLCDRear1->setSizePolicy(sizePolicy3);
        sonarLCDRear1->setMinimumSize(QSize(46, 40));
        sonarLCDRear1->setBaseSize(QSize(0, 0));
        sonarLCDRear1->setFont(font3);
        sonarLCDRear1->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        sonarLCDRear1->setFrameShadow(QFrame::Sunken);
        sonarLCDRear1->setNumDigits(3);
        sonarLCDRear1->setSegmentStyle(QLCDNumber::Flat);
        sonarLCDRear2 = new QLCDNumber(sonarFrame);
        sonarLCDRear2->setObjectName(QString::fromUtf8("sonarLCDRear2"));
        sonarLCDRear2->setGeometry(QRect(100, 130, 46, 40));
        sizePolicy3.setHeightForWidth(sonarLCDRear2->sizePolicy().hasHeightForWidth());
        sonarLCDRear2->setSizePolicy(sizePolicy3);
        sonarLCDRear2->setMinimumSize(QSize(46, 40));
        sonarLCDRear2->setBaseSize(QSize(0, 0));
        sonarLCDRear2->setFont(font3);
        sonarLCDRear2->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        sonarLCDRear2->setFrameShadow(QFrame::Sunken);
        sonarLCDRear2->setNumDigits(3);
        sonarLCDRear2->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(sonarFrame);

        irFrame = new QFrame(layoutWidget);
        irFrame->setObjectName(QString::fromUtf8("irFrame"));
        sizePolicy3.setHeightForWidth(irFrame->sizePolicy().hasHeightForWidth());
        irFrame->setSizePolicy(sizePolicy3);
        irFrame->setMinimumSize(QSize(181, 171));
        irFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        irFrame->setFrameShape(QFrame::Box);
        irFrame->setFrameShadow(QFrame::Raised);
        irFrame->setLineWidth(1);
        gridLayout_4 = new QGridLayout(irFrame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        irLabel = new QLabel(irFrame);
        irLabel->setObjectName(QString::fromUtf8("irLabel"));
        sizePolicy3.setHeightForWidth(irLabel->sizePolicy().hasHeightForWidth());
        irLabel->setSizePolicy(sizePolicy3);
        irLabel->setMinimumSize(QSize(40, 0));
        irLabel->setMaximumSize(QSize(40, 16777215));
        irLabel->setFont(font2);
        irLabel->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        irLabel->setFrameShape(QFrame::Box);
        irLabel->setFrameShadow(QFrame::Plain);
        irLabel->setLineWidth(1);
        irLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(irLabel, 0, 0, 1, 1);

        irLCDFront = new QLCDNumber(irFrame);
        irLCDFront->setObjectName(QString::fromUtf8("irLCDFront"));
        sizePolicy3.setHeightForWidth(irLCDFront->sizePolicy().hasHeightForWidth());
        irLCDFront->setSizePolicy(sizePolicy3);
        irLCDFront->setMinimumSize(QSize(40, 40));
        irLCDFront->setBaseSize(QSize(0, 0));
        irLCDFront->setFont(font3);
        irLCDFront->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        irLCDFront->setFrameShadow(QFrame::Sunken);
        irLCDFront->setNumDigits(3);
        irLCDFront->setDigitCount(3);
        irLCDFront->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(irLCDFront, 0, 1, 1, 2);

        irLCDLeft = new QLCDNumber(irFrame);
        irLCDLeft->setObjectName(QString::fromUtf8("irLCDLeft"));
        sizePolicy3.setHeightForWidth(irLCDLeft->sizePolicy().hasHeightForWidth());
        irLCDLeft->setSizePolicy(sizePolicy3);
        irLCDLeft->setMinimumSize(QSize(40, 40));
        irLCDLeft->setBaseSize(QSize(0, 0));
        irLCDLeft->setFont(font3);
        irLCDLeft->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        irLCDLeft->setFrameShadow(QFrame::Sunken);
        irLCDLeft->setNumDigits(3);
        irLCDLeft->setDigitCount(3);
        irLCDLeft->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(irLCDLeft, 1, 0, 1, 1);

        irLCDRight = new QLCDNumber(irFrame);
        irLCDRight->setObjectName(QString::fromUtf8("irLCDRight"));
        sizePolicy3.setHeightForWidth(irLCDRight->sizePolicy().hasHeightForWidth());
        irLCDRight->setSizePolicy(sizePolicy3);
        irLCDRight->setMinimumSize(QSize(40, 40));
        irLCDRight->setBaseSize(QSize(0, 0));
        irLCDRight->setFont(font3);
        irLCDRight->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        irLCDRight->setFrameShadow(QFrame::Sunken);
        irLCDRight->setNumDigits(3);
        irLCDRight->setDigitCount(3);
        irLCDRight->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(irLCDRight, 1, 2, 1, 1);

        irLCDRear = new QLCDNumber(irFrame);
        irLCDRear->setObjectName(QString::fromUtf8("irLCDRear"));
        sizePolicy3.setHeightForWidth(irLCDRear->sizePolicy().hasHeightForWidth());
        irLCDRear->setSizePolicy(sizePolicy3);
        irLCDRear->setMinimumSize(QSize(40, 40));
        irLCDRear->setBaseSize(QSize(0, 0));
        irLCDRear->setFont(font3);
        irLCDRear->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        irLCDRear->setFrameShadow(QFrame::Sunken);
        irLCDRear->setNumDigits(3);
        irLCDRear->setDigitCount(3);
        irLCDRear->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(irLCDRear, 2, 1, 1, 2);

        irLCDArm = new QLCDNumber(irFrame);
        irLCDArm->setObjectName(QString::fromUtf8("irLCDArm"));
        sizePolicy3.setHeightForWidth(irLCDArm->sizePolicy().hasHeightForWidth());
        irLCDArm->setSizePolicy(sizePolicy3);
        irLCDArm->setMinimumSize(QSize(40, 40));
        irLCDArm->setBaseSize(QSize(0, 0));
        irLCDArm->setFont(font3);
        irLCDArm->setStyleSheet(QString::fromUtf8("color: white; background: rgba(255,0,0,80)"));
        irLCDArm->setFrameShadow(QFrame::Sunken);
        irLCDArm->setNumDigits(3);
        irLCDArm->setDigitCount(3);
        irLCDArm->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_4->addWidget(irLCDArm, 1, 1, 1, 1);


        verticalLayout->addWidget(irFrame);

        frame_7 = new QFrame(layoutWidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        sizePolicy3.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy3);
        frame_7->setMinimumSize(QSize(181, 43));
        frame_7->setMaximumSize(QSize(181, 43));
        frame_7->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_7->setLineWidth(1);
        layoutWidget1 = new QWidget(frame_7);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 6, 171, 33));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        mlxLabel = new QLabel(layoutWidget1);
        mlxLabel->setObjectName(QString::fromUtf8("mlxLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(95);
        sizePolicy4.setVerticalStretch(40);
        sizePolicy4.setHeightForWidth(mlxLabel->sizePolicy().hasHeightForWidth());
        mlxLabel->setSizePolicy(sizePolicy4);
        mlxLabel->setMinimumSize(QSize(44, 31));
        mlxLabel->setMaximumSize(QSize(72, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush6(QColor(80, 80, 80, 215));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush7(QColor(255, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        mlxLabel->setPalette(palette1);
        QFont font4;
        font4.setPointSize(8);
        mlxLabel->setFont(font4);
        mlxLabel->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        mlxLabel->setFrameShape(QFrame::Box);
        mlxLabel->setFrameShadow(QFrame::Plain);
        mlxLabel->setLineWidth(1);

        horizontalLayout_11->addWidget(mlxLabel);

        mlxUpLCD = new QLCDNumber(layoutWidget1);
        mlxUpLCD->setObjectName(QString::fromUtf8("mlxUpLCD"));
        mlxUpLCD->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mlxUpLCD->sizePolicy().hasHeightForWidth());
        mlxUpLCD->setSizePolicy(sizePolicy5);
        mlxUpLCD->setMinimumSize(QSize(41, 31));
        mlxUpLCD->setMaximumSize(QSize(41, 31));
        mlxUpLCD->setSizeIncrement(QSize(0, 0));
        mlxUpLCD->setBaseSize(QSize(0, 0));
        QFont font5;
        font5.setPointSize(12);
        mlxUpLCD->setFont(font5);
        mlxUpLCD->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        mlxUpLCD->setNumDigits(2);
        mlxUpLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_11->addWidget(mlxUpLCD);

        mlxDownLCD = new QLCDNumber(layoutWidget1);
        mlxDownLCD->setObjectName(QString::fromUtf8("mlxDownLCD"));
        mlxDownLCD->setEnabled(true);
        sizePolicy5.setHeightForWidth(mlxDownLCD->sizePolicy().hasHeightForWidth());
        mlxDownLCD->setSizePolicy(sizePolicy5);
        mlxDownLCD->setMinimumSize(QSize(41, 31));
        mlxDownLCD->setMaximumSize(QSize(41, 31));
        mlxDownLCD->setSizeIncrement(QSize(0, 0));
        mlxDownLCD->setBaseSize(QSize(0, 0));
        mlxDownLCD->setFont(font5);
        mlxDownLCD->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        mlxDownLCD->setNumDigits(2);
        mlxDownLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_11->addWidget(mlxDownLCD);


        verticalLayout->addWidget(frame_7);

        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setMinimumSize(QSize(181, 61));
        frame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        CO2Label = new QLabel(frame);
        CO2Label->setObjectName(QString::fromUtf8("CO2Label"));
        CO2Label->setGeometry(QRect(11, 11, 95, 40));
        sizePolicy4.setHeightForWidth(CO2Label->sizePolicy().hasHeightForWidth());
        CO2Label->setSizePolicy(sizePolicy4);
        CO2Label->setMinimumSize(QSize(95, 40));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        CO2Label->setPalette(palette2);
        CO2Label->setFont(font3);
        CO2Label->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        CO2Label->setFrameShape(QFrame::Box);
        CO2Label->setFrameShadow(QFrame::Plain);
        CO2Label->setLineWidth(1);
        CO2Lcd = new QLCDNumber(frame);
        CO2Lcd->setObjectName(QString::fromUtf8("CO2Lcd"));
        CO2Lcd->setEnabled(true);
        CO2Lcd->setGeometry(QRect(112, 11, 55, 40));
        sizePolicy5.setHeightForWidth(CO2Lcd->sizePolicy().hasHeightForWidth());
        CO2Lcd->setSizePolicy(sizePolicy5);
        CO2Lcd->setMinimumSize(QSize(50, 40));
        CO2Lcd->setSizeIncrement(QSize(0, 0));
        CO2Lcd->setBaseSize(QSize(0, 0));
        CO2Lcd->setFont(font5);
        CO2Lcd->setStyleSheet(QString::fromUtf8("color: red; background: white"));
        CO2Lcd->setNumDigits(4);
        CO2Lcd->setSegmentStyle(QLCDNumber::Flat);

        verticalLayout->addWidget(frame);


        gridLayout_7->addWidget(SensorsGoupBox, 0, 0, 1, 1);

        line_21 = new QFrame(layoutWidget_2);
        line_21->setObjectName(QString::fromUtf8("line_21"));
        line_21->setMinimumSize(QSize(16, 509));
        line_21->setMaximumSize(QSize(16, 509));
        line_21->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_21->setFrameShadow(QFrame::Plain);
        line_21->setLineWidth(3);
        line_21->setFrameShape(QFrame::VLine);

        gridLayout_7->addWidget(line_21, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        groupBox = new QGroupBox(layoutWidget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(680, 505));
        groupBox->setMaximumSize(QSize(680, 505));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        groupBox->setFont(font6);
        groupBox->setStyleSheet(QString::fromUtf8("color: white"));
        groupBox->setFlat(false);
        groupBox->setCheckable(true);
        groupBox->setChecked(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 0, 221, 21));
        label_3->setMinimumSize(QSize(0, 21));
        label_3->setMaximumSize(QSize(680, 21));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        label_3->setFont(font7);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Plain);
        label_3->setLineWidth(2);
        label_3->setAlignment(Qt::AlignCenter);
        videoFrame = new QFrame(groupBox);
        videoFrame->setObjectName(QString::fromUtf8("videoFrame"));
        videoFrame->setGeometry(QRect(1, 24, 680, 480));
        videoFrame->setMinimumSize(QSize(640, 480));
        videoFrame->setMaximumSize(QSize(680, 501));
        videoFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        videoFrame->setFrameShape(QFrame::StyledPanel);
        videoFrame->setFrameShadow(QFrame::Raised);
        videoFrame->setLineWidth(2);
        videoLabel = new QLabel(videoFrame);
        videoLabel->setObjectName(QString::fromUtf8("videoLabel"));
        videoLabel->setGeometry(QRect(20, 0, 640, 480));
        videoLabel->setAutoFillBackground(false);
        videoLabel->setStyleSheet(QString::fromUtf8("background: rgba();"));
        videoLabel->setFrameShape(QFrame::Box);
        videoLabel->setFrameShadow(QFrame::Raised);
        videoLabel->setLineWidth(1);
        label_14 = new QLabel(videoFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(130, 630, 67, 17));

        gridLayout_8->addWidget(groupBox, 0, 1, 1, 1);

        mapNavGroupBox = new QGroupBox(layoutWidget_2);
        mapNavGroupBox->setObjectName(QString::fromUtf8("mapNavGroupBox"));
        mapNavGroupBox->setMinimumSize(QSize(496, 489));
        mapNavGroupBox->setMaximumSize(QSize(501, 509));
        QFont font8;
        font8.setPointSize(10);
        font8.setBold(true);
        font8.setItalic(true);
        font8.setUnderline(false);
        font8.setWeight(75);
        mapNavGroupBox->setFont(font8);
        mapNavGroupBox->setStyleSheet(QString::fromUtf8("color: white"));
        mapNavGroupBox->setCheckable(true);
        mapNavGroupBox->setChecked(false);
        mapTagNav = new QLabel(mapNavGroupBox);
        mapTagNav->setObjectName(QString::fromUtf8("mapTagNav"));
        mapTagNav->setGeometry(QRect(191, 3, 111, 21));
        mapTagNav->setMinimumSize(QSize(62, 21));
        mapTagNav->setMaximumSize(QSize(16777215, 21));
        mapTagNav->setFont(font7);
        mapTagNav->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        mapTagNav->setFrameShape(QFrame::Box);
        mapTagNav->setFrameShadow(QFrame::Plain);
        mapTagNav->setLineWidth(1);
        mapTagNav->setAlignment(Qt::AlignCenter);
        mapLabelNav = new QLabel(mapNavGroupBox);
        mapLabelNav->setObjectName(QString::fromUtf8("mapLabelNav"));
        mapLabelNav->setGeometry(QRect(3, 26, 491, 480));
        mapLabelNav->setMinimumSize(QSize(491, 480));
        mapLabelNav->setMaximumSize(QSize(491, 480));
        mapLabelNav->setAutoFillBackground(false);
        mapLabelNav->setStyleSheet(QString::fromUtf8("background: rgb(127,127,127);"));
        mapLabelNav->setFrameShape(QFrame::Box);
        mapLabelNav->setFrameShadow(QFrame::Raised);
        mapLabelNav->setLineWidth(2);
        lowVoltageLabel = new QLabel(mapNavGroupBox);
        lowVoltageLabel->setObjectName(QString::fromUtf8("lowVoltageLabel"));
        lowVoltageLabel->setGeometry(QRect(10, 30, 481, 61));
        QFont font9;
        font9.setPointSize(28);
        font9.setBold(true);
        font9.setWeight(75);
        lowVoltageLabel->setFont(font9);
        lowVoltageLabel->setStyleSheet(QString::fromUtf8("color: red"));
        lowVoltageLabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(mapNavGroupBox, 0, 2, 1, 1);


        gridLayout_14->addLayout(gridLayout_8, 0, 0, 1, 1);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(3);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetFixedSize);
        motorsSpeedMpsFrame = new QFrame(layoutWidget_2);
        motorsSpeedMpsFrame->setObjectName(QString::fromUtf8("motorsSpeedMpsFrame"));
        motorsSpeedMpsFrame->setMinimumSize(QSize(231, 171));
        motorsSpeedMpsFrame->setMaximumSize(QSize(231, 171));
        motorsSpeedMpsFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,110);"));
        motorsSpeedMpsFrame->setFrameShape(QFrame::Box);
        motorsSpeedMpsFrame->setFrameShadow(QFrame::Raised);
        motorsSpeedMpsFrame->setLineWidth(1);
        widget_8 = new QWidget(motorsSpeedMpsFrame);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setGeometry(QRect(0, 2, 229, 161));
        widget_8->setStyleSheet(QString::fromUtf8("background: rgba()"));
        verticalLayout_8 = new QVBoxLayout(widget_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        motorSpeedLabel = new QLabel(widget_8);
        motorSpeedLabel->setObjectName(QString::fromUtf8("motorSpeedLabel"));
        sizePolicy3.setHeightForWidth(motorSpeedLabel->sizePolicy().hasHeightForWidth());
        motorSpeedLabel->setSizePolicy(sizePolicy3);
        motorSpeedLabel->setMinimumSize(QSize(211, 31));
        motorSpeedLabel->setMaximumSize(QSize(211, 31));
        motorSpeedLabel->setFont(font3);
        motorSpeedLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,190)\n"
""));
        motorSpeedLabel->setFrameShape(QFrame::Box);
        motorSpeedLabel->setFrameShadow(QFrame::Plain);
        motorSpeedLabel->setLineWidth(2);
        motorSpeedLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(motorSpeedLabel);

        motorMpsFrame = new QFrame(widget_8);
        motorMpsFrame->setObjectName(QString::fromUtf8("motorMpsFrame"));
        sizePolicy3.setHeightForWidth(motorMpsFrame->sizePolicy().hasHeightForWidth());
        motorMpsFrame->setSizePolicy(sizePolicy3);
        motorMpsFrame->setMinimumSize(QSize(211, 115));
        motorMpsFrame->setMaximumSize(QSize(211, 115));
        motorMpsFrame->setFrameShape(QFrame::StyledPanel);
        motorMpsFrame->setFrameShadow(QFrame::Raised);
        layoutWidget_9 = new QWidget(motorMpsFrame);
        layoutWidget_9->setObjectName(QString::fromUtf8("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(12, 10, 199, 92));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        motorLeftLinearLabel = new QLabel(layoutWidget_9);
        motorLeftLinearLabel->setObjectName(QString::fromUtf8("motorLeftLinearLabel"));
        sizePolicy3.setHeightForWidth(motorLeftLinearLabel->sizePolicy().hasHeightForWidth());
        motorLeftLinearLabel->setSizePolicy(sizePolicy3);
        motorLeftLinearLabel->setMinimumSize(QSize(126, 34));
        motorLeftLinearLabel->setMaximumSize(QSize(126, 34));
        motorLeftLinearLabel->setFont(font3);
        motorLeftLinearLabel->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(230, 230, 230, 255), stop:1 rgba(255, 255, 255, 255))"));
        motorLeftLinearLabel->setFrameShape(QFrame::Box);

        horizontalLayout_17->addWidget(motorLeftLinearLabel);

        motorLinearLCD = new QLCDNumber(layoutWidget_9);
        motorLinearLCD->setObjectName(QString::fromUtf8("motorLinearLCD"));
        sizePolicy3.setHeightForWidth(motorLinearLCD->sizePolicy().hasHeightForWidth());
        motorLinearLCD->setSizePolicy(sizePolicy3);
        motorLinearLCD->setMinimumSize(QSize(60, 40));
        motorLinearLCD->setBaseSize(QSize(0, 0));
        motorLinearLCD->setFont(font3);
        motorLinearLCD->setStyleSheet(QString::fromUtf8("color: red;  background: rgba(255,255,255,200)"));
        motorLinearLCD->setNumDigits(4);
        motorLinearLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_17->addWidget(motorLinearLCD);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        motorRightAngularLabel = new QLabel(layoutWidget_9);
        motorRightAngularLabel->setObjectName(QString::fromUtf8("motorRightAngularLabel"));
        sizePolicy3.setHeightForWidth(motorRightAngularLabel->sizePolicy().hasHeightForWidth());
        motorRightAngularLabel->setSizePolicy(sizePolicy3);
        motorRightAngularLabel->setMinimumSize(QSize(126, 34));
        motorRightAngularLabel->setMaximumSize(QSize(126, 34));
        QFont font10;
        font10.setPointSize(10);
        font10.setItalic(false);
        motorRightAngularLabel->setFont(font10);
        motorRightAngularLabel->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(230, 230, 230, 255), stop:1 rgba(255, 255, 255, 255))"));
        motorRightAngularLabel->setFrameShape(QFrame::Box);

        horizontalLayout_18->addWidget(motorRightAngularLabel);

        motorAngularLCD = new QLCDNumber(layoutWidget_9);
        motorAngularLCD->setObjectName(QString::fromUtf8("motorAngularLCD"));
        sizePolicy3.setHeightForWidth(motorAngularLCD->sizePolicy().hasHeightForWidth());
        motorAngularLCD->setSizePolicy(sizePolicy3);
        motorAngularLCD->setMinimumSize(QSize(60, 40));
        motorAngularLCD->setBaseSize(QSize(0, 0));
        motorAngularLCD->setFont(font3);
        motorAngularLCD->setStyleSheet(QString::fromUtf8("color: red;  background: rgba(255,255,255,200)"));
        motorAngularLCD->setNumDigits(4);
        motorAngularLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_18->addWidget(motorAngularLCD);


        verticalLayout_4->addLayout(horizontalLayout_18);


        verticalLayout_8->addWidget(motorMpsFrame);


        verticalLayout_15->addWidget(motorsSpeedMpsFrame);

        pandoraLogoLabel = new QLabel(layoutWidget_2);
        pandoraLogoLabel->setObjectName(QString::fromUtf8("pandoraLogoLabel"));
        pandoraLogoLabel->setMinimumSize(QSize(231, 50));
        pandoraLogoLabel->setMaximumSize(QSize(231, 50));
        pandoraLogoLabel->setAutoFillBackground(false);
        pandoraLogoLabel->setStyleSheet(QString::fromUtf8("background: rgb(16, 13, 32); color:  rgb(255,255,255);"));
        pandoraLogoLabel->setFrameShape(QFrame::Box);
        pandoraLogoLabel->setFrameShadow(QFrame::Plain);
        pandoraLogoLabel->setLineWidth(2);
        pandoraLogoLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(pandoraLogoLabel);


        horizontalLayout_28->addLayout(verticalLayout_15);

        line_3 = new QFrame(layoutWidget_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(3);
        line_3->setFrameShape(QFrame::VLine);

        horizontalLayout_28->addWidget(line_3);

        widget = new QWidget(layoutWidget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(435, 236));
        widget->setMaximumSize(QSize(435, 236));
        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(1, 1, 433, 92));
        frame_2->setMinimumSize(QSize(433, 92));
        frame_2->setMaximumSize(QSize(433, 92));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        widget_11 = new QWidget(frame_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(0, 0, 431, 93));
        widget_11->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        gridLayout_5 = new QGridLayout(widget_11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_25 = new QSpacerItem(13, 58, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_25, 0, 0, 1, 1);

        horizontalSpacer_27 = new QSpacerItem(8, 58, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_27, 0, 2, 1, 1);

        ThermalGroupBox = new QGroupBox(widget_11);
        ThermalGroupBox->setObjectName(QString::fromUtf8("ThermalGroupBox"));
        sizePolicy3.setHeightForWidth(ThermalGroupBox->sizePolicy().hasHeightForWidth());
        ThermalGroupBox->setSizePolicy(sizePolicy3);
        ThermalGroupBox->setMinimumSize(QSize(381, 91));
        ThermalGroupBox->setMaximumSize(QSize(381, 91));
        ThermalGroupBox->setFont(font5);
        ThermalGroupBox->setAutoFillBackground(false);
        ThermalGroupBox->setStyleSheet(QString::fromUtf8("background: rgba()"));
        ThermalGroupBox->setFlat(false);
        thermalFront8 = new QLabel(ThermalGroupBox);
        thermalFront8->setObjectName(QString::fromUtf8("thermalFront8"));
        thermalFront8->setGeometry(QRect(260, 10, 21, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(255, 127, 127, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(255, 63, 63, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(127, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(170, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront8->setPalette(palette3);
        QFont font11;
        font11.setFamily(QString::fromUtf8("Lucida Grande"));
        font11.setPointSize(17);
        font11.setBold(false);
        font11.setWeight(50);
        thermalFront8->setFont(font11);
        thermalFront8->setFrameShape(QFrame::Box);
        thermalFront8->setFrameShadow(QFrame::Plain);
        thermalFront8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront2 = new QLabel(ThermalGroupBox);
        thermalFront2->setObjectName(QString::fromUtf8("thermalFront2"));
        thermalFront2->setGeometry(QRect(140, 10, 21, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront2->setPalette(palette4);
        thermalFront2->setFont(font11);
        thermalFront2->setFrameShape(QFrame::Box);
        thermalFront2->setFrameShadow(QFrame::Plain);
        thermalFront2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront4 = new QLabel(ThermalGroupBox);
        thermalFront4->setObjectName(QString::fromUtf8("thermalFront4"));
        thermalFront4->setGeometry(QRect(180, 10, 21, 21));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront4->setPalette(palette5);
        thermalFront4->setFont(font11);
        thermalFront4->setFrameShape(QFrame::Box);
        thermalFront4->setFrameShadow(QFrame::Plain);
        thermalFront4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront7 = new QLabel(ThermalGroupBox);
        thermalFront7->setObjectName(QString::fromUtf8("thermalFront7"));
        thermalFront7->setGeometry(QRect(240, 10, 21, 21));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront7->setPalette(palette6);
        thermalFront7->setFont(font11);
        thermalFront7->setFrameShape(QFrame::Box);
        thermalFront7->setFrameShadow(QFrame::Plain);
        thermalFront7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront5 = new QLabel(ThermalGroupBox);
        thermalFront5->setObjectName(QString::fromUtf8("thermalFront5"));
        thermalFront5->setGeometry(QRect(200, 10, 21, 21));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront5->setPalette(palette7);
        thermalFront5->setFont(font11);
        thermalFront5->setFrameShape(QFrame::Box);
        thermalFront5->setFrameShadow(QFrame::Plain);
        thermalFront5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront1 = new QLabel(ThermalGroupBox);
        thermalFront1->setObjectName(QString::fromUtf8("thermalFront1"));
        thermalFront1->setGeometry(QRect(120, 10, 21, 21));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront1->setPalette(palette8);
        QFont font12;
        font12.setFamily(QString::fromUtf8("Lucida Grande"));
        font12.setPointSize(14);
        font12.setBold(false);
        font12.setWeight(50);
        thermalFront1->setFont(font12);
        thermalFront1->setAutoFillBackground(false);
        thermalFront1->setFrameShape(QFrame::Box);
        thermalFront1->setFrameShadow(QFrame::Plain);
        thermalFront1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront3 = new QLabel(ThermalGroupBox);
        thermalFront3->setObjectName(QString::fromUtf8("thermalFront3"));
        thermalFront3->setGeometry(QRect(160, 10, 21, 21));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront3->setPalette(palette9);
        thermalFront3->setFont(font11);
        thermalFront3->setFrameShape(QFrame::Box);
        thermalFront3->setFrameShadow(QFrame::Plain);
        thermalFront3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalFront6 = new QLabel(ThermalGroupBox);
        thermalFront6->setObjectName(QString::fromUtf8("thermalFront6"));
        thermalFront6->setGeometry(QRect(220, 10, 21, 21));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalFront6->setPalette(palette10);
        thermalFront6->setFont(font11);
        thermalFront6->setFrameShape(QFrame::Box);
        thermalFront6->setFrameShadow(QFrame::Plain);
        thermalFront6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft2 = new QLabel(ThermalGroupBox);
        thermalLeft2->setObjectName(QString::fromUtf8("thermalLeft2"));
        thermalLeft2->setGeometry(QRect(40, 50, 21, 21));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft2->setPalette(palette11);
        thermalLeft2->setFont(font11);
        thermalLeft2->setFrameShape(QFrame::Box);
        thermalLeft2->setFrameShadow(QFrame::Plain);
        thermalLeft2->setLineWidth(1);
        thermalLeft2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft4 = new QLabel(ThermalGroupBox);
        thermalLeft4->setObjectName(QString::fromUtf8("thermalLeft4"));
        thermalLeft4->setGeometry(QRect(80, 50, 21, 21));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft4->setPalette(palette12);
        thermalLeft4->setFont(font11);
        thermalLeft4->setFrameShape(QFrame::Box);
        thermalLeft4->setFrameShadow(QFrame::Plain);
        thermalLeft4->setLineWidth(1);
        thermalLeft4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft7 = new QLabel(ThermalGroupBox);
        thermalLeft7->setObjectName(QString::fromUtf8("thermalLeft7"));
        thermalLeft7->setGeometry(QRect(140, 50, 21, 21));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft7->setPalette(palette13);
        thermalLeft7->setFont(font11);
        thermalLeft7->setFrameShape(QFrame::Box);
        thermalLeft7->setFrameShadow(QFrame::Plain);
        thermalLeft7->setLineWidth(1);
        thermalLeft7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft5 = new QLabel(ThermalGroupBox);
        thermalLeft5->setObjectName(QString::fromUtf8("thermalLeft5"));
        thermalLeft5->setGeometry(QRect(100, 50, 21, 21));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft5->setPalette(palette14);
        thermalLeft5->setFont(font11);
        thermalLeft5->setFrameShape(QFrame::Box);
        thermalLeft5->setFrameShadow(QFrame::Plain);
        thermalLeft5->setLineWidth(1);
        thermalLeft5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft1 = new QLabel(ThermalGroupBox);
        thermalLeft1->setObjectName(QString::fromUtf8("thermalLeft1"));
        thermalLeft1->setGeometry(QRect(20, 50, 21, 21));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft1->setPalette(palette15);
        thermalLeft1->setFont(font12);
        thermalLeft1->setFrameShape(QFrame::Box);
        thermalLeft1->setFrameShadow(QFrame::Plain);
        thermalLeft1->setLineWidth(1);
        thermalLeft1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft8 = new QLabel(ThermalGroupBox);
        thermalLeft8->setObjectName(QString::fromUtf8("thermalLeft8"));
        thermalLeft8->setGeometry(QRect(160, 50, 21, 21));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft8->setPalette(palette16);
        thermalLeft8->setFont(font11);
        thermalLeft8->setFrameShape(QFrame::Box);
        thermalLeft8->setFrameShadow(QFrame::Plain);
        thermalLeft8->setLineWidth(1);
        thermalLeft8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft3 = new QLabel(ThermalGroupBox);
        thermalLeft3->setObjectName(QString::fromUtf8("thermalLeft3"));
        thermalLeft3->setGeometry(QRect(60, 50, 21, 21));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft3->setPalette(palette17);
        thermalLeft3->setFont(font11);
        thermalLeft3->setFrameShape(QFrame::Box);
        thermalLeft3->setFrameShadow(QFrame::Plain);
        thermalLeft3->setLineWidth(1);
        thermalLeft3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalLeft6 = new QLabel(ThermalGroupBox);
        thermalLeft6->setObjectName(QString::fromUtf8("thermalLeft6"));
        thermalLeft6->setGeometry(QRect(120, 50, 21, 21));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalLeft6->setPalette(palette18);
        thermalLeft6->setFont(font11);
        thermalLeft6->setFrameShape(QFrame::Box);
        thermalLeft6->setFrameShadow(QFrame::Plain);
        thermalLeft6->setLineWidth(1);
        thermalLeft6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight2 = new QLabel(ThermalGroupBox);
        thermalRight2->setObjectName(QString::fromUtf8("thermalRight2"));
        thermalRight2->setGeometry(QRect(230, 50, 21, 21));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight2->setPalette(palette19);
        thermalRight2->setFont(font11);
        thermalRight2->setFrameShape(QFrame::Box);
        thermalRight2->setFrameShadow(QFrame::Plain);
        thermalRight2->setLineWidth(1);
        thermalRight2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight4 = new QLabel(ThermalGroupBox);
        thermalRight4->setObjectName(QString::fromUtf8("thermalRight4"));
        thermalRight4->setGeometry(QRect(270, 50, 21, 21));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight4->setPalette(palette20);
        thermalRight4->setFont(font11);
        thermalRight4->setFrameShape(QFrame::Box);
        thermalRight4->setFrameShadow(QFrame::Plain);
        thermalRight4->setLineWidth(1);
        thermalRight4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight7 = new QLabel(ThermalGroupBox);
        thermalRight7->setObjectName(QString::fromUtf8("thermalRight7"));
        thermalRight7->setGeometry(QRect(330, 50, 21, 21));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight7->setPalette(palette21);
        thermalRight7->setFont(font11);
        thermalRight7->setFrameShape(QFrame::Box);
        thermalRight7->setFrameShadow(QFrame::Plain);
        thermalRight7->setLineWidth(1);
        thermalRight7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight5 = new QLabel(ThermalGroupBox);
        thermalRight5->setObjectName(QString::fromUtf8("thermalRight5"));
        thermalRight5->setGeometry(QRect(290, 50, 21, 21));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight5->setPalette(palette22);
        thermalRight5->setFont(font11);
        thermalRight5->setFrameShape(QFrame::Box);
        thermalRight5->setFrameShadow(QFrame::Plain);
        thermalRight5->setLineWidth(1);
        thermalRight5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight1 = new QLabel(ThermalGroupBox);
        thermalRight1->setObjectName(QString::fromUtf8("thermalRight1"));
        thermalRight1->setGeometry(QRect(210, 50, 21, 21));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight1->setPalette(palette23);
        thermalRight1->setFont(font12);
        thermalRight1->setFrameShape(QFrame::Box);
        thermalRight1->setFrameShadow(QFrame::Plain);
        thermalRight1->setLineWidth(1);
        thermalRight1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight8 = new QLabel(ThermalGroupBox);
        thermalRight8->setObjectName(QString::fromUtf8("thermalRight8"));
        thermalRight8->setGeometry(QRect(350, 50, 21, 21));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight8->setPalette(palette24);
        thermalRight8->setFont(font11);
        thermalRight8->setFrameShape(QFrame::Box);
        thermalRight8->setFrameShadow(QFrame::Plain);
        thermalRight8->setLineWidth(1);
        thermalRight8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight3 = new QLabel(ThermalGroupBox);
        thermalRight3->setObjectName(QString::fromUtf8("thermalRight3"));
        thermalRight3->setGeometry(QRect(250, 50, 21, 21));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight3->setPalette(palette25);
        thermalRight3->setFont(font11);
        thermalRight3->setFrameShape(QFrame::Box);
        thermalRight3->setFrameShadow(QFrame::Plain);
        thermalRight3->setLineWidth(1);
        thermalRight3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        thermalRight6 = new QLabel(ThermalGroupBox);
        thermalRight6->setObjectName(QString::fromUtf8("thermalRight6"));
        thermalRight6->setGeometry(QRect(310, 50, 21, 21));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        thermalRight6->setPalette(palette26);
        thermalRight6->setFont(font11);
        thermalRight6->setFrameShape(QFrame::Box);
        thermalRight6->setFrameShadow(QFrame::Plain);
        thermalRight6->setLineWidth(1);
        thermalRight6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_5 = new QFrame(ThermalGroupBox);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, -100, 371, 91));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        irLabel_2 = new QLabel(ThermalGroupBox);
        irLabel_2->setObjectName(QString::fromUtf8("irLabel_2"));
        irLabel_2->setGeometry(QRect(0, 0, 91, 38));
        QFont font13;
        font13.setBold(true);
        font13.setWeight(75);
        irLabel_2->setFont(font13);
        irLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,190)\n"
""));
        irLabel_2->setFrameShape(QFrame::Box);
        irLabel_2->setFrameShadow(QFrame::Plain);
        irLabel_2->setLineWidth(2);
        irLabel_2->setAlignment(Qt::AlignCenter);
        thermalThresDoubleSpinBox = new QDoubleSpinBox(ThermalGroupBox);
        thermalThresDoubleSpinBox->setObjectName(QString::fromUtf8("thermalThresDoubleSpinBox"));
        thermalThresDoubleSpinBox->setGeometry(QRect(330, 10, 50, 25));
        thermalThresDoubleSpinBox->setMinimumSize(QSize(50, 25));
        thermalThresDoubleSpinBox->setMaximumSize(QSize(50, 20));
        thermalThresDoubleSpinBox->setAlignment(Qt::AlignCenter);
        thermalThresDoubleSpinBox->setDecimals(0);
        thermalThresDoubleSpinBox->setMinimum(15);
        thermalThresDoubleSpinBox->setMaximum(40);
        thermalThresDoubleSpinBox->setSingleStep(1);
        thermalThresDoubleSpinBox->setValue(33);

        gridLayout_5->addWidget(ThermalGroupBox, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(1, 99, 440, 38));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        vehicleControlLabel = new QLabel(layoutWidget2);
        vehicleControlLabel->setObjectName(QString::fromUtf8("vehicleControlLabel"));
        sizePolicy3.setHeightForWidth(vehicleControlLabel->sizePolicy().hasHeightForWidth());
        vehicleControlLabel->setSizePolicy(sizePolicy3);
        vehicleControlLabel->setMinimumSize(QSize(323, 36));
        vehicleControlLabel->setMaximumSize(QSize(323, 36));
        vehicleControlLabel->setFont(font13);
        vehicleControlLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        vehicleControlLabel->setFrameShape(QFrame::Box);
        vehicleControlLabel->setFrameShadow(QFrame::Plain);
        vehicleControlLabel->setLineWidth(2);
        vehicleControlLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(vehicleControlLabel);

        line_5 = new QFrame(layoutWidget2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        QFont font14;
        font14.setBold(false);
        font14.setWeight(50);
        line_5->setFont(font14);
        line_5->setStyleSheet(QString::fromUtf8("color: black"));
        line_5->setFrameShadow(QFrame::Raised);
        line_5->setLineWidth(1);
        line_5->setMidLineWidth(0);
        line_5->setFrameShape(QFrame::VLine);

        horizontalLayout_3->addWidget(line_5);

        gripperLabel = new QLabel(layoutWidget2);
        gripperLabel->setObjectName(QString::fromUtf8("gripperLabel"));
        sizePolicy3.setHeightForWidth(gripperLabel->sizePolicy().hasHeightForWidth());
        gripperLabel->setSizePolicy(sizePolicy3);
        gripperLabel->setMinimumSize(QSize(100, 36));
        gripperLabel->setMaximumSize(QSize(100, 36));
        gripperLabel->setFont(font13);
        gripperLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        gripperLabel->setFrameShape(QFrame::Box);
        gripperLabel->setFrameShadow(QFrame::Plain);
        gripperLabel->setLineWidth(2);
        gripperLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(gripperLabel);

        forceStopPushButton = new QPushButton(widget);
        forceStopPushButton->setObjectName(QString::fromUtf8("forceStopPushButton"));
        forceStopPushButton->setGeometry(QRect(10, 146, 100, 35));
        sizePolicy3.setHeightForWidth(forceStopPushButton->sizePolicy().hasHeightForWidth());
        forceStopPushButton->setSizePolicy(sizePolicy3);
        forceStopPushButton->setMinimumSize(QSize(69, 35));
        forceStopPushButton->setMaximumSize(QSize(100, 35));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        forceStopPushButton->setPalette(palette27);
        QFont font15;
        font15.setPointSize(9);
        font15.setBold(true);
        font15.setWeight(75);
        forceStopPushButton->setFont(font15);
        forceStopPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,0,0);\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 0px;\n"
"background: black;\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: rgb(255,0,0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color:  rgb(255,0,0);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        forceStopPushButton->setAutoDefault(false);
        layoutWidget3 = new QWidget(widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(70, 140, 367, 94));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(8);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setVerticalSpacing(6);
        forwardPushButton = new QPushButton(layoutWidget3);
        forwardPushButton->setObjectName(QString::fromUtf8("forwardPushButton"));
        forwardPushButton->setMinimumSize(QSize(79, 33));
        forwardPushButton->setMaximumSize(QSize(70, 35));
        QPalette palette28;
        QBrush brush12(QColor(51, 51, 51, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush13(gradient);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient1(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 255, 255));
        gradient1.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush14(gradient1);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush14);
        QRadialGradient gradient2(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 255));
        gradient2.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush15(gradient2);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush15);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient3(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 255));
        gradient3.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush16(gradient3);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient4(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 255, 255));
        gradient4.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush17(gradient4);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush17);
        QRadialGradient gradient5(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 255, 255));
        gradient5.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush18(gradient5);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient6(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 255));
        gradient6.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush19(gradient6);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush19);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient7(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 255, 255));
        gradient7.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush20(gradient7);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        QRadialGradient gradient8(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 255));
        gradient8.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush21(gradient8);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush21);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        forwardPushButton->setPalette(palette28);
        forwardPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout->addWidget(forwardPushButton, 0, 1, 1, 1);

        LeftPushButton = new QPushButton(layoutWidget3);
        LeftPushButton->setObjectName(QString::fromUtf8("LeftPushButton"));
        LeftPushButton->setMinimumSize(QSize(79, 33));
        LeftPushButton->setMaximumSize(QSize(70, 35));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient9(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(255, 255, 255, 255));
        gradient9.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush22(gradient9);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette29.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient10(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(255, 255, 255, 255));
        gradient10.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush23(gradient10);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush23);
        QRadialGradient gradient11(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(255, 255, 255, 255));
        gradient11.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush24(gradient11);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette29.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient12(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(255, 255, 255, 255));
        gradient12.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush25(gradient12);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush25);
        palette29.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient13(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(255, 255, 255, 255));
        gradient13.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush26(gradient13);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush26);
        QRadialGradient gradient14(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(255, 255, 255, 255));
        gradient14.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush27(gradient14);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette29.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient15(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(255, 255, 255, 255));
        gradient15.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush28(gradient15);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette29.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette29.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient16(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(255, 255, 255, 255));
        gradient16.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush29(gradient16);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        QRadialGradient gradient17(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(255, 255, 255, 255));
        gradient17.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush30(gradient17);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        palette29.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        LeftPushButton->setPalette(palette29);
        LeftPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout->addWidget(LeftPushButton, 1, 0, 1, 1);

        backwardPushButton = new QPushButton(layoutWidget3);
        backwardPushButton->setObjectName(QString::fromUtf8("backwardPushButton"));
        backwardPushButton->setMinimumSize(QSize(79, 33));
        backwardPushButton->setMaximumSize(QSize(70, 35));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient18(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(255, 255, 255, 255));
        gradient18.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush31(gradient18);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush31);
        palette30.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient19(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(255, 255, 255, 255));
        gradient19.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush32(gradient19);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush32);
        QRadialGradient gradient20(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(255, 255, 255, 255));
        gradient20.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush33(gradient20);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush33);
        palette30.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient21(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(255, 255, 255, 255));
        gradient21.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush34(gradient21);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush34);
        palette30.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient22(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(255, 255, 255, 255));
        gradient22.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush35(gradient22);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush35);
        QRadialGradient gradient23(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(255, 255, 255, 255));
        gradient23.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush36(gradient23);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush36);
        palette30.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient24(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(255, 255, 255, 255));
        gradient24.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush37(gradient24);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush37);
        palette30.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient25(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(255, 255, 255, 255));
        gradient25.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush38(gradient25);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush38);
        QRadialGradient gradient26(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(255, 255, 255, 255));
        gradient26.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush39(gradient26);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush39);
        palette30.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        backwardPushButton->setPalette(palette30);
        backwardPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout->addWidget(backwardPushButton, 1, 1, 1, 1);

        RightPushButton = new QPushButton(layoutWidget3);
        RightPushButton->setObjectName(QString::fromUtf8("RightPushButton"));
        RightPushButton->setMinimumSize(QSize(79, 33));
        RightPushButton->setMaximumSize(QSize(70, 35));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient27(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(255, 255, 255, 255));
        gradient27.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush40(gradient27);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush40);
        palette31.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette31.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette31.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette31.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient28(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(255, 255, 255, 255));
        gradient28.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush41(gradient28);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush41);
        QRadialGradient gradient29(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(255, 255, 255, 255));
        gradient29.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush42(gradient29);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush42);
        palette31.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette31.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette31.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient30(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(255, 255, 255, 255));
        gradient30.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush43(gradient30);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush43);
        palette31.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette31.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient31(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(255, 255, 255, 255));
        gradient31.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush44(gradient31);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush44);
        QRadialGradient gradient32(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(255, 255, 255, 255));
        gradient32.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush45(gradient32);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush45);
        palette31.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette31.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient33(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(255, 255, 255, 255));
        gradient33.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush46(gradient33);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush46);
        palette31.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette31.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient34(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(255, 255, 255, 255));
        gradient34.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush47(gradient34);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush47);
        QRadialGradient gradient35(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(255, 255, 255, 255));
        gradient35.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush48(gradient35);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush48);
        palette31.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette31.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        RightPushButton->setPalette(palette31);
        RightPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout->addWidget(RightPushButton, 1, 2, 1, 1);


        horizontalLayout_5->addLayout(gridLayout);

        widget1 = new QWidget(layoutWidget3);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMinimumSize(QSize(105, 92));
        widget1->setMaximumSize(QSize(105, 92));
        layoutWidget4 = new QWidget(widget1);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 0, 81, 91));
        layoutWidget4->setMinimumSize(QSize(0, 28));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gripperGrabButton = new QPushButton(layoutWidget4);
        gripperGrabButton->setObjectName(QString::fromUtf8("gripperGrabButton"));
        gripperGrabButton->setMinimumSize(QSize(79, 28));
        gripperGrabButton->setMaximumSize(QSize(79, 25));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient36(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(255, 255, 255, 255));
        gradient36.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush49(gradient36);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush49);
        palette32.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette32.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette32.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette32.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient37(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(255, 255, 255, 255));
        gradient37.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush50(gradient37);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush50);
        QRadialGradient gradient38(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(255, 255, 255, 255));
        gradient38.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush51(gradient38);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush51);
        palette32.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette32.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette32.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient39(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(255, 255, 255, 255));
        gradient39.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush52(gradient39);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush52);
        palette32.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette32.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient40(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(255, 255, 255, 255));
        gradient40.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush53(gradient40);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush53);
        QRadialGradient gradient41(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(255, 255, 255, 255));
        gradient41.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush54(gradient41);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush54);
        palette32.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette32.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient42(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(255, 255, 255, 255));
        gradient42.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush55(gradient42);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush55);
        palette32.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette32.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient43(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(255, 255, 255, 255));
        gradient43.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush56(gradient43);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush56);
        QRadialGradient gradient44(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(255, 255, 255, 255));
        gradient44.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush57(gradient44);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush57);
        palette32.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette32.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        gripperGrabButton->setPalette(palette32);
        gripperGrabButton->setFont(font14);
        gripperGrabButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        verticalLayout_3->addWidget(gripperGrabButton);

        gripperStopButton = new QPushButton(layoutWidget4);
        gripperStopButton->setObjectName(QString::fromUtf8("gripperStopButton"));
        gripperStopButton->setMinimumSize(QSize(79, 28));
        gripperStopButton->setMaximumSize(QSize(76, 25));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Active, QPalette::Light, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Midlight, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Dark, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette33.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette33.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette33.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette33.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Midlight, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Dark, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette33.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Midlight, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Dark, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette33.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        gripperStopButton->setPalette(palette33);
        gripperStopButton->setFont(font13);
        gripperStopButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,0,0);\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: black;\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: rgb(255,0,0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color:  rgb(255,0,0);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        verticalLayout_3->addWidget(gripperStopButton);

        gripperReleaseButton = new QPushButton(layoutWidget4);
        gripperReleaseButton->setObjectName(QString::fromUtf8("gripperReleaseButton"));
        gripperReleaseButton->setMinimumSize(QSize(79, 28));
        gripperReleaseButton->setMaximumSize(QSize(79, 25));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient45(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(255, 255, 255, 255));
        gradient45.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush58(gradient45);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush58);
        palette34.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette34.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette34.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette34.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette34.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient46(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(0, QColor(255, 255, 255, 255));
        gradient46.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush59(gradient46);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush59);
        QRadialGradient gradient47(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(0, QColor(255, 255, 255, 255));
        gradient47.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush60(gradient47);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush60);
        palette34.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette34.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette34.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient48(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(255, 255, 255, 255));
        gradient48.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush61(gradient48);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush61);
        palette34.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette34.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient49(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(0, QColor(255, 255, 255, 255));
        gradient49.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush62(gradient49);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush62);
        QRadialGradient gradient50(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(255, 255, 255, 255));
        gradient50.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush63(gradient50);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush63);
        palette34.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette34.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient51(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(255, 255, 255, 255));
        gradient51.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush64(gradient51);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush64);
        palette34.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette34.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient52(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(0, QColor(255, 255, 255, 255));
        gradient52.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush65(gradient52);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush65);
        QRadialGradient gradient53(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(0, QColor(255, 255, 255, 255));
        gradient53.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush66(gradient53);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush66);
        palette34.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette34.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        gripperReleaseButton->setPalette(palette34);
        gripperReleaseButton->setFont(font14);
        gripperReleaseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        verticalLayout_3->addWidget(gripperReleaseButton);


        horizontalLayout_5->addWidget(widget1);

        frame_2->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        forceStopPushButton->raise();

        horizontalLayout_28->addWidget(widget);

        line_2 = new QFrame(layoutWidget_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFont(font14);
        line_2->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(3);
        line_2->setMidLineWidth(0);
        line_2->setFrameShape(QFrame::VLine);

        horizontalLayout_28->addWidget(line_2);


        horizontalLayout_29->addLayout(horizontalLayout_28);

        armControlFrame = new QFrame(layoutWidget_2);
        armControlFrame->setObjectName(QString::fromUtf8("armControlFrame"));
        armControlFrame->setEnabled(true);
        armControlFrame->setMinimumSize(QSize(309, 220));
        armControlFrame->setMaximumSize(QSize(309, 215));
        armControlFrame->setAutoFillBackground(false);
        armControlFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        armControlFrame->setFrameShape(QFrame::Box);
        armControlFrame->setFrameShadow(QFrame::Raised);
        armControlFrame->setLineWidth(1);
        armControlLabel = new QLabel(armControlFrame);
        armControlLabel->setObjectName(QString::fromUtf8("armControlLabel"));
        armControlLabel->setGeometry(QRect(10, 5, 290, 28));
        armControlLabel->setMinimumSize(QSize(290, 28));
        armControlLabel->setMaximumSize(QSize(290, 28));
        armControlLabel->setFont(font13);
        armControlLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(40,0,140,255)\n"
""));
        armControlLabel->setFrameShape(QFrame::Box);
        armControlLabel->setLineWidth(2);
        armControlLabel->setAlignment(Qt::AlignCenter);
        line_15 = new QFrame(armControlFrame);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(10, 140, 291, 20));
        line_15->setStyleSheet(QString::fromUtf8("background: rgba(255,25,255,0);\n"
"color: black"));
        line_15->setFrameShadow(QFrame::Sunken);
        line_15->setLineWidth(1);
        line_15->setFrameShape(QFrame::HLine);
        frame_12 = new QFrame(armControlFrame);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(100, 150, 201, 74));
        frame_12->setStyleSheet(QString::fromUtf8("background: rgba()"));
        gridLayout_3 = new QGridLayout(frame_12);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_17 = new QSpacerItem(45, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_17, 0, 0, 1, 1);

        xForwardButton = new QPushButton(frame_12);
        xForwardButton->setObjectName(QString::fromUtf8("xForwardButton"));
        sizePolicy3.setHeightForWidth(xForwardButton->sizePolicy().hasHeightForWidth());
        xForwardButton->setSizePolicy(sizePolicy3);
        xForwardButton->setMinimumSize(QSize(43, 25));
        xForwardButton->setMaximumSize(QSize(45, 25));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient54(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient54.setSpread(QGradient::PadSpread);
        gradient54.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient54.setColorAt(0, QColor(255, 255, 255, 255));
        gradient54.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush67(gradient54);
        palette35.setBrush(QPalette::Active, QPalette::Button, brush67);
        QBrush brush68(QColor(0, 255, 0, 255));
        brush68.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::Light, brush68);
        QBrush brush69(QColor(0, 212, 0, 255));
        brush69.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        QBrush brush70(QColor(0, 85, 0, 255));
        brush70.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::Dark, brush70);
        QBrush brush71(QColor(0, 113, 0, 255));
        brush71.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette35.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette35.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient55(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient55.setSpread(QGradient::PadSpread);
        gradient55.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient55.setColorAt(0, QColor(255, 255, 255, 255));
        gradient55.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush72(gradient55);
        palette35.setBrush(QPalette::Active, QPalette::Base, brush72);
        QRadialGradient gradient56(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient56.setSpread(QGradient::PadSpread);
        gradient56.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient56.setColorAt(0, QColor(255, 255, 255, 255));
        gradient56.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush73(gradient56);
        palette35.setBrush(QPalette::Active, QPalette::Window, brush73);
        palette35.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        QBrush brush74(QColor(127, 212, 127, 255));
        brush74.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette35.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette35.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient57(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient57.setSpread(QGradient::PadSpread);
        gradient57.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient57.setColorAt(0, QColor(255, 255, 255, 255));
        gradient57.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush75(gradient57);
        palette35.setBrush(QPalette::Inactive, QPalette::Button, brush75);
        palette35.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette35.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette35.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette35.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette35.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette35.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient58(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient58.setSpread(QGradient::PadSpread);
        gradient58.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient58.setColorAt(0, QColor(255, 255, 255, 255));
        gradient58.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush76(gradient58);
        palette35.setBrush(QPalette::Inactive, QPalette::Base, brush76);
        QRadialGradient gradient59(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient59.setSpread(QGradient::PadSpread);
        gradient59.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient59.setColorAt(0, QColor(255, 255, 255, 255));
        gradient59.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush77(gradient59);
        palette35.setBrush(QPalette::Inactive, QPalette::Window, brush77);
        palette35.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette35.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette35.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette35.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient60(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient60.setSpread(QGradient::PadSpread);
        gradient60.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient60.setColorAt(0, QColor(255, 255, 255, 255));
        gradient60.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush78(gradient60);
        palette35.setBrush(QPalette::Disabled, QPalette::Button, brush78);
        palette35.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette35.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette35.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette35.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette35.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette35.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient61(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient61.setSpread(QGradient::PadSpread);
        gradient61.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient61.setColorAt(0, QColor(255, 255, 255, 255));
        gradient61.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush79(gradient61);
        palette35.setBrush(QPalette::Disabled, QPalette::Base, brush79);
        QRadialGradient gradient62(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient62.setSpread(QGradient::PadSpread);
        gradient62.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient62.setColorAt(0, QColor(255, 255, 255, 255));
        gradient62.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush80(gradient62);
        palette35.setBrush(QPalette::Disabled, QPalette::Window, brush80);
        palette35.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        QBrush brush81(QColor(0, 170, 0, 255));
        brush81.setStyle(Qt::SolidPattern);
        palette35.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette35.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        xForwardButton->setPalette(palette35);
        xForwardButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(xForwardButton, 0, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(45, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_18, 0, 2, 1, 1);

        zUpButton = new QPushButton(frame_12);
        zUpButton->setObjectName(QString::fromUtf8("zUpButton"));
        sizePolicy3.setHeightForWidth(zUpButton->sizePolicy().hasHeightForWidth());
        zUpButton->setSizePolicy(sizePolicy3);
        zUpButton->setMinimumSize(QSize(43, 25));
        zUpButton->setMaximumSize(QSize(45, 25));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient63(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient63.setSpread(QGradient::PadSpread);
        gradient63.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient63.setColorAt(0, QColor(255, 255, 255, 255));
        gradient63.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush82(gradient63);
        palette36.setBrush(QPalette::Active, QPalette::Button, brush82);
        palette36.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette36.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette36.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette36.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette36.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette36.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient64(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient64.setSpread(QGradient::PadSpread);
        gradient64.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient64.setColorAt(0, QColor(255, 255, 255, 255));
        gradient64.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush83(gradient64);
        palette36.setBrush(QPalette::Active, QPalette::Base, brush83);
        QRadialGradient gradient65(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient65.setSpread(QGradient::PadSpread);
        gradient65.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient65.setColorAt(0, QColor(255, 255, 255, 255));
        gradient65.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush84(gradient65);
        palette36.setBrush(QPalette::Active, QPalette::Window, brush84);
        palette36.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette36.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette36.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette36.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient66(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient66.setSpread(QGradient::PadSpread);
        gradient66.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient66.setColorAt(0, QColor(255, 255, 255, 255));
        gradient66.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush85(gradient66);
        palette36.setBrush(QPalette::Inactive, QPalette::Button, brush85);
        palette36.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette36.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette36.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette36.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette36.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette36.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient67(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient67.setSpread(QGradient::PadSpread);
        gradient67.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient67.setColorAt(0, QColor(255, 255, 255, 255));
        gradient67.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush86(gradient67);
        palette36.setBrush(QPalette::Inactive, QPalette::Base, brush86);
        QRadialGradient gradient68(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient68.setSpread(QGradient::PadSpread);
        gradient68.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient68.setColorAt(0, QColor(255, 255, 255, 255));
        gradient68.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush87(gradient68);
        palette36.setBrush(QPalette::Inactive, QPalette::Window, brush87);
        palette36.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette36.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette36.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette36.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient69(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient69.setSpread(QGradient::PadSpread);
        gradient69.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient69.setColorAt(0, QColor(255, 255, 255, 255));
        gradient69.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush88(gradient69);
        palette36.setBrush(QPalette::Disabled, QPalette::Button, brush88);
        palette36.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette36.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette36.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette36.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette36.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette36.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient70(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient70.setSpread(QGradient::PadSpread);
        gradient70.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient70.setColorAt(0, QColor(255, 255, 255, 255));
        gradient70.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush89(gradient70);
        palette36.setBrush(QPalette::Disabled, QPalette::Base, brush89);
        QRadialGradient gradient71(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient71.setSpread(QGradient::PadSpread);
        gradient71.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient71.setColorAt(0, QColor(255, 255, 255, 255));
        gradient71.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush90(gradient71);
        palette36.setBrush(QPalette::Disabled, QPalette::Window, brush90);
        palette36.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette36.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette36.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        zUpButton->setPalette(palette36);
        zUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(zUpButton, 0, 3, 1, 1);

        yLeftButton = new QPushButton(frame_12);
        yLeftButton->setObjectName(QString::fromUtf8("yLeftButton"));
        sizePolicy3.setHeightForWidth(yLeftButton->sizePolicy().hasHeightForWidth());
        yLeftButton->setSizePolicy(sizePolicy3);
        yLeftButton->setMinimumSize(QSize(43, 25));
        yLeftButton->setMaximumSize(QSize(45, 25));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient72(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient72.setSpread(QGradient::PadSpread);
        gradient72.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient72.setColorAt(0, QColor(255, 255, 255, 255));
        gradient72.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush91(gradient72);
        palette37.setBrush(QPalette::Active, QPalette::Button, brush91);
        palette37.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette37.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette37.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette37.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette37.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette37.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient73(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient73.setSpread(QGradient::PadSpread);
        gradient73.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient73.setColorAt(0, QColor(255, 255, 255, 255));
        gradient73.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush92(gradient73);
        palette37.setBrush(QPalette::Active, QPalette::Base, brush92);
        QRadialGradient gradient74(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient74.setSpread(QGradient::PadSpread);
        gradient74.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient74.setColorAt(0, QColor(255, 255, 255, 255));
        gradient74.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush93(gradient74);
        palette37.setBrush(QPalette::Active, QPalette::Window, brush93);
        palette37.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette37.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette37.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette37.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient75(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient75.setSpread(QGradient::PadSpread);
        gradient75.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient75.setColorAt(0, QColor(255, 255, 255, 255));
        gradient75.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush94(gradient75);
        palette37.setBrush(QPalette::Inactive, QPalette::Button, brush94);
        palette37.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette37.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette37.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette37.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette37.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette37.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient76(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient76.setSpread(QGradient::PadSpread);
        gradient76.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient76.setColorAt(0, QColor(255, 255, 255, 255));
        gradient76.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush95(gradient76);
        palette37.setBrush(QPalette::Inactive, QPalette::Base, brush95);
        QRadialGradient gradient77(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient77.setSpread(QGradient::PadSpread);
        gradient77.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient77.setColorAt(0, QColor(255, 255, 255, 255));
        gradient77.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush96(gradient77);
        palette37.setBrush(QPalette::Inactive, QPalette::Window, brush96);
        palette37.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette37.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette37.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette37.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient78(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient78.setSpread(QGradient::PadSpread);
        gradient78.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient78.setColorAt(0, QColor(255, 255, 255, 255));
        gradient78.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush97(gradient78);
        palette37.setBrush(QPalette::Disabled, QPalette::Button, brush97);
        palette37.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette37.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette37.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette37.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette37.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette37.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient79(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient79.setSpread(QGradient::PadSpread);
        gradient79.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient79.setColorAt(0, QColor(255, 255, 255, 255));
        gradient79.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush98(gradient79);
        palette37.setBrush(QPalette::Disabled, QPalette::Base, brush98);
        QRadialGradient gradient80(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient80.setSpread(QGradient::PadSpread);
        gradient80.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient80.setColorAt(0, QColor(255, 255, 255, 255));
        gradient80.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush99(gradient80);
        palette37.setBrush(QPalette::Disabled, QPalette::Window, brush99);
        palette37.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette37.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette37.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        yLeftButton->setPalette(palette37);
        yLeftButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(yLeftButton, 1, 0, 1, 1);

        xBackwardButton = new QPushButton(frame_12);
        xBackwardButton->setObjectName(QString::fromUtf8("xBackwardButton"));
        sizePolicy3.setHeightForWidth(xBackwardButton->sizePolicy().hasHeightForWidth());
        xBackwardButton->setSizePolicy(sizePolicy3);
        xBackwardButton->setMinimumSize(QSize(43, 25));
        xBackwardButton->setMaximumSize(QSize(45, 25));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient81(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient81.setSpread(QGradient::PadSpread);
        gradient81.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient81.setColorAt(0, QColor(255, 255, 255, 255));
        gradient81.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush100(gradient81);
        palette38.setBrush(QPalette::Active, QPalette::Button, brush100);
        palette38.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette38.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette38.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette38.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette38.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette38.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient82(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient82.setSpread(QGradient::PadSpread);
        gradient82.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient82.setColorAt(0, QColor(255, 255, 255, 255));
        gradient82.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush101(gradient82);
        palette38.setBrush(QPalette::Active, QPalette::Base, brush101);
        QRadialGradient gradient83(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient83.setSpread(QGradient::PadSpread);
        gradient83.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient83.setColorAt(0, QColor(255, 255, 255, 255));
        gradient83.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush102(gradient83);
        palette38.setBrush(QPalette::Active, QPalette::Window, brush102);
        palette38.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette38.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette38.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette38.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient84(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient84.setSpread(QGradient::PadSpread);
        gradient84.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient84.setColorAt(0, QColor(255, 255, 255, 255));
        gradient84.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush103(gradient84);
        palette38.setBrush(QPalette::Inactive, QPalette::Button, brush103);
        palette38.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette38.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette38.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette38.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette38.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette38.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient85(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient85.setSpread(QGradient::PadSpread);
        gradient85.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient85.setColorAt(0, QColor(255, 255, 255, 255));
        gradient85.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush104(gradient85);
        palette38.setBrush(QPalette::Inactive, QPalette::Base, brush104);
        QRadialGradient gradient86(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient86.setSpread(QGradient::PadSpread);
        gradient86.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient86.setColorAt(0, QColor(255, 255, 255, 255));
        gradient86.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush105(gradient86);
        palette38.setBrush(QPalette::Inactive, QPalette::Window, brush105);
        palette38.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette38.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette38.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette38.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient87(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient87.setSpread(QGradient::PadSpread);
        gradient87.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient87.setColorAt(0, QColor(255, 255, 255, 255));
        gradient87.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush106(gradient87);
        palette38.setBrush(QPalette::Disabled, QPalette::Button, brush106);
        palette38.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette38.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette38.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette38.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette38.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette38.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient88(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient88.setSpread(QGradient::PadSpread);
        gradient88.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient88.setColorAt(0, QColor(255, 255, 255, 255));
        gradient88.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush107(gradient88);
        palette38.setBrush(QPalette::Disabled, QPalette::Base, brush107);
        QRadialGradient gradient89(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient89.setSpread(QGradient::PadSpread);
        gradient89.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient89.setColorAt(0, QColor(255, 255, 255, 255));
        gradient89.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush108(gradient89);
        palette38.setBrush(QPalette::Disabled, QPalette::Window, brush108);
        palette38.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette38.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette38.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        xBackwardButton->setPalette(palette38);
        xBackwardButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(xBackwardButton, 1, 1, 1, 1);

        yRightButton = new QPushButton(frame_12);
        yRightButton->setObjectName(QString::fromUtf8("yRightButton"));
        sizePolicy3.setHeightForWidth(yRightButton->sizePolicy().hasHeightForWidth());
        yRightButton->setSizePolicy(sizePolicy3);
        yRightButton->setMinimumSize(QSize(43, 25));
        yRightButton->setMaximumSize(QSize(45, 25));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient90(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient90.setSpread(QGradient::PadSpread);
        gradient90.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient90.setColorAt(0, QColor(255, 255, 255, 255));
        gradient90.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush109(gradient90);
        palette39.setBrush(QPalette::Active, QPalette::Button, brush109);
        palette39.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette39.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette39.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette39.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette39.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette39.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient91(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient91.setSpread(QGradient::PadSpread);
        gradient91.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient91.setColorAt(0, QColor(255, 255, 255, 255));
        gradient91.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush110(gradient91);
        palette39.setBrush(QPalette::Active, QPalette::Base, brush110);
        QRadialGradient gradient92(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient92.setSpread(QGradient::PadSpread);
        gradient92.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient92.setColorAt(0, QColor(255, 255, 255, 255));
        gradient92.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush111(gradient92);
        palette39.setBrush(QPalette::Active, QPalette::Window, brush111);
        palette39.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette39.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette39.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette39.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient93(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient93.setSpread(QGradient::PadSpread);
        gradient93.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient93.setColorAt(0, QColor(255, 255, 255, 255));
        gradient93.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush112(gradient93);
        palette39.setBrush(QPalette::Inactive, QPalette::Button, brush112);
        palette39.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette39.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette39.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette39.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette39.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette39.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient94(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient94.setSpread(QGradient::PadSpread);
        gradient94.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient94.setColorAt(0, QColor(255, 255, 255, 255));
        gradient94.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush113(gradient94);
        palette39.setBrush(QPalette::Inactive, QPalette::Base, brush113);
        QRadialGradient gradient95(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient95.setSpread(QGradient::PadSpread);
        gradient95.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient95.setColorAt(0, QColor(255, 255, 255, 255));
        gradient95.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush114(gradient95);
        palette39.setBrush(QPalette::Inactive, QPalette::Window, brush114);
        palette39.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette39.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette39.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette39.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient96(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient96.setSpread(QGradient::PadSpread);
        gradient96.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient96.setColorAt(0, QColor(255, 255, 255, 255));
        gradient96.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush115(gradient96);
        palette39.setBrush(QPalette::Disabled, QPalette::Button, brush115);
        palette39.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette39.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette39.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette39.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette39.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette39.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient97(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient97.setSpread(QGradient::PadSpread);
        gradient97.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient97.setColorAt(0, QColor(255, 255, 255, 255));
        gradient97.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush116(gradient97);
        palette39.setBrush(QPalette::Disabled, QPalette::Base, brush116);
        QRadialGradient gradient98(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient98.setSpread(QGradient::PadSpread);
        gradient98.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient98.setColorAt(0, QColor(255, 255, 255, 255));
        gradient98.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush117(gradient98);
        palette39.setBrush(QPalette::Disabled, QPalette::Window, brush117);
        palette39.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette39.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette39.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        yRightButton->setPalette(palette39);
        yRightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(yRightButton, 1, 2, 1, 1);

        zDownButton = new QPushButton(frame_12);
        zDownButton->setObjectName(QString::fromUtf8("zDownButton"));
        sizePolicy3.setHeightForWidth(zDownButton->sizePolicy().hasHeightForWidth());
        zDownButton->setSizePolicy(sizePolicy3);
        zDownButton->setMinimumSize(QSize(43, 25));
        zDownButton->setMaximumSize(QSize(45, 25));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient99(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient99.setSpread(QGradient::PadSpread);
        gradient99.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient99.setColorAt(0, QColor(255, 255, 255, 255));
        gradient99.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush118(gradient99);
        palette40.setBrush(QPalette::Active, QPalette::Button, brush118);
        palette40.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette40.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette40.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette40.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette40.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette40.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient100(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient100.setSpread(QGradient::PadSpread);
        gradient100.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient100.setColorAt(0, QColor(255, 255, 255, 255));
        gradient100.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush119(gradient100);
        palette40.setBrush(QPalette::Active, QPalette::Base, brush119);
        QRadialGradient gradient101(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient101.setSpread(QGradient::PadSpread);
        gradient101.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient101.setColorAt(0, QColor(255, 255, 255, 255));
        gradient101.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush120(gradient101);
        palette40.setBrush(QPalette::Active, QPalette::Window, brush120);
        palette40.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette40.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette40.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette40.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient102(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient102.setSpread(QGradient::PadSpread);
        gradient102.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient102.setColorAt(0, QColor(255, 255, 255, 255));
        gradient102.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush121(gradient102);
        palette40.setBrush(QPalette::Inactive, QPalette::Button, brush121);
        palette40.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette40.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette40.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette40.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette40.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette40.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient103(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient103.setSpread(QGradient::PadSpread);
        gradient103.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient103.setColorAt(0, QColor(255, 255, 255, 255));
        gradient103.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush122(gradient103);
        palette40.setBrush(QPalette::Inactive, QPalette::Base, brush122);
        QRadialGradient gradient104(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient104.setSpread(QGradient::PadSpread);
        gradient104.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient104.setColorAt(0, QColor(255, 255, 255, 255));
        gradient104.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush123(gradient104);
        palette40.setBrush(QPalette::Inactive, QPalette::Window, brush123);
        palette40.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette40.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette40.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient105(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient105.setSpread(QGradient::PadSpread);
        gradient105.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient105.setColorAt(0, QColor(255, 255, 255, 255));
        gradient105.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush124(gradient105);
        palette40.setBrush(QPalette::Disabled, QPalette::Button, brush124);
        palette40.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette40.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette40.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette40.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette40.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette40.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient106(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient106.setSpread(QGradient::PadSpread);
        gradient106.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient106.setColorAt(0, QColor(255, 255, 255, 255));
        gradient106.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush125(gradient106);
        palette40.setBrush(QPalette::Disabled, QPalette::Base, brush125);
        QRadialGradient gradient107(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient107.setSpread(QGradient::PadSpread);
        gradient107.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient107.setColorAt(0, QColor(255, 255, 255, 255));
        gradient107.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush126(gradient107);
        palette40.setBrush(QPalette::Disabled, QPalette::Window, brush126);
        palette40.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette40.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette40.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        zDownButton->setPalette(palette40);
        zDownButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 29px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_3->addWidget(zDownButton, 1, 3, 1, 1);

        layoutWidget_13 = new QWidget(armControlFrame);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(10, 160, 84, 55));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_13);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        xyzStepLabel = new QLabel(layoutWidget_13);
        xyzStepLabel->setObjectName(QString::fromUtf8("xyzStepLabel"));
        xyzStepLabel->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        xyzStepLabel->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(xyzStepLabel);

        xyzStepDoubleSpinBox = new QDoubleSpinBox(layoutWidget_13);
        xyzStepDoubleSpinBox->setObjectName(QString::fromUtf8("xyzStepDoubleSpinBox"));
        xyzStepDoubleSpinBox->setAlignment(Qt::AlignCenter);
        xyzStepDoubleSpinBox->setDecimals(0);
        xyzStepDoubleSpinBox->setMinimum(1);
        xyzStepDoubleSpinBox->setSingleStep(5);
        xyzStepDoubleSpinBox->setValue(15);

        verticalLayout_2->addWidget(xyzStepDoubleSpinBox);

        layoutWidget_3 = new QWidget(armControlFrame);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 40, 309, 104));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_10 = new QFrame(layoutWidget_3);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(191, 102));
        frame_10->setMaximumSize(QSize(191, 102));
        frame_10->setStyleSheet(QString::fromUtf8("background: rgba()"));
        horizontalLayout_31 = new QHBoxLayout(frame_10);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(5);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        verticalSpacer_10 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_10);

        parkArmButton = new QPushButton(frame_10);
        parkArmButton->setObjectName(QString::fromUtf8("parkArmButton"));
        parkArmButton->setMinimumSize(QSize(79, 25));
        parkArmButton->setMaximumSize(QSize(70, 16777215));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::WindowText, brush68);
        palette41.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette41.setBrush(QPalette::Active, QPalette::Light, brush81);
        palette41.setBrush(QPalette::Active, QPalette::Midlight, brush81);
        palette41.setBrush(QPalette::Active, QPalette::Dark, brush81);
        palette41.setBrush(QPalette::Active, QPalette::Mid, brush81);
        palette41.setBrush(QPalette::Active, QPalette::Text, brush68);
        palette41.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush68);
        palette41.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette41.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette41.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette41.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette41.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::WindowText, brush68);
        palette41.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Light, brush81);
        palette41.setBrush(QPalette::Inactive, QPalette::Midlight, brush81);
        palette41.setBrush(QPalette::Inactive, QPalette::Dark, brush81);
        palette41.setBrush(QPalette::Inactive, QPalette::Mid, brush81);
        palette41.setBrush(QPalette::Inactive, QPalette::Text, brush68);
        palette41.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush68);
        palette41.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette41.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette41.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::WindowText, brush68);
        palette41.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Light, brush81);
        palette41.setBrush(QPalette::Disabled, QPalette::Midlight, brush81);
        palette41.setBrush(QPalette::Disabled, QPalette::Dark, brush81);
        palette41.setBrush(QPalette::Disabled, QPalette::Mid, brush81);
        palette41.setBrush(QPalette::Disabled, QPalette::Text, brush68);
        palette41.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush68);
        palette41.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette41.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette41.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        parkArmButton->setPalette(palette41);
        parkArmButton->setFont(font13);
        parkArmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(0,255,0);\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: black;\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: black;\n"
"background: rgb(0,255,0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color:  rgb(0,255,0);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        verticalLayout_20->addWidget(parkArmButton);

        verticalSpacer_9 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_20->addItem(verticalSpacer_9);

        angleStepLabel = new QLabel(frame_10);
        angleStepLabel->setObjectName(QString::fromUtf8("angleStepLabel"));
        angleStepLabel->setMinimumSize(QSize(70, 0));
        angleStepLabel->setMaximumSize(QSize(70, 16777215));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette42.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette42.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette42.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette42.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette42.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette42.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette42.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette42.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette42.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette42.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette42.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        angleStepLabel->setPalette(palette42);
        angleStepLabel->setStyleSheet(QString::fromUtf8("background: rgba(80,80,80,215)"));
        angleStepLabel->setFrameShape(QFrame::Box);
        angleStepLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(angleStepLabel);

        angleStepDoubleSpinBox = new QDoubleSpinBox(frame_10);
        angleStepDoubleSpinBox->setObjectName(QString::fromUtf8("angleStepDoubleSpinBox"));
        angleStepDoubleSpinBox->setMinimumSize(QSize(70, 21));
        angleStepDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        angleStepDoubleSpinBox->setAlignment(Qt::AlignCenter);
        angleStepDoubleSpinBox->setDecimals(0);
        angleStepDoubleSpinBox->setMinimum(1);
        angleStepDoubleSpinBox->setMaximum(45);
        angleStepDoubleSpinBox->setSingleStep(5);
        angleStepDoubleSpinBox->setValue(20);

        verticalLayout_20->addWidget(angleStepDoubleSpinBox);


        horizontalLayout_31->addLayout(verticalLayout_20);

        anglesControlGridLayout = new QGridLayout();
        anglesControlGridLayout->setObjectName(QString::fromUtf8("anglesControlGridLayout"));
        anglesControlGridLayout->setSizeConstraint(QLayout::SetFixedSize);
        anglesControlGridLayout->setVerticalSpacing(0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_20 = new QSpacerItem(25, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_20);

        bUpButton = new QPushButton(frame_10);
        bUpButton->setObjectName(QString::fromUtf8("bUpButton"));
        sizePolicy3.setHeightForWidth(bUpButton->sizePolicy().hasHeightForWidth());
        bUpButton->setSizePolicy(sizePolicy3);
        bUpButton->setMinimumSize(QSize(30, 27));
        bUpButton->setMaximumSize(QSize(25, 27));
        QPalette palette43;
        palette43.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient108(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient108.setSpread(QGradient::PadSpread);
        gradient108.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient108.setColorAt(0, QColor(255, 255, 255, 255));
        gradient108.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush127(gradient108);
        palette43.setBrush(QPalette::Active, QPalette::Button, brush127);
        palette43.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette43.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette43.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette43.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette43.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette43.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient109(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient109.setSpread(QGradient::PadSpread);
        gradient109.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient109.setColorAt(0, QColor(255, 255, 255, 255));
        gradient109.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush128(gradient109);
        palette43.setBrush(QPalette::Active, QPalette::Base, brush128);
        QRadialGradient gradient110(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient110.setSpread(QGradient::PadSpread);
        gradient110.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient110.setColorAt(0, QColor(255, 255, 255, 255));
        gradient110.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush129(gradient110);
        palette43.setBrush(QPalette::Active, QPalette::Window, brush129);
        palette43.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette43.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette43.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette43.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient111(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient111.setSpread(QGradient::PadSpread);
        gradient111.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient111.setColorAt(0, QColor(255, 255, 255, 255));
        gradient111.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush130(gradient111);
        palette43.setBrush(QPalette::Inactive, QPalette::Button, brush130);
        palette43.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette43.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette43.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette43.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette43.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette43.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient112(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient112.setSpread(QGradient::PadSpread);
        gradient112.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient112.setColorAt(0, QColor(255, 255, 255, 255));
        gradient112.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush131(gradient112);
        palette43.setBrush(QPalette::Inactive, QPalette::Base, brush131);
        QRadialGradient gradient113(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient113.setSpread(QGradient::PadSpread);
        gradient113.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient113.setColorAt(0, QColor(255, 255, 255, 255));
        gradient113.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush132(gradient113);
        palette43.setBrush(QPalette::Inactive, QPalette::Window, brush132);
        palette43.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette43.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette43.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient114(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient114.setSpread(QGradient::PadSpread);
        gradient114.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient114.setColorAt(0, QColor(255, 255, 255, 255));
        gradient114.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush133(gradient114);
        palette43.setBrush(QPalette::Disabled, QPalette::Button, brush133);
        palette43.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette43.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette43.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette43.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette43.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette43.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient115(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient115.setSpread(QGradient::PadSpread);
        gradient115.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient115.setColorAt(0, QColor(255, 255, 255, 255));
        gradient115.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush134(gradient115);
        palette43.setBrush(QPalette::Disabled, QPalette::Base, brush134);
        QRadialGradient gradient116(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient116.setSpread(QGradient::PadSpread);
        gradient116.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient116.setColorAt(0, QColor(255, 255, 255, 255));
        gradient116.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush135(gradient116);
        palette43.setBrush(QPalette::Disabled, QPalette::Window, brush135);
        palette43.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette43.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        bUpButton->setPalette(palette43);
        bUpButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_2->addWidget(bUpButton);

        horizontalSpacer_21 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_21);


        anglesControlGridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        aLeftButton = new QPushButton(frame_10);
        aLeftButton->setObjectName(QString::fromUtf8("aLeftButton"));
        sizePolicy3.setHeightForWidth(aLeftButton->sizePolicy().hasHeightForWidth());
        aLeftButton->setSizePolicy(sizePolicy3);
        aLeftButton->setMinimumSize(QSize(30, 27));
        aLeftButton->setMaximumSize(QSize(25, 27));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient117(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient117.setSpread(QGradient::PadSpread);
        gradient117.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient117.setColorAt(0, QColor(255, 255, 255, 255));
        gradient117.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush136(gradient117);
        palette44.setBrush(QPalette::Active, QPalette::Button, brush136);
        palette44.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette44.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette44.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette44.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette44.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette44.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient118(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient118.setSpread(QGradient::PadSpread);
        gradient118.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient118.setColorAt(0, QColor(255, 255, 255, 255));
        gradient118.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush137(gradient118);
        palette44.setBrush(QPalette::Active, QPalette::Base, brush137);
        QRadialGradient gradient119(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient119.setSpread(QGradient::PadSpread);
        gradient119.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient119.setColorAt(0, QColor(255, 255, 255, 255));
        gradient119.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush138(gradient119);
        palette44.setBrush(QPalette::Active, QPalette::Window, brush138);
        palette44.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette44.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette44.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette44.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient120(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient120.setSpread(QGradient::PadSpread);
        gradient120.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient120.setColorAt(0, QColor(255, 255, 255, 255));
        gradient120.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush139(gradient120);
        palette44.setBrush(QPalette::Inactive, QPalette::Button, brush139);
        palette44.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette44.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette44.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette44.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette44.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette44.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient121(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient121.setSpread(QGradient::PadSpread);
        gradient121.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient121.setColorAt(0, QColor(255, 255, 255, 255));
        gradient121.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush140(gradient121);
        palette44.setBrush(QPalette::Inactive, QPalette::Base, brush140);
        QRadialGradient gradient122(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient122.setSpread(QGradient::PadSpread);
        gradient122.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient122.setColorAt(0, QColor(255, 255, 255, 255));
        gradient122.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush141(gradient122);
        palette44.setBrush(QPalette::Inactive, QPalette::Window, brush141);
        palette44.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette44.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette44.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette44.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient123(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient123.setSpread(QGradient::PadSpread);
        gradient123.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient123.setColorAt(0, QColor(255, 255, 255, 255));
        gradient123.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush142(gradient123);
        palette44.setBrush(QPalette::Disabled, QPalette::Button, brush142);
        palette44.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette44.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette44.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette44.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette44.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette44.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient124(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient124.setSpread(QGradient::PadSpread);
        gradient124.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient124.setColorAt(0, QColor(255, 255, 255, 255));
        gradient124.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush143(gradient124);
        palette44.setBrush(QPalette::Disabled, QPalette::Base, brush143);
        QRadialGradient gradient125(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient125.setSpread(QGradient::PadSpread);
        gradient125.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient125.setColorAt(0, QColor(255, 255, 255, 255));
        gradient125.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush144(gradient125);
        palette44.setBrush(QPalette::Disabled, QPalette::Window, brush144);
        palette44.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette44.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette44.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        aLeftButton->setPalette(palette44);
        aLeftButton->setAutoFillBackground(false);
        aLeftButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout->addWidget(aLeftButton);

        resetAngleAButton = new QPushButton(frame_10);
        resetAngleAButton->setObjectName(QString::fromUtf8("resetAngleAButton"));
        sizePolicy3.setHeightForWidth(resetAngleAButton->sizePolicy().hasHeightForWidth());
        resetAngleAButton->setSizePolicy(sizePolicy3);
        resetAngleAButton->setMinimumSize(QSize(30, 27));
        resetAngleAButton->setMaximumSize(QSize(25, 27));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient126(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient126.setSpread(QGradient::PadSpread);
        gradient126.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient126.setColorAt(0, QColor(255, 255, 255, 255));
        gradient126.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush145(gradient126);
        palette45.setBrush(QPalette::Active, QPalette::Button, brush145);
        palette45.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette45.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette45.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette45.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette45.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette45.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient127(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient127.setSpread(QGradient::PadSpread);
        gradient127.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient127.setColorAt(0, QColor(255, 255, 255, 255));
        gradient127.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush146(gradient127);
        palette45.setBrush(QPalette::Active, QPalette::Base, brush146);
        QRadialGradient gradient128(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient128.setSpread(QGradient::PadSpread);
        gradient128.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient128.setColorAt(0, QColor(255, 255, 255, 255));
        gradient128.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush147(gradient128);
        palette45.setBrush(QPalette::Active, QPalette::Window, brush147);
        palette45.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette45.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette45.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient129(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient129.setSpread(QGradient::PadSpread);
        gradient129.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient129.setColorAt(0, QColor(255, 255, 255, 255));
        gradient129.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush148(gradient129);
        palette45.setBrush(QPalette::Inactive, QPalette::Button, brush148);
        palette45.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette45.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette45.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette45.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette45.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette45.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient130(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient130.setSpread(QGradient::PadSpread);
        gradient130.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient130.setColorAt(0, QColor(255, 255, 255, 255));
        gradient130.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush149(gradient130);
        palette45.setBrush(QPalette::Inactive, QPalette::Base, brush149);
        QRadialGradient gradient131(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient131.setSpread(QGradient::PadSpread);
        gradient131.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient131.setColorAt(0, QColor(255, 255, 255, 255));
        gradient131.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush150(gradient131);
        palette45.setBrush(QPalette::Inactive, QPalette::Window, brush150);
        palette45.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette45.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient132(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient132.setSpread(QGradient::PadSpread);
        gradient132.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient132.setColorAt(0, QColor(255, 255, 255, 255));
        gradient132.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush151(gradient132);
        palette45.setBrush(QPalette::Disabled, QPalette::Button, brush151);
        palette45.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette45.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette45.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette45.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette45.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette45.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient133(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient133.setSpread(QGradient::PadSpread);
        gradient133.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient133.setColorAt(0, QColor(255, 255, 255, 255));
        gradient133.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush152(gradient133);
        palette45.setBrush(QPalette::Disabled, QPalette::Base, brush152);
        QRadialGradient gradient134(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient134.setSpread(QGradient::PadSpread);
        gradient134.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient134.setColorAt(0, QColor(255, 255, 255, 255));
        gradient134.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush153(gradient134);
        palette45.setBrush(QPalette::Disabled, QPalette::Window, brush153);
        palette45.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette45.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        resetAngleAButton->setPalette(palette45);
        resetAngleAButton->setFont(font13);
        resetAngleAButton->setAutoFillBackground(false);
        resetAngleAButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout->addWidget(resetAngleAButton);

        aRightButton = new QPushButton(frame_10);
        aRightButton->setObjectName(QString::fromUtf8("aRightButton"));
        sizePolicy3.setHeightForWidth(aRightButton->sizePolicy().hasHeightForWidth());
        aRightButton->setSizePolicy(sizePolicy3);
        aRightButton->setMinimumSize(QSize(30, 27));
        aRightButton->setMaximumSize(QSize(25, 27));
        QPalette palette46;
        palette46.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient135(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient135.setSpread(QGradient::PadSpread);
        gradient135.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient135.setColorAt(0, QColor(255, 255, 255, 255));
        gradient135.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush154(gradient135);
        palette46.setBrush(QPalette::Active, QPalette::Button, brush154);
        palette46.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette46.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette46.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette46.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette46.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette46.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient136(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient136.setSpread(QGradient::PadSpread);
        gradient136.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient136.setColorAt(0, QColor(255, 255, 255, 255));
        gradient136.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush155(gradient136);
        palette46.setBrush(QPalette::Active, QPalette::Base, brush155);
        QRadialGradient gradient137(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient137.setSpread(QGradient::PadSpread);
        gradient137.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient137.setColorAt(0, QColor(255, 255, 255, 255));
        gradient137.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush156(gradient137);
        palette46.setBrush(QPalette::Active, QPalette::Window, brush156);
        palette46.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette46.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette46.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette46.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient138(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient138.setSpread(QGradient::PadSpread);
        gradient138.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient138.setColorAt(0, QColor(255, 255, 255, 255));
        gradient138.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush157(gradient138);
        palette46.setBrush(QPalette::Inactive, QPalette::Button, brush157);
        palette46.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette46.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette46.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette46.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette46.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette46.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient139(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient139.setSpread(QGradient::PadSpread);
        gradient139.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient139.setColorAt(0, QColor(255, 255, 255, 255));
        gradient139.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush158(gradient139);
        palette46.setBrush(QPalette::Inactive, QPalette::Base, brush158);
        QRadialGradient gradient140(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient140.setSpread(QGradient::PadSpread);
        gradient140.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient140.setColorAt(0, QColor(255, 255, 255, 255));
        gradient140.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush159(gradient140);
        palette46.setBrush(QPalette::Inactive, QPalette::Window, brush159);
        palette46.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette46.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette46.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette46.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient141(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient141.setSpread(QGradient::PadSpread);
        gradient141.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient141.setColorAt(0, QColor(255, 255, 255, 255));
        gradient141.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush160(gradient141);
        palette46.setBrush(QPalette::Disabled, QPalette::Button, brush160);
        palette46.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette46.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette46.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette46.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette46.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette46.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient142(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient142.setSpread(QGradient::PadSpread);
        gradient142.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient142.setColorAt(0, QColor(255, 255, 255, 255));
        gradient142.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush161(gradient142);
        palette46.setBrush(QPalette::Disabled, QPalette::Base, brush161);
        QRadialGradient gradient143(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient143.setSpread(QGradient::PadSpread);
        gradient143.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient143.setColorAt(0, QColor(255, 255, 255, 255));
        gradient143.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush162(gradient143);
        palette46.setBrush(QPalette::Disabled, QPalette::Window, brush162);
        palette46.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette46.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette46.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        aRightButton->setPalette(palette46);
        aRightButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        aRightButton->setAutoDefault(false);
        aRightButton->setDefault(false);
        aRightButton->setFlat(false);

        horizontalLayout->addWidget(aRightButton);


        anglesControlGridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalSpacer_22 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_22);

        bDownButton = new QPushButton(frame_10);
        bDownButton->setObjectName(QString::fromUtf8("bDownButton"));
        sizePolicy3.setHeightForWidth(bDownButton->sizePolicy().hasHeightForWidth());
        bDownButton->setSizePolicy(sizePolicy3);
        bDownButton->setMinimumSize(QSize(30, 27));
        bDownButton->setMaximumSize(QSize(25, 27));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient144(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient144.setSpread(QGradient::PadSpread);
        gradient144.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient144.setColorAt(0, QColor(255, 255, 255, 255));
        gradient144.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush163(gradient144);
        palette47.setBrush(QPalette::Active, QPalette::Button, brush163);
        palette47.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette47.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette47.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette47.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette47.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette47.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient145(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient145.setSpread(QGradient::PadSpread);
        gradient145.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient145.setColorAt(0, QColor(255, 255, 255, 255));
        gradient145.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush164(gradient145);
        palette47.setBrush(QPalette::Active, QPalette::Base, brush164);
        QRadialGradient gradient146(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient146.setSpread(QGradient::PadSpread);
        gradient146.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient146.setColorAt(0, QColor(255, 255, 255, 255));
        gradient146.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush165(gradient146);
        palette47.setBrush(QPalette::Active, QPalette::Window, brush165);
        palette47.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette47.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette47.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette47.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient147(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient147.setSpread(QGradient::PadSpread);
        gradient147.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient147.setColorAt(0, QColor(255, 255, 255, 255));
        gradient147.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush166(gradient147);
        palette47.setBrush(QPalette::Inactive, QPalette::Button, brush166);
        palette47.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette47.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette47.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette47.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette47.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette47.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient148(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient148.setSpread(QGradient::PadSpread);
        gradient148.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient148.setColorAt(0, QColor(255, 255, 255, 255));
        gradient148.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush167(gradient148);
        palette47.setBrush(QPalette::Inactive, QPalette::Base, brush167);
        QRadialGradient gradient149(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient149.setSpread(QGradient::PadSpread);
        gradient149.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient149.setColorAt(0, QColor(255, 255, 255, 255));
        gradient149.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush168(gradient149);
        palette47.setBrush(QPalette::Inactive, QPalette::Window, brush168);
        palette47.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette47.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette47.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette47.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient150(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient150.setSpread(QGradient::PadSpread);
        gradient150.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient150.setColorAt(0, QColor(255, 255, 255, 255));
        gradient150.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush169(gradient150);
        palette47.setBrush(QPalette::Disabled, QPalette::Button, brush169);
        palette47.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette47.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette47.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette47.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette47.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette47.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient151(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient151.setSpread(QGradient::PadSpread);
        gradient151.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient151.setColorAt(0, QColor(255, 255, 255, 255));
        gradient151.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush170(gradient151);
        palette47.setBrush(QPalette::Disabled, QPalette::Base, brush170);
        QRadialGradient gradient152(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient152.setSpread(QGradient::PadSpread);
        gradient152.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient152.setColorAt(0, QColor(255, 255, 255, 255));
        gradient152.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush171(gradient152);
        palette47.setBrush(QPalette::Disabled, QPalette::Window, brush171);
        palette47.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette47.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette47.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        bDownButton->setPalette(palette47);
        bDownButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_15->addWidget(bDownButton);

        horizontalSpacer_23 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_23);


        anglesControlGridLayout->addLayout(horizontalLayout_15, 2, 0, 1, 1);


        horizontalLayout_31->addLayout(anglesControlGridLayout);


        horizontalLayout_12->addWidget(frame_10);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(1);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        gridLayout_17->setSizeConstraint(QLayout::SetFixedSize);
        armHeadResetUpDownPushButton = new QPushButton(layoutWidget_3);
        armHeadResetUpDownPushButton->setObjectName(QString::fromUtf8("armHeadResetUpDownPushButton"));
        armHeadResetUpDownPushButton->setMinimumSize(QSize(34, 30));
        armHeadResetUpDownPushButton->setMaximumSize(QSize(35, 30));
        QFont font16;
        font16.setPointSize(7);
        font16.setBold(true);
        font16.setWeight(75);
        armHeadResetUpDownPushButton->setFont(font16);
        armHeadResetUpDownPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(0,0,255);\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 0px;\n"
"background: rgb(220,220,220);\n"
"min-width: 30px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: rgb(220,220,220);\n"
"background: rgb(0,0,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: rgb(0,0,255);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadResetUpDownPushButton, 0, 0, 1, 1);

        armHeadUpPushButton = new QPushButton(layoutWidget_3);
        armHeadUpPushButton->setObjectName(QString::fromUtf8("armHeadUpPushButton"));
        armHeadUpPushButton->setMinimumSize(QSize(18, 30));
        armHeadUpPushButton->setMaximumSize(QSize(35, 30));
        QFont font17;
        font17.setPointSize(8);
        font17.setBold(false);
        font17.setWeight(50);
        armHeadUpPushButton->setFont(font17);
        armHeadUpPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(0,0,255);\n"
"border: 1px solid #555;\n"
"border-radius: 2px;\n"
"padding: 0px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadUpPushButton, 0, 1, 1, 1);

        armHeadLeftPushButton = new QPushButton(layoutWidget_3);
        armHeadLeftPushButton->setObjectName(QString::fromUtf8("armHeadLeftPushButton"));
        armHeadLeftPushButton->setMinimumSize(QSize(18, 30));
        armHeadLeftPushButton->setMaximumSize(QSize(35, 30));
        armHeadLeftPushButton->setFont(font17);
        armHeadLeftPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,0,0);\n"
"border: 1px solid #555;\n"
"border-radius: 2px;\n"
"padding: 0px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadLeftPushButton, 1, 0, 1, 1);

        armHeadRightPushButton = new QPushButton(layoutWidget_3);
        armHeadRightPushButton->setObjectName(QString::fromUtf8("armHeadRightPushButton"));
        armHeadRightPushButton->setMinimumSize(QSize(18, 30));
        armHeadRightPushButton->setMaximumSize(QSize(35, 30));
        armHeadRightPushButton->setFont(font17);
        armHeadRightPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,0,0);\n"
"border: 1px solid #555;\n"
"border-radius: 2px;\n"
"padding: 0px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadRightPushButton, 1, 2, 1, 1);

        armHeadDownPushButton = new QPushButton(layoutWidget_3);
        armHeadDownPushButton->setObjectName(QString::fromUtf8("armHeadDownPushButton"));
        armHeadDownPushButton->setMinimumSize(QSize(18, 30));
        armHeadDownPushButton->setMaximumSize(QSize(35, 30));
        armHeadDownPushButton->setFont(font17);
        armHeadDownPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(0,0,255);\n"
"border: 1px solid #555;\n"
"border-radius: 2px;\n"
"padding: 0px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 16px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadDownPushButton, 2, 1, 1, 1);

        armHeadResetPushButton = new QPushButton(layoutWidget_3);
        armHeadResetPushButton->setObjectName(QString::fromUtf8("armHeadResetPushButton"));
        armHeadResetPushButton->setMinimumSize(QSize(34, 30));
        armHeadResetPushButton->setMaximumSize(QSize(35, 30));
        armHeadResetPushButton->setFont(font16);
        armHeadResetPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,0,0);\n"
"border: 2px solid #555;\n"
"border-radius: 8px;\n"
"padding: 0px;\n"
"background: rgb(220,220,220);\n"
"min-width: 30px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: rgb(220,220,220);\n"
"background: rgb(255,0,0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color: rgb(255,0,0);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        gridLayout_17->addWidget(armHeadResetPushButton, 2, 2, 1, 1);

        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(36, 30));
        label_16->setMaximumSize(QSize(35, 30));
        QFont font18;
        font18.setPointSize(8);
        font18.setBold(true);
        font18.setWeight(75);
        label_16->setFont(font18);
        label_16->setAutoFillBackground(false);
        label_16->setStyleSheet(QString::fromUtf8("background: white"));
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Plain);

        gridLayout_17->addWidget(label_16, 1, 1, 1, 1);


        horizontalLayout_12->addLayout(gridLayout_17);


        horizontalLayout_29->addWidget(armControlFrame);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        voltageFrame = new QFrame(layoutWidget_2);
        voltageFrame->setObjectName(QString::fromUtf8("voltageFrame"));
        voltageFrame->setMinimumSize(QSize(156, 138));
        voltageFrame->setMaximumSize(QSize(16777215, 138));
        voltageFrame->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        voltageFrame->setFrameShape(QFrame::Box);
        voltageFrame->setFrameShadow(QFrame::Raised);
        voltageFrame->setLineWidth(2);
        butterflyLabel = new QLabel(voltageFrame);
        butterflyLabel->setObjectName(QString::fromUtf8("butterflyLabel"));
        butterflyLabel->setGeometry(QRect(10, 10, 182, 28));
        sizePolicy3.setHeightForWidth(butterflyLabel->sizePolicy().hasHeightForWidth());
        butterflyLabel->setSizePolicy(sizePolicy3);
        butterflyLabel->setMinimumSize(QSize(0, 28));
        butterflyLabel->setMaximumSize(QSize(200, 28));
        butterflyLabel->setFont(font3);
        butterflyLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,190)\n"
""));
        butterflyLabel->setFrameShape(QFrame::Box);
        butterflyLabel->setFrameShadow(QFrame::Plain);
        butterflyLabel->setLineWidth(2);
        butterflyLabel->setAlignment(Qt::AlignCenter);
        layoutWidget5 = new QWidget(voltageFrame);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 40, 182, 90));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setSizeConstraint(QLayout::SetFixedSize);
        butMotorsLabel = new QLabel(layoutWidget5);
        butMotorsLabel->setObjectName(QString::fromUtf8("butMotorsLabel"));
        sizePolicy3.setHeightForWidth(butMotorsLabel->sizePolicy().hasHeightForWidth());
        butMotorsLabel->setSizePolicy(sizePolicy3);
        butMotorsLabel->setMinimumSize(QSize(64, 39));
        butMotorsLabel->setMaximumSize(QSize(64, 39));
        butMotorsLabel->setFont(font3);
        butMotorsLabel->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(230, 230, 230, 255), stop:1 rgba(255, 255, 255, 255))"));
        butMotorsLabel->setFrameShape(QFrame::Box);

        gridLayout_9->addWidget(butMotorsLabel, 0, 0, 1, 1);

        motorsVoltage = new QLCDNumber(layoutWidget5);
        motorsVoltage->setObjectName(QString::fromUtf8("motorsVoltage"));
        sizePolicy3.setHeightForWidth(motorsVoltage->sizePolicy().hasHeightForWidth());
        motorsVoltage->setSizePolicy(sizePolicy3);
        motorsVoltage->setMinimumSize(QSize(71, 40));
        motorsVoltage->setBaseSize(QSize(0, 0));
        motorsVoltage->setFont(font3);
        motorsVoltage->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        motorsVoltage->setNumDigits(5);
        motorsVoltage->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_9->addWidget(motorsVoltage, 0, 1, 1, 1);

        butPsuLabel = new QLabel(layoutWidget5);
        butPsuLabel->setObjectName(QString::fromUtf8("butPsuLabel"));
        sizePolicy3.setHeightForWidth(butPsuLabel->sizePolicy().hasHeightForWidth());
        butPsuLabel->setSizePolicy(sizePolicy3);
        butPsuLabel->setMinimumSize(QSize(64, 39));
        butPsuLabel->setMaximumSize(QSize(64, 39));
        butPsuLabel->setFont(font3);
        butPsuLabel->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(230, 230, 230, 255), stop:1 rgba(255, 255, 255, 255))"));
        butPsuLabel->setFrameShape(QFrame::Box);

        gridLayout_9->addWidget(butPsuLabel, 1, 0, 1, 1);

        psuVoltage = new QLCDNumber(layoutWidget5);
        psuVoltage->setObjectName(QString::fromUtf8("psuVoltage"));
        sizePolicy3.setHeightForWidth(psuVoltage->sizePolicy().hasHeightForWidth());
        psuVoltage->setSizePolicy(sizePolicy3);
        psuVoltage->setMinimumSize(QSize(71, 40));
        psuVoltage->setBaseSize(QSize(0, 0));
        psuVoltage->setFont(font3);
        psuVoltage->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        psuVoltage->setNumDigits(5);
        psuVoltage->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_9->addWidget(psuVoltage, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_9, 0, 0, 2, 1);

        MotorsBatteryProgressBar = new QProgressBar(layoutWidget5);
        MotorsBatteryProgressBar->setObjectName(QString::fromUtf8("MotorsBatteryProgressBar"));
        sizePolicy3.setHeightForWidth(MotorsBatteryProgressBar->sizePolicy().hasHeightForWidth());
        MotorsBatteryProgressBar->setSizePolicy(sizePolicy3);
        MotorsBatteryProgressBar->setMinimumSize(QSize(31, 41));
        MotorsBatteryProgressBar->setMaximumSize(QSize(31, 41));
        MotorsBatteryProgressBar->setLayoutDirection(Qt::LeftToRight);
        MotorsBatteryProgressBar->setValue(0);
        MotorsBatteryProgressBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(MotorsBatteryProgressBar, 0, 1, 1, 1);

        psuBatteryProgressBar = new QProgressBar(layoutWidget5);
        psuBatteryProgressBar->setObjectName(QString::fromUtf8("psuBatteryProgressBar"));
        sizePolicy3.setHeightForWidth(psuBatteryProgressBar->sizePolicy().hasHeightForWidth());
        psuBatteryProgressBar->setSizePolicy(sizePolicy3);
        psuBatteryProgressBar->setMinimumSize(QSize(31, 41));
        psuBatteryProgressBar->setMaximumSize(QSize(31, 41));
        psuBatteryProgressBar->setLayoutDirection(Qt::LeftToRight);
        psuBatteryProgressBar->setValue(0);
        psuBatteryProgressBar->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(psuBatteryProgressBar, 1, 1, 1, 1);


        gridLayout_6->addWidget(voltageFrame, 0, 0, 1, 1);

        line_7 = new QFrame(layoutWidget_2);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setMinimumSize(QSize(8, 141));
        line_7->setMaximumSize(QSize(8, 16777215));
        line_7->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setLineWidth(3);
        line_7->setFrameShape(QFrame::VLine);

        gridLayout_6->addWidget(line_7, 0, 1, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        frame_3 = new QFrame(layoutWidget_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(177, 101));
        frame_3->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(2);
        widget2 = new QWidget(frame_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 1, 171, 101));
        widget2->setStyleSheet(QString::fromUtf8("background: rgba()"));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        butterflyLabel_2 = new QLabel(widget2);
        butterflyLabel_2->setObjectName(QString::fromUtf8("butterflyLabel_2"));
        sizePolicy3.setHeightForWidth(butterflyLabel_2->sizePolicy().hasHeightForWidth());
        butterflyLabel_2->setSizePolicy(sizePolicy3);
        butterflyLabel_2->setMinimumSize(QSize(158, 26));
        butterflyLabel_2->setMaximumSize(QSize(150, 26));
        QFont font19;
        font19.setPointSize(10);
        font19.setBold(true);
        font19.setWeight(75);
        font19.setKerning(true);
        butterflyLabel_2->setFont(font19);
        butterflyLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,190)\n"
""));
        butterflyLabel_2->setFrameShape(QFrame::Box);
        butterflyLabel_2->setFrameShadow(QFrame::Plain);
        butterflyLabel_2->setLineWidth(2);
        butterflyLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(butterflyLabel_2);

        statesComboBox = new QComboBox(widget2);
        statesComboBox->setObjectName(QString::fromUtf8("statesComboBox"));
        sizePolicy3.setHeightForWidth(statesComboBox->sizePolicy().hasHeightForWidth());
        statesComboBox->setSizePolicy(sizePolicy3);
        statesComboBox->setMinimumSize(QSize(158, 29));
        statesComboBox->setMaximumSize(QSize(158, 29));
        statesComboBox->setEditable(false);

        verticalLayout_5->addWidget(statesComboBox);

        armTeleoperationCheckBox = new QCheckBox(widget2);
        armTeleoperationCheckBox->setObjectName(QString::fromUtf8("armTeleoperationCheckBox"));
        armTeleoperationCheckBox->setEnabled(false);
        armTeleoperationCheckBox->setMinimumSize(QSize(158, 22));
        armTeleoperationCheckBox->setMaximumSize(QSize(158, 22));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush172(QColor(40, 0, 140, 255));
        brush172.setStyle(Qt::SolidPattern);
        palette48.setBrush(QPalette::Active, QPalette::Button, brush172);
        palette48.setBrush(QPalette::Active, QPalette::Text, brush);
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette48.setBrush(QPalette::Active, QPalette::Base, brush172);
        palette48.setBrush(QPalette::Active, QPalette::Window, brush172);
        palette48.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Button, brush172);
        palette48.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette48.setBrush(QPalette::Inactive, QPalette::Base, brush172);
        palette48.setBrush(QPalette::Inactive, QPalette::Window, brush172);
        palette48.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Button, brush172);
        palette48.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette48.setBrush(QPalette::Disabled, QPalette::Base, brush172);
        palette48.setBrush(QPalette::Disabled, QPalette::Window, brush172);
        armTeleoperationCheckBox->setPalette(palette48);
        armTeleoperationCheckBox->setFont(font15);
        armTeleoperationCheckBox->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255); \n"
"background: rgb(40,0,140) "));

        verticalLayout_5->addWidget(armTeleoperationCheckBox);


        verticalLayout_12->addWidget(frame_3);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        numOfVictimsLabel = new QLabel(layoutWidget_2);
        numOfVictimsLabel->setObjectName(QString::fromUtf8("numOfVictimsLabel"));
        numOfVictimsLabel->setMinimumSize(QSize(120, 34));
        numOfVictimsLabel->setMaximumSize(QSize(120, 34));
        numOfVictimsLabel->setFont(font3);
        numOfVictimsLabel->setAutoFillBackground(false);
        numOfVictimsLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        numOfVictimsLabel->setFrameShape(QFrame::Box);
        numOfVictimsLabel->setFrameShadow(QFrame::Raised);
        numOfVictimsLabel->setLineWidth(1);

        horizontalLayout_20->addWidget(numOfVictimsLabel);

        numOfVictimsLCD = new QLCDNumber(layoutWidget_2);
        numOfVictimsLCD->setObjectName(QString::fromUtf8("numOfVictimsLCD"));
        numOfVictimsLCD->setEnabled(true);
        sizePolicy5.setHeightForWidth(numOfVictimsLCD->sizePolicy().hasHeightForWidth());
        numOfVictimsLCD->setSizePolicy(sizePolicy5);
        numOfVictimsLCD->setMinimumSize(QSize(44, 29));
        numOfVictimsLCD->setMaximumSize(QSize(50, 33));
        numOfVictimsLCD->setSizeIncrement(QSize(0, 0));
        numOfVictimsLCD->setBaseSize(QSize(0, 0));
        numOfVictimsLCD->setFont(font5);
        numOfVictimsLCD->setStyleSheet(QString::fromUtf8("color: green; background: rgba(255,255,255,200)"));
        numOfVictimsLCD->setNumDigits(2);
        numOfVictimsLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_20->addWidget(numOfVictimsLCD);


        verticalLayout_12->addLayout(horizontalLayout_20);


        gridLayout_6->addLayout(verticalLayout_12, 0, 2, 1, 1);

        line_18 = new QFrame(layoutWidget_2);
        line_18->setObjectName(QString::fromUtf8("line_18"));
        line_18->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_18->setFrameShadow(QFrame::Plain);
        line_18->setLineWidth(3);
        line_18->setFrameShape(QFrame::HLine);

        gridLayout_6->addWidget(line_18, 1, 0, 1, 3);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        pandoraLabel = new QLabel(layoutWidget_2);
        pandoraLabel->setObjectName(QString::fromUtf8("pandoraLabel"));
        pandoraLabel->setMinimumSize(QSize(65, 0));
        pandoraLabel->setMaximumSize(QSize(65, 16777215));
        QFont font20;
        font20.setPointSize(9);
        font20.setBold(true);
        font20.setItalic(false);
        font20.setWeight(75);
        pandoraLabel->setFont(font20);
        pandoraLabel->setStyleSheet(QString::fromUtf8("background:rgba(220,0 ,0,190); color: white\n"
""));
        pandoraLabel->setFrameShape(QFrame::Box);
        pandoraLabel->setFrameShadow(QFrame::Raised);
        pandoraLabel->setLineWidth(1);
        pandoraLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_18->addWidget(pandoraLabel);


        horizontalLayout_30->addLayout(verticalLayout_18);

        scrollArea_5 = new QScrollArea(layoutWidget_2);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setMinimumSize(QSize(331, 61));
        scrollArea_5->setMaximumSize(QSize(331, 61));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 329, 59));
        pandoraTextBrowser = new QTextBrowser(scrollAreaWidgetContents_5);
        pandoraTextBrowser->setObjectName(QString::fromUtf8("pandoraTextBrowser"));
        pandoraTextBrowser->setGeometry(QRect(0, 0, 331, 61));
        pandoraTextBrowser->setFont(font4);
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        horizontalLayout_30->addWidget(scrollArea_5);


        gridLayout_6->addLayout(horizontalLayout_30, 2, 0, 1, 3);


        horizontalLayout_29->addLayout(gridLayout_6);


        gridLayout_14->addLayout(horizontalLayout_29, 2, 0, 1, 1);

        line_4 = new QFrame(layoutWidget_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::HLine);

        gridLayout_14->addWidget(line_4, 1, 0, 1, 1);

        clearPandoraTextBrowserButton = new QPushButton(tab_1);
        clearPandoraTextBrowserButton->setObjectName(QString::fromUtf8("clearPandoraTextBrowserButton"));
        clearPandoraTextBrowserButton->setGeometry(QRect(1025, 740, 50, 15));
        clearPandoraTextBrowserButton->setFont(font16);
        clearPandoraTextBrowserButton->setStyleSheet(QString::fromUtf8(""));
        clearPandoraTextBrowserButton->setCheckable(false);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab2BackLabel = new QLabel(tab_2);
        tab2BackLabel->setObjectName(QString::fromUtf8("tab2BackLabel"));
        tab2BackLabel->setGeometry(QRect(0, 0, 1430, 771));
        victimsTreeWidget = new QTreeWidget(tab_2);
        QBrush brush173(QColor(85, 85, 255, 255));
        brush173.setStyle(Qt::SolidPattern);
        QFont font21;
        font21.setFamily(QString::fromUtf8("Ubuntu"));
        font21.setPointSize(11);
        font21.setBold(true);
        font21.setUnderline(false);
        font21.setWeight(75);
        QFont font22;
        font22.setFamily(QString::fromUtf8("Ubuntu"));
        font22.setPointSize(11);
        font22.setBold(true);
        font22.setWeight(75);
        QFont font23;
        font23.setPointSize(11);
        font23.setBold(true);
        font23.setWeight(75);
        QFont font24;
        font24.setPointSize(12);
        font24.setBold(true);
        font24.setWeight(75);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(3, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(3, font24);
        __qtreewidgetitem->setForeground(3, brush173);
        __qtreewidgetitem->setTextAlignment(2, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(2, font23);
        __qtreewidgetitem->setForeground(2, brush173);
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(1, font22);
        __qtreewidgetitem->setForeground(1, brush173);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font21);
        __qtreewidgetitem->setForeground(0, brush173);
        victimsTreeWidget->setHeaderItem(__qtreewidgetitem);
        victimsTreeWidget->setObjectName(QString::fromUtf8("victimsTreeWidget"));
        victimsTreeWidget->setGeometry(QRect(10, 80, 460, 320));
        sizePolicy3.setHeightForWidth(victimsTreeWidget->sizePolicy().hasHeightForWidth());
        victimsTreeWidget->setSizePolicy(sizePolicy3);
        victimsTreeWidget->setMinimumSize(QSize(460, 320));
        victimsTreeWidget->setMaximumSize(QSize(320, 21));
        victimsTreeWidget->setStyleSheet(QString::fromUtf8("background: rgba(255,255,255,200)"));
        victimsTreeWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        victimsTreeWidget->setDragEnabled(false);
        victimsTreeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        victimsTreeWidget->setAutoExpandDelay(-1);
        victimsTreeWidget->setIndentation(0);
        victimsTreeWidget->setRootIsDecorated(true);
        victimsTreeWidget->setUniformRowHeights(true);
        victimsTreeWidget->setItemsExpandable(false);
        victimsTreeWidget->setSortingEnabled(false);
        victimsTreeWidget->setAnimated(true);
        victimsTreeWidget->setAllColumnsShowFocus(true);
        victimsTreeWidget->setWordWrap(true);
        victimsTreeWidget->setHeaderHidden(false);
        victimsTreeWidget->setExpandsOnDoubleClick(true);
        victimsTreeWidget->setColumnCount(4);
        victimsTreeWidget->header()->setCascadingSectionResizes(true);
        victimsTreeWidget->header()->setDefaultSectionSize(110);
        victimsTreeWidget->header()->setHighlightSections(true);
        victimsTreeWidget->header()->setMinimumSectionSize(0);
        victimsTreeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        mapTag_2 = new QLabel(tab_2);
        mapTag_2->setObjectName(QString::fromUtf8("mapTag_2"));
        mapTag_2->setGeometry(QRect(10, 10, 460, 61));
        mapTag_2->setFont(font13);
        mapTag_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        mapTag_2->setFrameShape(QFrame::Box);
        mapTag_2->setFrameShadow(QFrame::Plain);
        mapTag_2->setLineWidth(2);
        mapTag_2->setAlignment(Qt::AlignCenter);
        mapGroupBox = new QGroupBox(tab_2);
        mapGroupBox->setObjectName(QString::fromUtf8("mapGroupBox"));
        mapGroupBox->setGeometry(QRect(500, 10, 921, 751));
        QFont font25;
        font25.setPointSize(9);
        font25.setBold(true);
        font25.setItalic(true);
        font25.setUnderline(false);
        font25.setWeight(75);
        mapGroupBox->setFont(font25);
        mapGroupBox->setStyleSheet(QString::fromUtf8("color: white"));
        mapGroupBox->setCheckable(true);
        mapGroupBox->setChecked(false);
        mapLabel = new QLabel(mapGroupBox);
        mapLabel->setObjectName(QString::fromUtf8("mapLabel"));
        mapLabel->setGeometry(QRect(0, 20, 921, 731));
        sizePolicy1.setHeightForWidth(mapLabel->sizePolicy().hasHeightForWidth());
        mapLabel->setSizePolicy(sizePolicy1);
        mapLabel->setMinimumSize(QSize(771, 661));
        mapLabel->setStyleSheet(QString::fromUtf8("background: rgb(127,127,127);"));
        mapLabel->setFrameShape(QFrame::Box);
        mapLabel->setFrameShadow(QFrame::Raised);
        mapLabel->setLineWidth(2);
        mapLabel->setAlignment(Qt::AlignCenter);
        mapTag = new QLabel(mapGroupBox);
        mapTag->setObjectName(QString::fromUtf8("mapTag"));
        mapTag->setGeometry(QRect(170, 0, 581, 20));
        sizePolicy3.setHeightForWidth(mapTag->sizePolicy().hasHeightForWidth());
        mapTag->setSizePolicy(sizePolicy3);
        mapTag->setMinimumSize(QSize(64, 17));
        mapTag->setMaximumSize(QSize(16777215, 16777215));
        mapTag->setFont(font13);
        mapTag->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        mapTag->setFrameShape(QFrame::Box);
        mapTag->setAlignment(Qt::AlignCenter);
        lowVoltageLabel_2 = new QLabel(mapGroupBox);
        lowVoltageLabel_2->setObjectName(QString::fromUtf8("lowVoltageLabel_2"));
        lowVoltageLabel_2->setGeometry(QRect(430, 30, 481, 61));
        lowVoltageLabel_2->setFont(font9);
        lowVoltageLabel_2->setStyleSheet(QString::fromUtf8("color: red"));
        lowVoltageLabel_2->setAlignment(Qt::AlignCenter);
        line_8 = new QFrame(tab_2);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(480, 0, 15, 770));
        line_8->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_8->setFrameShadow(QFrame::Plain);
        line_8->setLineWidth(2);
        line_8->setFrameShape(QFrame::VLine);
        frame1 = new QFrame(tab_2);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(10, 400, 461, 35));
        sizePolicy3.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy3);
        frame1->setMinimumSize(QSize(461, 35));
        frame1->setMaximumSize(QSize(461, 35));
        frame1->setStyleSheet(QString::fromUtf8("background: rgb(220,220,220)"));
        frame1->setFrameShape(QFrame::StyledPanel);
        horizontalLayout_4 = new QHBoxLayout(frame1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_4->setContentsMargins(-1, 6, -1, 7);
        label_5 = new QLabel(frame1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 25));
        label_5->setMaximumSize(QSize(150, 25));
        label_5->setFont(font13);
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(51, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        acceptVictimPushButton = new QPushButton(frame1);
        acceptVictimPushButton->setObjectName(QString::fromUtf8("acceptVictimPushButton"));
        acceptVictimPushButton->setMinimumSize(QSize(94, 25));
        acceptVictimPushButton->setMaximumSize(QSize(108, 25));
        acceptVictimPushButton->setFont(font13);
        acceptVictimPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_4->addWidget(acceptVictimPushButton);

        horizontalSpacer_3 = new QSpacerItem(15, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        line_16 = new QFrame(frame1);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_16);

        horizontalSpacer_2 = new QSpacerItem(15, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        declineVictimPushButton = new QPushButton(frame1);
        declineVictimPushButton->setObjectName(QString::fromUtf8("declineVictimPushButton"));
        declineVictimPushButton->setMinimumSize(QSize(94, 25));
        declineVictimPushButton->setMaximumSize(QSize(108, 25));
        declineVictimPushButton->setFont(font13);
        declineVictimPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_4->addWidget(declineVictimPushButton);

        topFrame_2 = new QFrame(tab_2);
        topFrame_2->setObjectName(QString::fromUtf8("topFrame_2"));
        topFrame_2->setGeometry(QRect(10, 460, 461, 30));
        topFrame_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_2->setFrameShape(QFrame::StyledPanel);
        topFrame_2->setFrameShadow(QFrame::Raised);
        topFrame_2->setLineWidth(2);
        createGeotiffPushButton = new QPushButton(topFrame_2);
        createGeotiffPushButton->setObjectName(QString::fromUtf8("createGeotiffPushButton"));
        createGeotiffPushButton->setGeometry(QRect(330, 1, 120, 27));
        createGeotiffPushButton->setMinimumSize(QSize(94, 27));
        createGeotiffPushButton->setMaximumSize(QSize(120, 27));
        QFont font26;
        font26.setPointSize(10);
        font26.setBold(true);
        font26.setWeight(75);
        createGeotiffPushButton->setFont(font26);
        createGeotiffPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255,255,0);\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        geotiffMissionNamePlainTextEdit = new QLineEdit(topFrame_2);
        geotiffMissionNamePlainTextEdit->setObjectName(QString::fromUtf8("geotiffMissionNamePlainTextEdit"));
        geotiffMissionNamePlainTextEdit->setGeometry(QRect(123, 2, 191, 25));
        geotiffMissionNamePlainTextEdit->setStyleSheet(QString::fromUtf8("background: white"));
        misionNameLabel = new QLabel(topFrame_2);
        misionNameLabel->setObjectName(QString::fromUtf8("misionNameLabel"));
        misionNameLabel->setGeometry(QRect(10, 6, 108, 17));
        misionNameLabel->setFont(font13);
        misionNameLabel->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel->setAlignment(Qt::AlignCenter);
        line_6 = new QFrame(tab_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 490, 486, 16));
        line_6->setFrameShadow(QFrame::Raised);
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 510, 461, 251));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: rgb(230, 230,230);"));
        groupBox_2->setCheckable(true);
        groupBox_2->setChecked(false);
        frame_8 = new QFrame(groupBox_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(10, 111, 441, 131));
        frame_8->setStyleSheet(QString::fromUtf8(""));
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Plain);
        semiAutoSensorLabel1_2 = new QLabel(frame_8);
        semiAutoSensorLabel1_2->setObjectName(QString::fromUtf8("semiAutoSensorLabel1_2"));
        semiAutoSensorLabel1_2->setGeometry(QRect(210, 15, 12, 17));
        semiAutoSensorLabel1_2->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1_2->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1_2->setFont(font13);
        semiAutoSensorLabel1_3 = new QLabel(frame_8);
        semiAutoSensorLabel1_3->setObjectName(QString::fromUtf8("semiAutoSensorLabel1_3"));
        semiAutoSensorLabel1_3->setGeometry(QRect(320, 48, 12, 17));
        semiAutoSensorLabel1_3->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1_3->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1_3->setFont(font13);
        semiAutoSensorLabel1_4 = new QLabel(frame_8);
        semiAutoSensorLabel1_4->setObjectName(QString::fromUtf8("semiAutoSensorLabel1_4"));
        semiAutoSensorLabel1_4->setGeometry(QRect(100, 48, 12, 17));
        semiAutoSensorLabel1_4->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1_4->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1_4->setFont(font13);
        semiAutoSensorLabel1_5 = new QLabel(frame_8);
        semiAutoSensorLabel1_5->setObjectName(QString::fromUtf8("semiAutoSensorLabel1_5"));
        semiAutoSensorLabel1_5->setGeometry(QRect(320, 15, 12, 17));
        semiAutoSensorLabel1_5->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1_5->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1_5->setFont(font13);
        semiAutoSensorLabel1_6 = new QLabel(frame_8);
        semiAutoSensorLabel1_6->setObjectName(QString::fromUtf8("semiAutoSensorLabel1_6"));
        semiAutoSensorLabel1_6->setGeometry(QRect(210, 48, 12, 17));
        semiAutoSensorLabel1_6->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1_6->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1_6->setFont(font13);
        line_12 = new QFrame(frame_8);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(10, 70, 421, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        semiAutoSensorsLabel = new QLabel(frame_8);
        semiAutoSensorsLabel->setObjectName(QString::fromUtf8("semiAutoSensorsLabel"));
        semiAutoSensorsLabel->setGeometry(QRect(10, 10, 81, 26));
        semiAutoSensorsLabel->setMinimumSize(QSize(79, 26));
        semiAutoSensorsLabel->setMaximumSize(QSize(89, 26));
        semiAutoSensorsLabel->setStyleSheet(QString::fromUtf8("background: rgb(30,30,190)"));
        semiAutoSensorsLabel->setFrameShape(QFrame::Box);
        semiAutoSensorsLabel->setFrameShadow(QFrame::Raised);
        semiAutoSensorsLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        semiAutoSensorLabel1 = new QLabel(frame_8);
        semiAutoSensorLabel1->setObjectName(QString::fromUtf8("semiAutoSensorLabel1"));
        semiAutoSensorLabel1->setGeometry(QRect(100, 15, 12, 17));
        semiAutoSensorLabel1->setMinimumSize(QSize(12, 17));
        semiAutoSensorLabel1->setMaximumSize(QSize(12, 17));
        semiAutoSensorLabel1->setFont(font13);
        layoutWidget6 = new QWidget(frame_8);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 90, 421, 33));
        horizontalLayout_23 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(3);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        semiAutoXLabel = new QLabel(layoutWidget6);
        semiAutoXLabel->setObjectName(QString::fromUtf8("semiAutoXLabel"));
        semiAutoXLabel->setMinimumSize(QSize(41, 25));
        semiAutoXLabel->setMaximumSize(QSize(41, 25));
        semiAutoXLabel->setStyleSheet(QString::fromUtf8("background: rgb(30,30,190)"));
        semiAutoXLabel->setFrameShape(QFrame::Box);
        semiAutoXLabel->setFrameShadow(QFrame::Raised);
        semiAutoXLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(semiAutoXLabel);

        semiAutoXValueLabel = new QLabel(layoutWidget6);
        semiAutoXValueLabel->setObjectName(QString::fromUtf8("semiAutoXValueLabel"));
        semiAutoXValueLabel->setMinimumSize(QSize(50, 25));
        semiAutoXValueLabel->setMaximumSize(QSize(50, 25));
        semiAutoXValueLabel->setStyleSheet(QString::fromUtf8("background: rgb(105,205,205);"));
        semiAutoXValueLabel->setFrameShape(QFrame::StyledPanel);
        semiAutoXValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(semiAutoXValueLabel);

        semiAutoYLabel = new QLabel(layoutWidget6);
        semiAutoYLabel->setObjectName(QString::fromUtf8("semiAutoYLabel"));
        semiAutoYLabel->setMinimumSize(QSize(41, 25));
        semiAutoYLabel->setMaximumSize(QSize(41, 25));
        semiAutoYLabel->setStyleSheet(QString::fromUtf8("background: rgb(30,30,190)"));
        semiAutoYLabel->setFrameShape(QFrame::Box);
        semiAutoYLabel->setFrameShadow(QFrame::Raised);
        semiAutoYLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(semiAutoYLabel);

        semiAutoYValueLabel = new QLabel(layoutWidget6);
        semiAutoYValueLabel->setObjectName(QString::fromUtf8("semiAutoYValueLabel"));
        semiAutoYValueLabel->setMinimumSize(QSize(50, 25));
        semiAutoYValueLabel->setMaximumSize(QSize(50, 25));
        semiAutoYValueLabel->setStyleSheet(QString::fromUtf8("background: rgb(105,205,205);"));
        semiAutoYValueLabel->setFrameShape(QFrame::StyledPanel);
        semiAutoYValueLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_22->addWidget(semiAutoYValueLabel);


        horizontalLayout_23->addLayout(horizontalLayout_22);

        horizontalSpacer_4 = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_4);

        semiAutoConfirmButton = new QPushButton(layoutWidget6);
        semiAutoConfirmButton->setObjectName(QString::fromUtf8("semiAutoConfirmButton"));
        semiAutoConfirmButton->setMinimumSize(QSize(94, 31));
        semiAutoConfirmButton->setMaximumSize(QSize(134, 31));
        semiAutoConfirmButton->setFont(font13);
        semiAutoConfirmButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_23->addWidget(semiAutoConfirmButton);

        semiAutoSensorsLabel->raise();
        semiAutoSensorLabel1->raise();
        layoutWidget->raise();
        semiAutoSensorLabel1_2->raise();
        semiAutoSensorLabel1_3->raise();
        semiAutoSensorLabel1_4->raise();
        semiAutoSensorLabel1_5->raise();
        semiAutoSensorLabel1_6->raise();
        line_12->raise();
        semiAutonomousInstructions = new QLabel(groupBox_2);
        semiAutonomousInstructions->setObjectName(QString::fromUtf8("semiAutonomousInstructions"));
        semiAutonomousInstructions->setGeometry(QRect(30, 55, 401, 51));
        QFont font27;
        font27.setPointSize(9);
        font27.setItalic(true);
        semiAutonomousInstructions->setFont(font27);
        semiAutonomousInstructions->setStyleSheet(QString::fromUtf8("color:black"));
        semiAutonomousInstructions->setAlignment(Qt::AlignCenter);
        semiAutonomousLabel = new QLabel(groupBox_2);
        semiAutonomousLabel->setObjectName(QString::fromUtf8("semiAutonomousLabel"));
        semiAutonomousLabel->setGeometry(QRect(20, 5, 426, 42));
        semiAutonomousLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 0, 200,130)\n"
""));
        semiAutonomousLabel->setFrameShape(QFrame::Box);
        semiAutonomousLabel->setFrameShadow(QFrame::Plain);
        semiAutonomousLabel->setLineWidth(2);
        line_13 = new QFrame(tab_2);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(0, 440, 486, 16));
        line_13->setFrameShadow(QFrame::Raised);
        line_13->setLineWidth(1);
        line_13->setFrameShape(QFrame::HLine);
        sensorsComboBox1 = new QComboBox(tab_2);
        sensorsComboBox1->setObjectName(QString::fromUtf8("sensorsComboBox1"));
        sensorsComboBox1->setGeometry(QRect(140, 631, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox1->sizePolicy().hasHeightForWidth());
        sensorsComboBox1->setSizePolicy(sizePolicy3);
        sensorsComboBox1->setMinimumSize(QSize(0, 0));
        sensorsComboBox1->setMaximumSize(QSize(90, 25));
        sensorsComboBox1->setEditable(false);
        sensorsComboBox2 = new QComboBox(tab_2);
        sensorsComboBox2->setObjectName(QString::fromUtf8("sensorsComboBox2"));
        sensorsComboBox2->setGeometry(QRect(250, 631, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox2->sizePolicy().hasHeightForWidth());
        sensorsComboBox2->setSizePolicy(sizePolicy3);
        sensorsComboBox2->setMinimumSize(QSize(0, 0));
        sensorsComboBox2->setMaximumSize(QSize(90, 25));
        sensorsComboBox2->setEditable(false);
        sensorsComboBox3 = new QComboBox(tab_2);
        sensorsComboBox3->setObjectName(QString::fromUtf8("sensorsComboBox3"));
        sensorsComboBox3->setGeometry(QRect(370, 631, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox3->sizePolicy().hasHeightForWidth());
        sensorsComboBox3->setSizePolicy(sizePolicy3);
        sensorsComboBox3->setMinimumSize(QSize(0, 0));
        sensorsComboBox3->setMaximumSize(QSize(90, 25));
        sensorsComboBox3->setEditable(false);
        sensorsComboBox4 = new QComboBox(tab_2);
        sensorsComboBox4->setObjectName(QString::fromUtf8("sensorsComboBox4"));
        sensorsComboBox4->setGeometry(QRect(140, 665, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox4->sizePolicy().hasHeightForWidth());
        sensorsComboBox4->setSizePolicy(sizePolicy3);
        sensorsComboBox4->setMinimumSize(QSize(0, 0));
        sensorsComboBox4->setMaximumSize(QSize(90, 25));
        sensorsComboBox4->setEditable(false);
        sensorsComboBox5 = new QComboBox(tab_2);
        sensorsComboBox5->setObjectName(QString::fromUtf8("sensorsComboBox5"));
        sensorsComboBox5->setGeometry(QRect(250, 665, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox5->sizePolicy().hasHeightForWidth());
        sensorsComboBox5->setSizePolicy(sizePolicy3);
        sensorsComboBox5->setMinimumSize(QSize(0, 0));
        sensorsComboBox5->setMaximumSize(QSize(90, 25));
        sensorsComboBox5->setEditable(false);
        sensorsComboBox6 = new QComboBox(tab_2);
        sensorsComboBox6->setObjectName(QString::fromUtf8("sensorsComboBox6"));
        sensorsComboBox6->setGeometry(QRect(370, 665, 80, 25));
        sizePolicy3.setHeightForWidth(sensorsComboBox6->sizePolicy().hasHeightForWidth());
        sensorsComboBox6->setSizePolicy(sizePolicy3);
        sensorsComboBox6->setMinimumSize(QSize(0, 0));
        sensorsComboBox6->setMaximumSize(QSize(90, 25));
        sensorsComboBox6->setEditable(false);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setEnabled(true);
        tab3BackLabel = new QLabel(tab_3);
        tab3BackLabel->setObjectName(QString::fromUtf8("tab3BackLabel"));
        tab3BackLabel->setGeometry(QRect(0, 0, 1441, 781));
        label = new QLabel(tab_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 10, 751, 30));
        label->setMinimumSize(QSize(0, 30));
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(2);
        label->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1066, 10, 355, 30));
        label_7->setMinimumSize(QSize(0, 30));
        label_7->setMaximumSize(QSize(355, 16777215));
        label_7->setFont(font24);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        label_7->setFrameShape(QFrame::Box);
        label_7->setLineWidth(2);
        label_7->setAlignment(Qt::AlignCenter);
        frame_4 = new QFrame(tab_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(10, 50, 271, 282));
        frame_4->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setLineWidth(2);
        layoutWidget_6 = new QWidget(frame_4);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 13, 251, 256));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        motorSpeedLabel_2 = new QLabel(layoutWidget_6);
        motorSpeedLabel_2->setObjectName(QString::fromUtf8("motorSpeedLabel_2"));
        sizePolicy3.setHeightForWidth(motorSpeedLabel_2->sizePolicy().hasHeightForWidth());
        motorSpeedLabel_2->setSizePolicy(sizePolicy3);
        motorSpeedLabel_2->setMinimumSize(QSize(248, 30));
        motorSpeedLabel_2->setMaximumSize(QSize(248, 30));
        motorSpeedLabel_2->setFont(font3);
        motorSpeedLabel_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 85, 255,130)\n"
""));
        motorSpeedLabel_2->setFrameShape(QFrame::Box);
        motorSpeedLabel_2->setFrameShadow(QFrame::Raised);
        motorSpeedLabel_2->setLineWidth(2);
        motorSpeedLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(motorSpeedLabel_2);

        motorRpmFrame_2 = new QFrame(layoutWidget_6);
        motorRpmFrame_2->setObjectName(QString::fromUtf8("motorRpmFrame_2"));
        sizePolicy3.setHeightForWidth(motorRpmFrame_2->sizePolicy().hasHeightForWidth());
        motorRpmFrame_2->setSizePolicy(sizePolicy3);
        motorRpmFrame_2->setMinimumSize(QSize(244, 101));
        motorRpmFrame_2->setMaximumSize(QSize(248, 101));
        motorRpmFrame_2->setStyleSheet(QString::fromUtf8("background: rgba()"));
        motorRpmFrame_2->setFrameShape(QFrame::Box);
        layoutWidget_14 = new QWidget(motorRpmFrame_2);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(10, 40, 235, 42));
        gridLayout_11 = new QGridLayout(layoutWidget_14);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setHorizontalSpacing(2);
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        motorLeftRpmLabel = new QLabel(layoutWidget_14);
        motorLeftRpmLabel->setObjectName(QString::fromUtf8("motorLeftRpmLabel"));
        motorLeftRpmLabel->setFont(font3);
        motorLeftRpmLabel->setStyleSheet(QString::fromUtf8("color: white"));
        motorLeftRpmLabel->setFrameShape(QFrame::Box);
        motorLeftRpmLabel->setLineWidth(2);

        gridLayout_11->addWidget(motorLeftRpmLabel, 0, 0, 1, 1);

        motorLeftRpm = new QLCDNumber(layoutWidget_14);
        motorLeftRpm->setObjectName(QString::fromUtf8("motorLeftRpm"));
        motorLeftRpm->setEnabled(true);
        sizePolicy1.setHeightForWidth(motorLeftRpm->sizePolicy().hasHeightForWidth());
        motorLeftRpm->setSizePolicy(sizePolicy1);
        motorLeftRpm->setMinimumSize(QSize(60, 40));
        motorLeftRpm->setSizeIncrement(QSize(0, 0));
        motorLeftRpm->setBaseSize(QSize(0, 0));
        motorLeftRpm->setFont(font5);
        motorLeftRpm->setStyleSheet(QString::fromUtf8("color: red; background: black"));
        motorLeftRpm->setNumDigits(4);
        motorLeftRpm->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(motorLeftRpm, 0, 1, 1, 1);

        motorRightRpmLabel = new QLabel(layoutWidget_14);
        motorRightRpmLabel->setObjectName(QString::fromUtf8("motorRightRpmLabel"));
        motorRightRpmLabel->setFont(font3);
        motorRightRpmLabel->setStyleSheet(QString::fromUtf8("color: white"));
        motorRightRpmLabel->setFrameShape(QFrame::Box);
        motorRightRpmLabel->setLineWidth(2);

        gridLayout_11->addWidget(motorRightRpmLabel, 0, 2, 1, 1);

        motorRightRpm = new QLCDNumber(layoutWidget_14);
        motorRightRpm->setObjectName(QString::fromUtf8("motorRightRpm"));
        sizePolicy3.setHeightForWidth(motorRightRpm->sizePolicy().hasHeightForWidth());
        motorRightRpm->setSizePolicy(sizePolicy3);
        motorRightRpm->setMinimumSize(QSize(60, 40));
        motorRightRpm->setBaseSize(QSize(0, 0));
        motorRightRpm->setFont(font3);
        motorRightRpm->setStyleSheet(QString::fromUtf8("color: red; background: black"));
        motorRightRpm->setNumDigits(4);
        motorRightRpm->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_11->addWidget(motorRightRpm, 0, 3, 1, 1);

        motorRpmLabel_2 = new QLabel(motorRpmFrame_2);
        motorRpmLabel_2->setObjectName(QString::fromUtf8("motorRpmLabel_2"));
        motorRpmLabel_2->setGeometry(QRect(10, 10, 60, 25));
        sizePolicy3.setHeightForWidth(motorRpmLabel_2->sizePolicy().hasHeightForWidth());
        motorRpmLabel_2->setSizePolicy(sizePolicy3);
        motorRpmLabel_2->setMinimumSize(QSize(60, 25));
        motorRpmLabel_2->setMaximumSize(QSize(60, 25));
        motorRpmLabel_2->setFont(font3);
        motorRpmLabel_2->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(230, 230, 230, 255), stop:1 rgba(255, 255, 255, 255))"));
        motorRpmLabel_2->setFrameShape(QFrame::Box);
        motorRpmLabel_2->setFrameShadow(QFrame::Plain);
        motorRpmLabel_2->setLineWidth(1);
        motorRpmLabel_2->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(motorRpmFrame_2);

        frame_6 = new QFrame(layoutWidget_6);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(244, 111));
        frame_6->setMaximumSize(QSize(248, 111));
        frame_6->setStyleSheet(QString::fromUtf8("background: rgba()"));
        frame_6->setFrameShape(QFrame::Box);
        layoutWidget_15 = new QWidget(frame_6);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(10, 10, 231, 91));
        gridLayout_13 = new QGridLayout(layoutWidget_15);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        debugMotorLinearLabel = new QLabel(layoutWidget_15);
        debugMotorLinearLabel->setObjectName(QString::fromUtf8("debugMotorLinearLabel"));
        debugMotorLinearLabel->setFont(font3);
        debugMotorLinearLabel->setStyleSheet(QString::fromUtf8("color: white"));
        debugMotorLinearLabel->setFrameShape(QFrame::Box);
        debugMotorLinearLabel->setLineWidth(2);

        gridLayout_13->addWidget(debugMotorLinearLabel, 0, 0, 1, 1);

        debugMotorLinearLCD = new QLCDNumber(layoutWidget_15);
        debugMotorLinearLCD->setObjectName(QString::fromUtf8("debugMotorLinearLCD"));
        sizePolicy3.setHeightForWidth(debugMotorLinearLCD->sizePolicy().hasHeightForWidth());
        debugMotorLinearLCD->setSizePolicy(sizePolicy3);
        debugMotorLinearLCD->setMinimumSize(QSize(60, 40));
        debugMotorLinearLCD->setBaseSize(QSize(0, 0));
        debugMotorLinearLCD->setFont(font3);
        debugMotorLinearLCD->setStyleSheet(QString::fromUtf8("color: red; background: black"));
        debugMotorLinearLCD->setNumDigits(4);
        debugMotorLinearLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_13->addWidget(debugMotorLinearLCD, 0, 1, 1, 1);

        debugMotorAngularrLabel = new QLabel(layoutWidget_15);
        debugMotorAngularrLabel->setObjectName(QString::fromUtf8("debugMotorAngularrLabel"));
        debugMotorAngularrLabel->setFont(font3);
        debugMotorAngularrLabel->setStyleSheet(QString::fromUtf8("color: white"));
        debugMotorAngularrLabel->setFrameShape(QFrame::Box);
        debugMotorAngularrLabel->setLineWidth(2);

        gridLayout_13->addWidget(debugMotorAngularrLabel, 1, 0, 1, 1);

        debugMotorAngularLCD = new QLCDNumber(layoutWidget_15);
        debugMotorAngularLCD->setObjectName(QString::fromUtf8("debugMotorAngularLCD"));
        sizePolicy3.setHeightForWidth(debugMotorAngularLCD->sizePolicy().hasHeightForWidth());
        debugMotorAngularLCD->setSizePolicy(sizePolicy3);
        debugMotorAngularLCD->setMinimumSize(QSize(60, 40));
        debugMotorAngularLCD->setBaseSize(QSize(0, 0));
        debugMotorAngularLCD->setFont(font3);
        debugMotorAngularLCD->setStyleSheet(QString::fromUtf8("color: red; background: black"));
        debugMotorAngularLCD->setNumDigits(4);
        debugMotorAngularLCD->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_13->addWidget(debugMotorAngularLCD, 1, 1, 1, 1);


        verticalLayout_9->addWidget(frame_6);

        line_19 = new QFrame(tab_3);
        line_19->setObjectName(QString::fromUtf8("line_19"));
        line_19->setGeometry(QRect(0, 640, 1431, 6));
        line_19->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_19->setFrameShadow(QFrame::Plain);
        line_19->setLineWidth(2);
        line_19->setFrameShape(QFrame::HLine);
        layoutWidget_17 = new QWidget(tab_3);
        layoutWidget_17->setObjectName(QString::fromUtf8("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(1120, 50, 263, 531));
        gridLayout_12 = new QGridLayout(layoutWidget_17);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalSpacer_11 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        clearMousePressEventsPushButton = new QPushButton(layoutWidget_17);
        clearMousePressEventsPushButton->setObjectName(QString::fromUtf8("clearMousePressEventsPushButton"));
        sizePolicy3.setHeightForWidth(clearMousePressEventsPushButton->sizePolicy().hasHeightForWidth());
        clearMousePressEventsPushButton->setSizePolicy(sizePolicy3);
        clearMousePressEventsPushButton->setMinimumSize(QSize(55, 27));
        clearMousePressEventsPushButton->setMaximumSize(QSize(85, 27));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient153(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient153.setSpread(QGradient::PadSpread);
        gradient153.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient153.setColorAt(0, QColor(255, 255, 255, 255));
        gradient153.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush174(gradient153);
        palette49.setBrush(QPalette::Active, QPalette::Button, brush174);
        palette49.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette49.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette49.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette49.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette49.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette49.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient154(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient154.setSpread(QGradient::PadSpread);
        gradient154.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient154.setColorAt(0, QColor(255, 255, 255, 255));
        gradient154.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush175(gradient154);
        palette49.setBrush(QPalette::Active, QPalette::Base, brush175);
        QRadialGradient gradient155(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient155.setSpread(QGradient::PadSpread);
        gradient155.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient155.setColorAt(0, QColor(255, 255, 255, 255));
        gradient155.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush176(gradient155);
        palette49.setBrush(QPalette::Active, QPalette::Window, brush176);
        palette49.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette49.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette49.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette49.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient156(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient156.setSpread(QGradient::PadSpread);
        gradient156.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient156.setColorAt(0, QColor(255, 255, 255, 255));
        gradient156.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush177(gradient156);
        palette49.setBrush(QPalette::Inactive, QPalette::Button, brush177);
        palette49.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette49.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette49.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette49.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette49.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette49.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient157(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient157.setSpread(QGradient::PadSpread);
        gradient157.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient157.setColorAt(0, QColor(255, 255, 255, 255));
        gradient157.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush178(gradient157);
        palette49.setBrush(QPalette::Inactive, QPalette::Base, brush178);
        QRadialGradient gradient158(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient158.setSpread(QGradient::PadSpread);
        gradient158.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient158.setColorAt(0, QColor(255, 255, 255, 255));
        gradient158.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush179(gradient158);
        palette49.setBrush(QPalette::Inactive, QPalette::Window, brush179);
        palette49.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette49.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette49.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette49.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient159(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient159.setSpread(QGradient::PadSpread);
        gradient159.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient159.setColorAt(0, QColor(255, 255, 255, 255));
        gradient159.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush180(gradient159);
        palette49.setBrush(QPalette::Disabled, QPalette::Button, brush180);
        palette49.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette49.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette49.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette49.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette49.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette49.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient160(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient160.setSpread(QGradient::PadSpread);
        gradient160.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient160.setColorAt(0, QColor(255, 255, 255, 255));
        gradient160.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush181(gradient160);
        palette49.setBrush(QPalette::Disabled, QPalette::Base, brush181);
        QRadialGradient gradient161(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient161.setSpread(QGradient::PadSpread);
        gradient161.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient161.setColorAt(0, QColor(255, 255, 255, 255));
        gradient161.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush182(gradient161);
        palette49.setBrush(QPalette::Disabled, QPalette::Window, brush182);
        palette49.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette49.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette49.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        clearMousePressEventsPushButton->setPalette(palette49);
        clearMousePressEventsPushButton->setFont(font13);
        clearMousePressEventsPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_14->addWidget(clearMousePressEventsPushButton);

        horizontalSpacer_12 = new QSpacerItem(68, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);


        gridLayout_12->addLayout(horizontalLayout_14, 2, 0, 1, 1);

        scrollArea_4 = new QScrollArea(layoutWidget_17);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        sizePolicy3.setHeightForWidth(scrollArea_4->sizePolicy().hasHeightForWidth());
        scrollArea_4->setSizePolicy(sizePolicy3);
        scrollArea_4->setMinimumSize(QSize(261, 461));
        scrollArea_4->setMaximumSize(QSize(261, 461));
        scrollArea_4->setStyleSheet(QString::fromUtf8("background: rgba(255,255,255,200)"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 259, 459));
        mousePressEventTextBrowser = new QTextBrowser(scrollAreaWidgetContents_4);
        mousePressEventTextBrowser->setObjectName(QString::fromUtf8("mousePressEventTextBrowser"));
        mousePressEventTextBrowser->setGeometry(QRect(0, 0, 261, 461));
        sizePolicy3.setHeightForWidth(mousePressEventTextBrowser->sizePolicy().hasHeightForWidth());
        mousePressEventTextBrowser->setSizePolicy(sizePolicy3);
        mousePressEventTextBrowser->setMinimumSize(QSize(261, 461));
        mousePressEventTextBrowser->setMaximumSize(QSize(261, 461));
        mousePressEventTextBrowser->setStyleSheet(QString::fromUtf8("background: rgba(255,255,255,200)"));
        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        gridLayout_12->addWidget(scrollArea_4, 1, 0, 1, 1);

        label_2 = new QLabel(layoutWidget_17);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setMinimumSize(QSize(261, 17));
        label_2->setMaximumSize(QSize(261, 17));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 85, 255,130)\n"
""));
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_2, 0, 0, 1, 1);

        line_11 = new QFrame(tab_3);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(1050, 0, 20, 641));
        line_11->setMinimumSize(QSize(0, 641));
        line_11->setMaximumSize(QSize(16777215, 641));
        line_11->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line_11->setFrameShadow(QFrame::Plain);
        line_11->setLineWidth(2);
        line_11->setFrameShape(QFrame::VLine);
        line = new QFrame(tab_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(280, 0, 20, 644));
        line->setStyleSheet(QString::fromUtf8("color: rgb(200,200,200)"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 10, 271, 30));
        label_13->setMinimumSize(QSize(0, 30));
        label_13->setFont(font24);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        label_13->setFrameShape(QFrame::Box);
        label_13->setLineWidth(2);
        label_13->setAlignment(Qt::AlignCenter);
        layoutWidget_16 = new QWidget(tab_3);
        layoutWidget_16->setObjectName(QString::fromUtf8("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(340, 50, 663, 586));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_16);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea_3 = new QScrollArea(layoutWidget_16);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        sizePolicy3.setHeightForWidth(scrollArea_3->sizePolicy().hasHeightForWidth());
        scrollArea_3->setSizePolicy(sizePolicy3);
        scrollArea_3->setMinimumSize(QSize(661, 471));
        scrollArea_3->setStyleSheet(QString::fromUtf8("background: rgba(255, 255,255,130);"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 659, 469));
        debugTextBrowser = new QTextBrowser(scrollAreaWidgetContents_3);
        debugTextBrowser->setObjectName(QString::fromUtf8("debugTextBrowser"));
        debugTextBrowser->setGeometry(QRect(0, 0, 659, 468));
        sizePolicy3.setHeightForWidth(debugTextBrowser->sizePolicy().hasHeightForWidth());
        debugTextBrowser->setSizePolicy(sizePolicy3);
        debugTextBrowser->setMinimumSize(QSize(659, 468));
        debugTextBrowser->setMaximumSize(QSize(659, 468));
        debugTextBrowser->setStyleSheet(QString::fromUtf8("background: rgba()"));
        debugTextBrowser->setFrameShape(QFrame::Box);
        debugTextBrowser->setFrameShadow(QFrame::Plain);
        debugTextBrowser->setLineWidth(2);
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_6->addWidget(scrollArea_3);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        dbgDebugLabel = new QLabel(layoutWidget_16);
        dbgDebugLabel->setObjectName(QString::fromUtf8("dbgDebugLabel"));
        sizePolicy3.setHeightForWidth(dbgDebugLabel->sizePolicy().hasHeightForWidth());
        dbgDebugLabel->setSizePolicy(sizePolicy3);
        dbgDebugLabel->setMinimumSize(QSize(60, 25));
        dbgDebugLabel->setFont(font13);
        dbgDebugLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        dbgDebugLabel->setFrameShape(QFrame::Box);
        dbgDebugLabel->setLineWidth(2);
        dbgDebugLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(dbgDebugLabel);

        dbgDebugButton = new QPushButton(layoutWidget_16);
        dbgDebugButton->setObjectName(QString::fromUtf8("dbgDebugButton"));
        sizePolicy3.setHeightForWidth(dbgDebugButton->sizePolicy().hasHeightForWidth());
        dbgDebugButton->setSizePolicy(sizePolicy3);
        dbgDebugButton->setMinimumSize(QSize(55, 27));
        dbgDebugButton->setMaximumSize(QSize(41, 27));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient162(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient162.setSpread(QGradient::PadSpread);
        gradient162.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient162.setColorAt(0, QColor(255, 255, 255, 255));
        gradient162.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush183(gradient162);
        palette50.setBrush(QPalette::Active, QPalette::Button, brush183);
        QBrush brush184(QColor(127, 127, 255, 255));
        brush184.setStyle(Qt::SolidPattern);
        palette50.setBrush(QPalette::Active, QPalette::Light, brush184);
        QBrush brush185(QColor(63, 63, 255, 255));
        brush185.setStyle(Qt::SolidPattern);
        palette50.setBrush(QPalette::Active, QPalette::Midlight, brush185);
        QBrush brush186(QColor(0, 0, 127, 255));
        brush186.setStyle(Qt::SolidPattern);
        palette50.setBrush(QPalette::Active, QPalette::Dark, brush186);
        QBrush brush187(QColor(0, 0, 170, 255));
        brush187.setStyle(Qt::SolidPattern);
        palette50.setBrush(QPalette::Active, QPalette::Mid, brush187);
        palette50.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette50.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient163(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient163.setSpread(QGradient::PadSpread);
        gradient163.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient163.setColorAt(0, QColor(255, 255, 255, 255));
        gradient163.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush188(gradient163);
        palette50.setBrush(QPalette::Active, QPalette::Base, brush188);
        QRadialGradient gradient164(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient164.setSpread(QGradient::PadSpread);
        gradient164.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient164.setColorAt(0, QColor(255, 255, 255, 255));
        gradient164.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush189(gradient164);
        palette50.setBrush(QPalette::Active, QPalette::Window, brush189);
        palette50.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette50.setBrush(QPalette::Active, QPalette::AlternateBase, brush184);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette50.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette50.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient165(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient165.setSpread(QGradient::PadSpread);
        gradient165.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient165.setColorAt(0, QColor(255, 255, 255, 255));
        gradient165.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush190(gradient165);
        palette50.setBrush(QPalette::Inactive, QPalette::Button, brush190);
        palette50.setBrush(QPalette::Inactive, QPalette::Light, brush184);
        palette50.setBrush(QPalette::Inactive, QPalette::Midlight, brush185);
        palette50.setBrush(QPalette::Inactive, QPalette::Dark, brush186);
        palette50.setBrush(QPalette::Inactive, QPalette::Mid, brush187);
        palette50.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette50.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient166(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient166.setSpread(QGradient::PadSpread);
        gradient166.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient166.setColorAt(0, QColor(255, 255, 255, 255));
        gradient166.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush191(gradient166);
        palette50.setBrush(QPalette::Inactive, QPalette::Base, brush191);
        QRadialGradient gradient167(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient167.setSpread(QGradient::PadSpread);
        gradient167.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient167.setColorAt(0, QColor(255, 255, 255, 255));
        gradient167.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush192(gradient167);
        palette50.setBrush(QPalette::Inactive, QPalette::Window, brush192);
        palette50.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette50.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush184);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette50.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette50.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient168(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient168.setSpread(QGradient::PadSpread);
        gradient168.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient168.setColorAt(0, QColor(255, 255, 255, 255));
        gradient168.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush193(gradient168);
        palette50.setBrush(QPalette::Disabled, QPalette::Button, brush193);
        palette50.setBrush(QPalette::Disabled, QPalette::Light, brush184);
        palette50.setBrush(QPalette::Disabled, QPalette::Midlight, brush185);
        palette50.setBrush(QPalette::Disabled, QPalette::Dark, brush186);
        palette50.setBrush(QPalette::Disabled, QPalette::Mid, brush187);
        palette50.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette50.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette50.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient169(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient169.setSpread(QGradient::PadSpread);
        gradient169.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient169.setColorAt(0, QColor(255, 255, 255, 255));
        gradient169.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush194(gradient169);
        palette50.setBrush(QPalette::Disabled, QPalette::Base, brush194);
        QRadialGradient gradient170(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient170.setSpread(QGradient::PadSpread);
        gradient170.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient170.setColorAt(0, QColor(255, 255, 255, 255));
        gradient170.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush195(gradient170);
        palette50.setBrush(QPalette::Disabled, QPalette::Window, brush195);
        palette50.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        QBrush brush196(QColor(0, 0, 255, 255));
        brush196.setStyle(Qt::SolidPattern);
        palette50.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush196);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette50.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        dbgDebugButton->setPalette(palette50);
        dbgDebugButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_16->addWidget(dbgDebugButton);

        dbgInfoLabel = new QLabel(layoutWidget_16);
        dbgInfoLabel->setObjectName(QString::fromUtf8("dbgInfoLabel"));
        sizePolicy3.setHeightForWidth(dbgInfoLabel->sizePolicy().hasHeightForWidth());
        dbgInfoLabel->setSizePolicy(sizePolicy3);
        dbgInfoLabel->setMinimumSize(QSize(60, 25));
        dbgInfoLabel->setFont(font13);
        dbgInfoLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        dbgInfoLabel->setFrameShape(QFrame::Box);
        dbgInfoLabel->setLineWidth(2);
        dbgInfoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(dbgInfoLabel);

        dbgInfoButton = new QPushButton(layoutWidget_16);
        dbgInfoButton->setObjectName(QString::fromUtf8("dbgInfoButton"));
        sizePolicy3.setHeightForWidth(dbgInfoButton->sizePolicy().hasHeightForWidth());
        dbgInfoButton->setSizePolicy(sizePolicy3);
        dbgInfoButton->setMinimumSize(QSize(55, 27));
        dbgInfoButton->setMaximumSize(QSize(41, 27));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient171(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient171.setSpread(QGradient::PadSpread);
        gradient171.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient171.setColorAt(0, QColor(255, 255, 255, 255));
        gradient171.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush197(gradient171);
        palette51.setBrush(QPalette::Active, QPalette::Button, brush197);
        QBrush brush198(QColor(127, 170, 255, 255));
        brush198.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Active, QPalette::Light, brush198);
        QBrush brush199(QColor(63, 127, 255, 255));
        brush199.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Active, QPalette::Midlight, brush199);
        QBrush brush200(QColor(0, 42, 127, 255));
        brush200.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Active, QPalette::Dark, brush200);
        QBrush brush201(QColor(0, 56, 170, 255));
        brush201.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Active, QPalette::Mid, brush201);
        palette51.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette51.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient172(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient172.setSpread(QGradient::PadSpread);
        gradient172.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient172.setColorAt(0, QColor(255, 255, 255, 255));
        gradient172.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush202(gradient172);
        palette51.setBrush(QPalette::Active, QPalette::Base, brush202);
        QRadialGradient gradient173(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient173.setSpread(QGradient::PadSpread);
        gradient173.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient173.setColorAt(0, QColor(255, 255, 255, 255));
        gradient173.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush203(gradient173);
        palette51.setBrush(QPalette::Active, QPalette::Window, brush203);
        palette51.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette51.setBrush(QPalette::Active, QPalette::AlternateBase, brush198);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette51.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette51.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient174(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient174.setSpread(QGradient::PadSpread);
        gradient174.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient174.setColorAt(0, QColor(255, 255, 255, 255));
        gradient174.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush204(gradient174);
        palette51.setBrush(QPalette::Inactive, QPalette::Button, brush204);
        palette51.setBrush(QPalette::Inactive, QPalette::Light, brush198);
        palette51.setBrush(QPalette::Inactive, QPalette::Midlight, brush199);
        palette51.setBrush(QPalette::Inactive, QPalette::Dark, brush200);
        palette51.setBrush(QPalette::Inactive, QPalette::Mid, brush201);
        palette51.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette51.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient175(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient175.setSpread(QGradient::PadSpread);
        gradient175.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient175.setColorAt(0, QColor(255, 255, 255, 255));
        gradient175.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush205(gradient175);
        palette51.setBrush(QPalette::Inactive, QPalette::Base, brush205);
        QRadialGradient gradient176(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient176.setSpread(QGradient::PadSpread);
        gradient176.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient176.setColorAt(0, QColor(255, 255, 255, 255));
        gradient176.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush206(gradient176);
        palette51.setBrush(QPalette::Inactive, QPalette::Window, brush206);
        palette51.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette51.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush198);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette51.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette51.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient177(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient177.setSpread(QGradient::PadSpread);
        gradient177.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient177.setColorAt(0, QColor(255, 255, 255, 255));
        gradient177.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush207(gradient177);
        palette51.setBrush(QPalette::Disabled, QPalette::Button, brush207);
        palette51.setBrush(QPalette::Disabled, QPalette::Light, brush198);
        palette51.setBrush(QPalette::Disabled, QPalette::Midlight, brush199);
        palette51.setBrush(QPalette::Disabled, QPalette::Dark, brush200);
        palette51.setBrush(QPalette::Disabled, QPalette::Mid, brush201);
        palette51.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette51.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette51.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient178(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient178.setSpread(QGradient::PadSpread);
        gradient178.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient178.setColorAt(0, QColor(255, 255, 255, 255));
        gradient178.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush208(gradient178);
        palette51.setBrush(QPalette::Disabled, QPalette::Base, brush208);
        QRadialGradient gradient179(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient179.setSpread(QGradient::PadSpread);
        gradient179.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient179.setColorAt(0, QColor(255, 255, 255, 255));
        gradient179.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush209(gradient179);
        palette51.setBrush(QPalette::Disabled, QPalette::Window, brush209);
        palette51.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        QBrush brush210(QColor(0, 85, 255, 255));
        brush210.setStyle(Qt::SolidPattern);
        palette51.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush210);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette51.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        dbgInfoButton->setPalette(palette51);
        dbgInfoButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_16->addWidget(dbgInfoButton);

        dbgWarnLabel = new QLabel(layoutWidget_16);
        dbgWarnLabel->setObjectName(QString::fromUtf8("dbgWarnLabel"));
        sizePolicy3.setHeightForWidth(dbgWarnLabel->sizePolicy().hasHeightForWidth());
        dbgWarnLabel->setSizePolicy(sizePolicy3);
        dbgWarnLabel->setMinimumSize(QSize(60, 25));
        dbgWarnLabel->setFont(font13);
        dbgWarnLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        dbgWarnLabel->setFrameShape(QFrame::Box);
        dbgWarnLabel->setLineWidth(2);
        dbgWarnLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(dbgWarnLabel);

        dbgWarnButton = new QPushButton(layoutWidget_16);
        dbgWarnButton->setObjectName(QString::fromUtf8("dbgWarnButton"));
        sizePolicy3.setHeightForWidth(dbgWarnButton->sizePolicy().hasHeightForWidth());
        dbgWarnButton->setSizePolicy(sizePolicy3);
        dbgWarnButton->setMinimumSize(QSize(55, 27));
        dbgWarnButton->setMaximumSize(QSize(41, 27));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient180(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient180.setSpread(QGradient::PadSpread);
        gradient180.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient180.setColorAt(0, QColor(255, 255, 255, 255));
        gradient180.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush211(gradient180);
        palette52.setBrush(QPalette::Active, QPalette::Button, brush211);
        palette52.setBrush(QPalette::Active, QPalette::Light, brush198);
        palette52.setBrush(QPalette::Active, QPalette::Midlight, brush199);
        palette52.setBrush(QPalette::Active, QPalette::Dark, brush200);
        palette52.setBrush(QPalette::Active, QPalette::Mid, brush201);
        palette52.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette52.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient181(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient181.setSpread(QGradient::PadSpread);
        gradient181.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient181.setColorAt(0, QColor(255, 255, 255, 255));
        gradient181.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush212(gradient181);
        palette52.setBrush(QPalette::Active, QPalette::Base, brush212);
        QRadialGradient gradient182(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient182.setSpread(QGradient::PadSpread);
        gradient182.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient182.setColorAt(0, QColor(255, 255, 255, 255));
        gradient182.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush213(gradient182);
        palette52.setBrush(QPalette::Active, QPalette::Window, brush213);
        palette52.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette52.setBrush(QPalette::Active, QPalette::AlternateBase, brush198);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette52.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette52.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient183(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient183.setSpread(QGradient::PadSpread);
        gradient183.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient183.setColorAt(0, QColor(255, 255, 255, 255));
        gradient183.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush214(gradient183);
        palette52.setBrush(QPalette::Inactive, QPalette::Button, brush214);
        palette52.setBrush(QPalette::Inactive, QPalette::Light, brush198);
        palette52.setBrush(QPalette::Inactive, QPalette::Midlight, brush199);
        palette52.setBrush(QPalette::Inactive, QPalette::Dark, brush200);
        palette52.setBrush(QPalette::Inactive, QPalette::Mid, brush201);
        palette52.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette52.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient184(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient184.setSpread(QGradient::PadSpread);
        gradient184.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient184.setColorAt(0, QColor(255, 255, 255, 255));
        gradient184.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush215(gradient184);
        palette52.setBrush(QPalette::Inactive, QPalette::Base, brush215);
        QRadialGradient gradient185(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient185.setSpread(QGradient::PadSpread);
        gradient185.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient185.setColorAt(0, QColor(255, 255, 255, 255));
        gradient185.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush216(gradient185);
        palette52.setBrush(QPalette::Inactive, QPalette::Window, brush216);
        palette52.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette52.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush198);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette52.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette52.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient186(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient186.setSpread(QGradient::PadSpread);
        gradient186.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient186.setColorAt(0, QColor(255, 255, 255, 255));
        gradient186.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush217(gradient186);
        palette52.setBrush(QPalette::Disabled, QPalette::Button, brush217);
        palette52.setBrush(QPalette::Disabled, QPalette::Light, brush198);
        palette52.setBrush(QPalette::Disabled, QPalette::Midlight, brush199);
        palette52.setBrush(QPalette::Disabled, QPalette::Dark, brush200);
        palette52.setBrush(QPalette::Disabled, QPalette::Mid, brush201);
        palette52.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette52.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette52.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient187(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient187.setSpread(QGradient::PadSpread);
        gradient187.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient187.setColorAt(0, QColor(255, 255, 255, 255));
        gradient187.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush218(gradient187);
        palette52.setBrush(QPalette::Disabled, QPalette::Base, brush218);
        QRadialGradient gradient188(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient188.setSpread(QGradient::PadSpread);
        gradient188.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient188.setColorAt(0, QColor(255, 255, 255, 255));
        gradient188.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush219(gradient188);
        palette52.setBrush(QPalette::Disabled, QPalette::Window, brush219);
        palette52.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette52.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush210);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette52.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        dbgWarnButton->setPalette(palette52);
        dbgWarnButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_16->addWidget(dbgWarnButton);

        dbgErrorLabel = new QLabel(layoutWidget_16);
        dbgErrorLabel->setObjectName(QString::fromUtf8("dbgErrorLabel"));
        sizePolicy3.setHeightForWidth(dbgErrorLabel->sizePolicy().hasHeightForWidth());
        dbgErrorLabel->setSizePolicy(sizePolicy3);
        dbgErrorLabel->setMinimumSize(QSize(60, 25));
        dbgErrorLabel->setFont(font13);
        dbgErrorLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        dbgErrorLabel->setFrameShape(QFrame::Box);
        dbgErrorLabel->setLineWidth(2);
        dbgErrorLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(dbgErrorLabel);

        dbgErrorButton = new QPushButton(layoutWidget_16);
        dbgErrorButton->setObjectName(QString::fromUtf8("dbgErrorButton"));
        sizePolicy3.setHeightForWidth(dbgErrorButton->sizePolicy().hasHeightForWidth());
        dbgErrorButton->setSizePolicy(sizePolicy3);
        dbgErrorButton->setMinimumSize(QSize(55, 27));
        dbgErrorButton->setMaximumSize(QSize(41, 27));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient189(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient189.setSpread(QGradient::PadSpread);
        gradient189.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient189.setColorAt(0, QColor(255, 255, 255, 255));
        gradient189.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush220(gradient189);
        palette53.setBrush(QPalette::Active, QPalette::Button, brush220);
        palette53.setBrush(QPalette::Active, QPalette::Light, brush198);
        palette53.setBrush(QPalette::Active, QPalette::Midlight, brush199);
        palette53.setBrush(QPalette::Active, QPalette::Dark, brush200);
        palette53.setBrush(QPalette::Active, QPalette::Mid, brush201);
        palette53.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette53.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient190(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient190.setSpread(QGradient::PadSpread);
        gradient190.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient190.setColorAt(0, QColor(255, 255, 255, 255));
        gradient190.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush221(gradient190);
        palette53.setBrush(QPalette::Active, QPalette::Base, brush221);
        QRadialGradient gradient191(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient191.setSpread(QGradient::PadSpread);
        gradient191.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient191.setColorAt(0, QColor(255, 255, 255, 255));
        gradient191.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush222(gradient191);
        palette53.setBrush(QPalette::Active, QPalette::Window, brush222);
        palette53.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette53.setBrush(QPalette::Active, QPalette::AlternateBase, brush198);
        palette53.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette53.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette53.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient192(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient192.setSpread(QGradient::PadSpread);
        gradient192.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient192.setColorAt(0, QColor(255, 255, 255, 255));
        gradient192.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush223(gradient192);
        palette53.setBrush(QPalette::Inactive, QPalette::Button, brush223);
        palette53.setBrush(QPalette::Inactive, QPalette::Light, brush198);
        palette53.setBrush(QPalette::Inactive, QPalette::Midlight, brush199);
        palette53.setBrush(QPalette::Inactive, QPalette::Dark, brush200);
        palette53.setBrush(QPalette::Inactive, QPalette::Mid, brush201);
        palette53.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette53.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient193(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient193.setSpread(QGradient::PadSpread);
        gradient193.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient193.setColorAt(0, QColor(255, 255, 255, 255));
        gradient193.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush224(gradient193);
        palette53.setBrush(QPalette::Inactive, QPalette::Base, brush224);
        QRadialGradient gradient194(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient194.setSpread(QGradient::PadSpread);
        gradient194.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient194.setColorAt(0, QColor(255, 255, 255, 255));
        gradient194.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush225(gradient194);
        palette53.setBrush(QPalette::Inactive, QPalette::Window, brush225);
        palette53.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette53.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush198);
        palette53.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette53.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette53.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient195(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient195.setSpread(QGradient::PadSpread);
        gradient195.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient195.setColorAt(0, QColor(255, 255, 255, 255));
        gradient195.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush226(gradient195);
        palette53.setBrush(QPalette::Disabled, QPalette::Button, brush226);
        palette53.setBrush(QPalette::Disabled, QPalette::Light, brush198);
        palette53.setBrush(QPalette::Disabled, QPalette::Midlight, brush199);
        palette53.setBrush(QPalette::Disabled, QPalette::Dark, brush200);
        palette53.setBrush(QPalette::Disabled, QPalette::Mid, brush201);
        palette53.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette53.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette53.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient196(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient196.setSpread(QGradient::PadSpread);
        gradient196.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient196.setColorAt(0, QColor(255, 255, 255, 255));
        gradient196.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush227(gradient196);
        palette53.setBrush(QPalette::Disabled, QPalette::Base, brush227);
        QRadialGradient gradient197(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient197.setSpread(QGradient::PadSpread);
        gradient197.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient197.setColorAt(0, QColor(255, 255, 255, 255));
        gradient197.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush228(gradient197);
        palette53.setBrush(QPalette::Disabled, QPalette::Window, brush228);
        palette53.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette53.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush210);
        palette53.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette53.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        dbgErrorButton->setPalette(palette53);
        dbgErrorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_16->addWidget(dbgErrorButton);

        dbgFatalLabel = new QLabel(layoutWidget_16);
        dbgFatalLabel->setObjectName(QString::fromUtf8("dbgFatalLabel"));
        sizePolicy3.setHeightForWidth(dbgFatalLabel->sizePolicy().hasHeightForWidth());
        dbgFatalLabel->setSizePolicy(sizePolicy3);
        dbgFatalLabel->setMinimumSize(QSize(60, 25));
        dbgFatalLabel->setFont(font13);
        dbgFatalLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 205, 0,130)\n"
""));
        dbgFatalLabel->setFrameShape(QFrame::Box);
        dbgFatalLabel->setLineWidth(2);
        dbgFatalLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(dbgFatalLabel);

        dbgFatalButton = new QPushButton(layoutWidget_16);
        dbgFatalButton->setObjectName(QString::fromUtf8("dbgFatalButton"));
        sizePolicy3.setHeightForWidth(dbgFatalButton->sizePolicy().hasHeightForWidth());
        dbgFatalButton->setSizePolicy(sizePolicy3);
        dbgFatalButton->setMinimumSize(QSize(55, 27));
        dbgFatalButton->setMaximumSize(QSize(41, 27));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient198(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient198.setSpread(QGradient::PadSpread);
        gradient198.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient198.setColorAt(0, QColor(255, 255, 255, 255));
        gradient198.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush229(gradient198);
        palette54.setBrush(QPalette::Active, QPalette::Button, brush229);
        palette54.setBrush(QPalette::Active, QPalette::Light, brush198);
        palette54.setBrush(QPalette::Active, QPalette::Midlight, brush199);
        palette54.setBrush(QPalette::Active, QPalette::Dark, brush200);
        palette54.setBrush(QPalette::Active, QPalette::Mid, brush201);
        palette54.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette54.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient199(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient199.setSpread(QGradient::PadSpread);
        gradient199.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient199.setColorAt(0, QColor(255, 255, 255, 255));
        gradient199.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush230(gradient199);
        palette54.setBrush(QPalette::Active, QPalette::Base, brush230);
        QRadialGradient gradient200(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient200.setSpread(QGradient::PadSpread);
        gradient200.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient200.setColorAt(0, QColor(255, 255, 255, 255));
        gradient200.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush231(gradient200);
        palette54.setBrush(QPalette::Active, QPalette::Window, brush231);
        palette54.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette54.setBrush(QPalette::Active, QPalette::AlternateBase, brush198);
        palette54.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette54.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette54.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient201(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient201.setSpread(QGradient::PadSpread);
        gradient201.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient201.setColorAt(0, QColor(255, 255, 255, 255));
        gradient201.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush232(gradient201);
        palette54.setBrush(QPalette::Inactive, QPalette::Button, brush232);
        palette54.setBrush(QPalette::Inactive, QPalette::Light, brush198);
        palette54.setBrush(QPalette::Inactive, QPalette::Midlight, brush199);
        palette54.setBrush(QPalette::Inactive, QPalette::Dark, brush200);
        palette54.setBrush(QPalette::Inactive, QPalette::Mid, brush201);
        palette54.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette54.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient202(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient202.setSpread(QGradient::PadSpread);
        gradient202.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient202.setColorAt(0, QColor(255, 255, 255, 255));
        gradient202.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush233(gradient202);
        palette54.setBrush(QPalette::Inactive, QPalette::Base, brush233);
        QRadialGradient gradient203(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient203.setSpread(QGradient::PadSpread);
        gradient203.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient203.setColorAt(0, QColor(255, 255, 255, 255));
        gradient203.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush234(gradient203);
        palette54.setBrush(QPalette::Inactive, QPalette::Window, brush234);
        palette54.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette54.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush198);
        palette54.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette54.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette54.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient204(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient204.setSpread(QGradient::PadSpread);
        gradient204.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient204.setColorAt(0, QColor(255, 255, 255, 255));
        gradient204.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush235(gradient204);
        palette54.setBrush(QPalette::Disabled, QPalette::Button, brush235);
        palette54.setBrush(QPalette::Disabled, QPalette::Light, brush198);
        palette54.setBrush(QPalette::Disabled, QPalette::Midlight, brush199);
        palette54.setBrush(QPalette::Disabled, QPalette::Dark, brush200);
        palette54.setBrush(QPalette::Disabled, QPalette::Mid, brush201);
        palette54.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette54.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette54.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient205(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient205.setSpread(QGradient::PadSpread);
        gradient205.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient205.setColorAt(0, QColor(255, 255, 255, 255));
        gradient205.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush236(gradient205);
        palette54.setBrush(QPalette::Disabled, QPalette::Base, brush236);
        QRadialGradient gradient206(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient206.setSpread(QGradient::PadSpread);
        gradient206.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient206.setColorAt(0, QColor(255, 255, 255, 255));
        gradient206.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush237(gradient206);
        palette54.setBrush(QPalette::Disabled, QPalette::Window, brush237);
        palette54.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette54.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush210);
        palette54.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette54.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        dbgFatalButton->setPalette(palette54);
        dbgFatalButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 41px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_16->addWidget(dbgFatalButton);


        verticalLayout_6->addLayout(horizontalLayout_16);

        line_9 = new QFrame(layoutWidget_16);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setLineWidth(2);
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_9);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_8 = new QSpacerItem(98, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        startConsoleButton = new QPushButton(layoutWidget_16);
        startConsoleButton->setObjectName(QString::fromUtf8("startConsoleButton"));
        sizePolicy3.setHeightForWidth(startConsoleButton->sizePolicy().hasHeightForWidth());
        startConsoleButton->setSizePolicy(sizePolicy3);
        startConsoleButton->setMinimumSize(QSize(94, 27));
        startConsoleButton->setMaximumSize(QSize(117, 27));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient207(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient207.setSpread(QGradient::PadSpread);
        gradient207.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient207.setColorAt(0, QColor(255, 255, 255, 255));
        gradient207.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush238(gradient207);
        palette55.setBrush(QPalette::Active, QPalette::Button, brush238);
        palette55.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette55.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette55.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette55.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette55.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette55.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient208(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient208.setSpread(QGradient::PadSpread);
        gradient208.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient208.setColorAt(0, QColor(255, 255, 255, 255));
        gradient208.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush239(gradient208);
        palette55.setBrush(QPalette::Active, QPalette::Base, brush239);
        QRadialGradient gradient209(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient209.setSpread(QGradient::PadSpread);
        gradient209.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient209.setColorAt(0, QColor(255, 255, 255, 255));
        gradient209.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush240(gradient209);
        palette55.setBrush(QPalette::Active, QPalette::Window, brush240);
        palette55.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette55.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette55.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette55.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette55.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient210(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient210.setSpread(QGradient::PadSpread);
        gradient210.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient210.setColorAt(0, QColor(255, 255, 255, 255));
        gradient210.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush241(gradient210);
        palette55.setBrush(QPalette::Inactive, QPalette::Button, brush241);
        palette55.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette55.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette55.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette55.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette55.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette55.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient211(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient211.setSpread(QGradient::PadSpread);
        gradient211.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient211.setColorAt(0, QColor(255, 255, 255, 255));
        gradient211.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush242(gradient211);
        palette55.setBrush(QPalette::Inactive, QPalette::Base, brush242);
        QRadialGradient gradient212(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient212.setSpread(QGradient::PadSpread);
        gradient212.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient212.setColorAt(0, QColor(255, 255, 255, 255));
        gradient212.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush243(gradient212);
        palette55.setBrush(QPalette::Inactive, QPalette::Window, brush243);
        palette55.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette55.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette55.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette55.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette55.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient213(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient213.setSpread(QGradient::PadSpread);
        gradient213.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient213.setColorAt(0, QColor(255, 255, 255, 255));
        gradient213.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush244(gradient213);
        palette55.setBrush(QPalette::Disabled, QPalette::Button, brush244);
        palette55.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette55.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette55.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette55.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette55.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette55.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette55.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient214(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient214.setSpread(QGradient::PadSpread);
        gradient214.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient214.setColorAt(0, QColor(255, 255, 255, 255));
        gradient214.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush245(gradient214);
        palette55.setBrush(QPalette::Disabled, QPalette::Base, brush245);
        QRadialGradient gradient215(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient215.setSpread(QGradient::PadSpread);
        gradient215.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient215.setColorAt(0, QColor(255, 255, 255, 255));
        gradient215.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush246(gradient215);
        palette55.setBrush(QPalette::Disabled, QPalette::Window, brush246);
        palette55.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette55.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette55.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette55.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        startConsoleButton->setPalette(palette55);
        startConsoleButton->setFont(font13);
        startConsoleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        startConsoleButton->setAutoDefault(false);
        startConsoleButton->setDefault(false);
        startConsoleButton->setFlat(false);

        horizontalLayout_13->addWidget(startConsoleButton);

        horizontalSpacer_7 = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        clearConsoleButton = new QPushButton(layoutWidget_16);
        clearConsoleButton->setObjectName(QString::fromUtf8("clearConsoleButton"));
        sizePolicy3.setHeightForWidth(clearConsoleButton->sizePolicy().hasHeightForWidth());
        clearConsoleButton->setSizePolicy(sizePolicy3);
        clearConsoleButton->setMinimumSize(QSize(94, 27));
        clearConsoleButton->setMaximumSize(QSize(85, 27));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient216(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient216.setSpread(QGradient::PadSpread);
        gradient216.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient216.setColorAt(0, QColor(255, 255, 255, 255));
        gradient216.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush247(gradient216);
        palette56.setBrush(QPalette::Active, QPalette::Button, brush247);
        palette56.setBrush(QPalette::Active, QPalette::Light, brush68);
        palette56.setBrush(QPalette::Active, QPalette::Midlight, brush69);
        palette56.setBrush(QPalette::Active, QPalette::Dark, brush70);
        palette56.setBrush(QPalette::Active, QPalette::Mid, brush71);
        palette56.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette56.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient217(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient217.setSpread(QGradient::PadSpread);
        gradient217.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient217.setColorAt(0, QColor(255, 255, 255, 255));
        gradient217.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush248(gradient217);
        palette56.setBrush(QPalette::Active, QPalette::Base, brush248);
        QRadialGradient gradient218(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient218.setSpread(QGradient::PadSpread);
        gradient218.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient218.setColorAt(0, QColor(255, 255, 255, 255));
        gradient218.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush249(gradient218);
        palette56.setBrush(QPalette::Active, QPalette::Window, brush249);
        palette56.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette56.setBrush(QPalette::Active, QPalette::AlternateBase, brush74);
        palette56.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette56.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette56.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient219(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient219.setSpread(QGradient::PadSpread);
        gradient219.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient219.setColorAt(0, QColor(255, 255, 255, 255));
        gradient219.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush250(gradient219);
        palette56.setBrush(QPalette::Inactive, QPalette::Button, brush250);
        palette56.setBrush(QPalette::Inactive, QPalette::Light, brush68);
        palette56.setBrush(QPalette::Inactive, QPalette::Midlight, brush69);
        palette56.setBrush(QPalette::Inactive, QPalette::Dark, brush70);
        palette56.setBrush(QPalette::Inactive, QPalette::Mid, brush71);
        palette56.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette56.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient220(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient220.setSpread(QGradient::PadSpread);
        gradient220.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient220.setColorAt(0, QColor(255, 255, 255, 255));
        gradient220.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush251(gradient220);
        palette56.setBrush(QPalette::Inactive, QPalette::Base, brush251);
        QRadialGradient gradient221(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient221.setSpread(QGradient::PadSpread);
        gradient221.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient221.setColorAt(0, QColor(255, 255, 255, 255));
        gradient221.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush252(gradient221);
        palette56.setBrush(QPalette::Inactive, QPalette::Window, brush252);
        palette56.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette56.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush74);
        palette56.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette56.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette56.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient222(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient222.setSpread(QGradient::PadSpread);
        gradient222.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient222.setColorAt(0, QColor(255, 255, 255, 255));
        gradient222.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush253(gradient222);
        palette56.setBrush(QPalette::Disabled, QPalette::Button, brush253);
        palette56.setBrush(QPalette::Disabled, QPalette::Light, brush68);
        palette56.setBrush(QPalette::Disabled, QPalette::Midlight, brush69);
        palette56.setBrush(QPalette::Disabled, QPalette::Dark, brush70);
        palette56.setBrush(QPalette::Disabled, QPalette::Mid, brush71);
        palette56.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette56.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette56.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient223(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient223.setSpread(QGradient::PadSpread);
        gradient223.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient223.setColorAt(0, QColor(255, 255, 255, 255));
        gradient223.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush254(gradient223);
        palette56.setBrush(QPalette::Disabled, QPalette::Base, brush254);
        QRadialGradient gradient224(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient224.setSpread(QGradient::PadSpread);
        gradient224.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient224.setColorAt(0, QColor(255, 255, 255, 255));
        gradient224.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush255(gradient224);
        palette56.setBrush(QPalette::Disabled, QPalette::Window, brush255);
        palette56.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette56.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush81);
        palette56.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette56.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        clearConsoleButton->setPalette(palette56);
        clearConsoleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_13->addWidget(clearConsoleButton);

        horizontalSpacer_10 = new QSpacerItem(38, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_10);

        stopConsoleButton = new QPushButton(layoutWidget_16);
        stopConsoleButton->setObjectName(QString::fromUtf8("stopConsoleButton"));
        sizePolicy3.setHeightForWidth(stopConsoleButton->sizePolicy().hasHeightForWidth());
        stopConsoleButton->setSizePolicy(sizePolicy3);
        stopConsoleButton->setMinimumSize(QSize(94, 27));
        stopConsoleButton->setMaximumSize(QSize(102, 27));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::WindowText, brush12);
        QRadialGradient gradient225(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient225.setSpread(QGradient::PadSpread);
        gradient225.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient225.setColorAt(0, QColor(255, 255, 255, 255));
        gradient225.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush256(gradient225);
        palette57.setBrush(QPalette::Active, QPalette::Button, brush256);
        palette57.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette57.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette57.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette57.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette57.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette57.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        QRadialGradient gradient226(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient226.setSpread(QGradient::PadSpread);
        gradient226.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient226.setColorAt(0, QColor(255, 255, 255, 255));
        gradient226.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush257(gradient226);
        palette57.setBrush(QPalette::Active, QPalette::Base, brush257);
        QRadialGradient gradient227(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient227.setSpread(QGradient::PadSpread);
        gradient227.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient227.setColorAt(0, QColor(255, 255, 255, 255));
        gradient227.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush258(gradient227);
        palette57.setBrush(QPalette::Active, QPalette::Window, brush258);
        palette57.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette57.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette57.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette57.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette57.setBrush(QPalette::Inactive, QPalette::WindowText, brush12);
        QRadialGradient gradient228(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient228.setSpread(QGradient::PadSpread);
        gradient228.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient228.setColorAt(0, QColor(255, 255, 255, 255));
        gradient228.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush259(gradient228);
        palette57.setBrush(QPalette::Inactive, QPalette::Button, brush259);
        palette57.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette57.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette57.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette57.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette57.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette57.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        QRadialGradient gradient229(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient229.setSpread(QGradient::PadSpread);
        gradient229.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient229.setColorAt(0, QColor(255, 255, 255, 255));
        gradient229.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush260(gradient229);
        palette57.setBrush(QPalette::Inactive, QPalette::Base, brush260);
        QRadialGradient gradient230(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient230.setSpread(QGradient::PadSpread);
        gradient230.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient230.setColorAt(0, QColor(255, 255, 255, 255));
        gradient230.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush261(gradient230);
        palette57.setBrush(QPalette::Inactive, QPalette::Window, brush261);
        palette57.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette57.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette57.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette57.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette57.setBrush(QPalette::Disabled, QPalette::WindowText, brush12);
        QRadialGradient gradient231(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient231.setSpread(QGradient::PadSpread);
        gradient231.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient231.setColorAt(0, QColor(255, 255, 255, 255));
        gradient231.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush262(gradient231);
        palette57.setBrush(QPalette::Disabled, QPalette::Button, brush262);
        palette57.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette57.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette57.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette57.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette57.setBrush(QPalette::Disabled, QPalette::Text, brush12);
        palette57.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette57.setBrush(QPalette::Disabled, QPalette::ButtonText, brush12);
        QRadialGradient gradient232(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient232.setSpread(QGradient::PadSpread);
        gradient232.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient232.setColorAt(0, QColor(255, 255, 255, 255));
        gradient232.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush263(gradient232);
        palette57.setBrush(QPalette::Disabled, QPalette::Base, brush263);
        QRadialGradient gradient233(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient233.setSpread(QGradient::PadSpread);
        gradient233.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient233.setColorAt(0, QColor(255, 255, 255, 255));
        gradient233.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush264(gradient233);
        palette57.setBrush(QPalette::Disabled, QPalette::Window, brush264);
        palette57.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette57.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette57.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette57.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        stopConsoleButton->setPalette(palette57);
        stopConsoleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));

        horizontalLayout_13->addWidget(stopConsoleButton);

        horizontalSpacer_9 = new QSpacerItem(98, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_13);

        line_10 = new QFrame(layoutWidget_16);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setLineWidth(2);
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_10);

        line_17 = new QFrame(tab_3);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(0, 340, 291, 16));
        line_17->setFrameShape(QFrame::HLine);
        line_17->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 349, 289, 293));
        groupBox_3->setStyleSheet(QString::fromUtf8("background:  rgb(160, 160, 160)"));
        groupBox_3->setCheckable(true);
        groupBox_3->setChecked(false);
        motorSpeedLabel_3 = new QLabel(groupBox_3);
        motorSpeedLabel_3->setObjectName(QString::fromUtf8("motorSpeedLabel_3"));
        motorSpeedLabel_3->setGeometry(QRect(28, 10, 231, 30));
        sizePolicy3.setHeightForWidth(motorSpeedLabel_3->sizePolicy().hasHeightForWidth());
        motorSpeedLabel_3->setSizePolicy(sizePolicy3);
        motorSpeedLabel_3->setMinimumSize(QSize(0, 0));
        motorSpeedLabel_3->setMaximumSize(QSize(248, 30));
        motorSpeedLabel_3->setFont(font3);
        motorSpeedLabel_3->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(0, 85, 255,130)\n"
""));
        motorSpeedLabel_3->setFrameShape(QFrame::Box);
        motorSpeedLabel_3->setFrameShadow(QFrame::Raised);
        motorSpeedLabel_3->setLineWidth(2);
        motorSpeedLabel_3->setAlignment(Qt::AlignCenter);
        frame_9 = new QFrame(groupBox_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(19, 49, 247, 98));
        frame_9->setStyleSheet(QString::fromUtf8("background: rgba(255,255,255,200)"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        topFrame_3 = new QFrame(frame_9);
        topFrame_3->setObjectName(QString::fromUtf8("topFrame_3"));
        topFrame_3->setGeometry(QRect(6, 10, 187, 30));
        topFrame_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_3->setFrameShape(QFrame::StyledPanel);
        topFrame_3->setFrameShadow(QFrame::Raised);
        topFrame_3->setLineWidth(2);
        misionNameLabel_2 = new QLabel(topFrame_3);
        misionNameLabel_2->setObjectName(QString::fromUtf8("misionNameLabel_2"));
        misionNameLabel_2->setGeometry(QRect(6, 6, 129, 17));
        misionNameLabel_2->setFont(font13);
        misionNameLabel_2->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_2->setAlignment(Qt::AlignCenter);
        topFrame_5 = new QFrame(topFrame_3);
        topFrame_5->setObjectName(QString::fromUtf8("topFrame_5"));
        topFrame_5->setGeometry(QRect(0, 0, 187, 30));
        topFrame_5->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_5->setFrameShape(QFrame::StyledPanel);
        topFrame_5->setFrameShadow(QFrame::Raised);
        topFrame_5->setLineWidth(2);
        misionNameLabel_4 = new QLabel(topFrame_5);
        misionNameLabel_4->setObjectName(QString::fromUtf8("misionNameLabel_4"));
        misionNameLabel_4->setGeometry(QRect(6, 5, 129, 22));
        misionNameLabel_4->setFont(font13);
        misionNameLabel_4->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_4->setAlignment(Qt::AlignCenter);
        soundExistenceDbgLabel = new QLabel(topFrame_5);
        soundExistenceDbgLabel->setObjectName(QString::fromUtf8("soundExistenceDbgLabel"));
        soundExistenceDbgLabel->setGeometry(QRect(140, 5, 44, 21));
        soundExistenceDbgLabel->setFont(font13);
        soundExistenceDbgLabel->setStyleSheet(QString::fromUtf8("background: white; color: green"));
        soundExistenceDbgLabel->setAlignment(Qt::AlignCenter);
        soundExistProbPogressBar = new QProgressBar(frame_9);
        soundExistProbPogressBar->setObjectName(QString::fromUtf8("soundExistProbPogressBar"));
        soundExistProbPogressBar->setGeometry(QRect(200, 10, 41, 81));
        soundExistProbPogressBar->setValue(0);
        soundExistProbPogressBar->setOrientation(Qt::Vertical);
        topFrame_6 = new QFrame(frame_9);
        topFrame_6->setObjectName(QString::fromUtf8("topFrame_6"));
        topFrame_6->setGeometry(QRect(6, 60, 187, 30));
        topFrame_6->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_6->setFrameShape(QFrame::StyledPanel);
        topFrame_6->setFrameShadow(QFrame::Raised);
        topFrame_6->setLineWidth(2);
        misionNameLabel_6 = new QLabel(topFrame_6);
        misionNameLabel_6->setObjectName(QString::fromUtf8("misionNameLabel_6"));
        misionNameLabel_6->setGeometry(QRect(6, 4, 181, 22));
        misionNameLabel_6->setFont(font13);
        misionNameLabel_6->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_11 = new QFrame(groupBox_3);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(19, 152, 247, 98));
        frame_11->setStyleSheet(QString::fromUtf8("background: rgba(255,255,255,200)"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        topFrame_8 = new QFrame(frame_11);
        topFrame_8->setObjectName(QString::fromUtf8("topFrame_8"));
        topFrame_8->setGeometry(QRect(6, 10, 187, 30));
        topFrame_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_8->setFrameShape(QFrame::StyledPanel);
        topFrame_8->setFrameShadow(QFrame::Raised);
        topFrame_8->setLineWidth(2);
        soundExistenceLabel_6 = new QLineEdit(topFrame_8);
        soundExistenceLabel_6->setObjectName(QString::fromUtf8("soundExistenceLabel_6"));
        soundExistenceLabel_6->setGeometry(QRect(139, 2, 41, 25));
        soundExistenceLabel_6->setFont(font13);
        soundExistenceLabel_6->setStyleSheet(QString::fromUtf8("background: white; color: green"));
        misionNameLabel_8 = new QLabel(topFrame_8);
        misionNameLabel_8->setObjectName(QString::fromUtf8("misionNameLabel_8"));
        misionNameLabel_8->setGeometry(QRect(6, 6, 129, 17));
        misionNameLabel_8->setFont(font13);
        misionNameLabel_8->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_8->setAlignment(Qt::AlignCenter);
        topFrame_9 = new QFrame(topFrame_8);
        topFrame_9->setObjectName(QString::fromUtf8("topFrame_9"));
        topFrame_9->setGeometry(QRect(0, 0, 187, 30));
        topFrame_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_9->setFrameShape(QFrame::StyledPanel);
        topFrame_9->setFrameShadow(QFrame::Raised);
        topFrame_9->setLineWidth(2);
        misionNameLabel_9 = new QLabel(topFrame_9);
        misionNameLabel_9->setObjectName(QString::fromUtf8("misionNameLabel_9"));
        misionNameLabel_9->setGeometry(QRect(6, 5, 129, 22));
        misionNameLabel_9->setFont(font13);
        misionNameLabel_9->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_9->setAlignment(Qt::AlignCenter);
        soundDirLabel = new QLabel(topFrame_9);
        soundDirLabel->setObjectName(QString::fromUtf8("soundDirLabel"));
        soundDirLabel->setGeometry(QRect(140, 4, 44, 21));
        soundDirLabel->setFont(font13);
        soundDirLabel->setStyleSheet(QString::fromUtf8("background: white; color: green"));
        soundDirLabel->setAlignment(Qt::AlignCenter);
        soundDirProbPogressBar = new QProgressBar(frame_11);
        soundDirProbPogressBar->setObjectName(QString::fromUtf8("soundDirProbPogressBar"));
        soundDirProbPogressBar->setGeometry(QRect(200, 10, 41, 81));
        soundDirProbPogressBar->setValue(0);
        soundDirProbPogressBar->setOrientation(Qt::Vertical);
        topFrame_10 = new QFrame(frame_11);
        topFrame_10->setObjectName(QString::fromUtf8("topFrame_10"));
        topFrame_10->setGeometry(QRect(6, 60, 187, 30));
        topFrame_10->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_10->setFrameShape(QFrame::StyledPanel);
        topFrame_10->setFrameShadow(QFrame::Raised);
        topFrame_10->setLineWidth(2);
        misionNameLabel_10 = new QLabel(topFrame_10);
        misionNameLabel_10->setObjectName(QString::fromUtf8("misionNameLabel_10"));
        misionNameLabel_10->setGeometry(QRect(6, 4, 181, 22));
        misionNameLabel_10->setFont(font13);
        misionNameLabel_10->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_23 = new QFrame(groupBox_3);
        line_23->setObjectName(QString::fromUtf8("line_23"));
        line_23->setGeometry(QRect(0, 40, 290, 3));
        line_23->setFrameShadow(QFrame::Plain);
        line_23->setFrameShape(QFrame::HLine);
        testSoundButton = new QPushButton(tab_3);
        testSoundButton->setObjectName(QString::fromUtf8("testSoundButton"));
        testSoundButton->setGeometry(QRect(70, 609, 151, 27));
        checkSensorsGroupBox = new QGroupBox(tab_3);
        checkSensorsGroupBox->setObjectName(QString::fromUtf8("checkSensorsGroupBox"));
        checkSensorsGroupBox->setGeometry(QRect(0, 644, 1431, 124));
        checkSensorsGroupBox->setStyleSheet(QString::fromUtf8("background: rgba(0,0,0,250)"));
        checkSensorsGroupBox->setCheckable(true);
        checkSensorsGroupBox->setChecked(false);
        motorSpeedLabel_4 = new QLabel(checkSensorsGroupBox);
        motorSpeedLabel_4->setObjectName(QString::fromUtf8("motorSpeedLabel_4"));
        motorSpeedLabel_4->setGeometry(QRect(20, 10, 121, 101));
        sizePolicy3.setHeightForWidth(motorSpeedLabel_4->sizePolicy().hasHeightForWidth());
        motorSpeedLabel_4->setSizePolicy(sizePolicy3);
        motorSpeedLabel_4->setMinimumSize(QSize(0, 0));
        motorSpeedLabel_4->setMaximumSize(QSize(500, 500));
        motorSpeedLabel_4->setFont(font3);
        motorSpeedLabel_4->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(50, 90, 190,130)\n"
""));
        motorSpeedLabel_4->setFrameShape(QFrame::Box);
        motorSpeedLabel_4->setFrameShadow(QFrame::Raised);
        motorSpeedLabel_4->setLineWidth(2);
        motorSpeedLabel_4->setAlignment(Qt::AlignCenter);
        layoutWidget7 = new QWidget(checkSensorsGroupBox);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(170, 10, 1231, 103));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_24->setSpacing(15);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(layoutWidget7);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        sizePolicy3.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy3);
        frame_13->setMinimumSize(QSize(191, 101));
        frame_13->setMaximumSize(QSize(191, 101));
        frame_13->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        topFrame_4 = new QFrame(frame_13);
        topFrame_4->setObjectName(QString::fromUtf8("topFrame_4"));
        topFrame_4->setGeometry(QRect(6, 20, 121, 30));
        topFrame_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_4->setFrameShape(QFrame::StyledPanel);
        topFrame_4->setFrameShadow(QFrame::Raised);
        topFrame_4->setLineWidth(2);
        misionNameLabel_3 = new QLabel(topFrame_4);
        misionNameLabel_3->setObjectName(QString::fromUtf8("misionNameLabel_3"));
        misionNameLabel_3->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_3->setFont(font13);
        misionNameLabel_3->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_3->setAlignment(Qt::AlignCenter);
        mlxProgressbar = new QProgressBar(frame_13);
        mlxProgressbar->setObjectName(QString::fromUtf8("mlxProgressbar"));
        mlxProgressbar->setGeometry(QRect(140, 10, 41, 81));
        mlxProgressbar->setValue(0);
        mlxProgressbar->setOrientation(Qt::Vertical);
        mlxDbgLCD = new QLCDNumber(frame_13);
        mlxDbgLCD->setObjectName(QString::fromUtf8("mlxDbgLCD"));
        mlxDbgLCD->setGeometry(QRect(40, 59, 61, 31));
        sizePolicy3.setHeightForWidth(mlxDbgLCD->sizePolicy().hasHeightForWidth());
        mlxDbgLCD->setSizePolicy(sizePolicy3);
        mlxDbgLCD->setMinimumSize(QSize(0, 0));
        mlxDbgLCD->setBaseSize(QSize(0, 0));
        mlxDbgLCD->setFont(font3);
        mlxDbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        mlxDbgLCD->setSmallDecimalPoint(true);
        mlxDbgLCD->setNumDigits(3);
        mlxDbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_13);

        frame_14 = new QFrame(layoutWidget7);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        sizePolicy3.setHeightForWidth(frame_14->sizePolicy().hasHeightForWidth());
        frame_14->setSizePolicy(sizePolicy3);
        frame_14->setMinimumSize(QSize(191, 101));
        frame_14->setMaximumSize(QSize(191, 101));
        frame_14->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        topFrame_11 = new QFrame(frame_14);
        topFrame_11->setObjectName(QString::fromUtf8("topFrame_11"));
        topFrame_11->setGeometry(QRect(6, 20, 121, 30));
        topFrame_11->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_11->setFrameShape(QFrame::StyledPanel);
        topFrame_11->setFrameShadow(QFrame::Raised);
        topFrame_11->setLineWidth(2);
        misionNameLabel_7 = new QLabel(topFrame_11);
        misionNameLabel_7->setObjectName(QString::fromUtf8("misionNameLabel_7"));
        misionNameLabel_7->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_7->setFont(font13);
        misionNameLabel_7->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_7->setAlignment(Qt::AlignCenter);
        co2Progressbar = new QProgressBar(frame_14);
        co2Progressbar->setObjectName(QString::fromUtf8("co2Progressbar"));
        co2Progressbar->setGeometry(QRect(140, 10, 41, 81));
        co2Progressbar->setValue(0);
        co2Progressbar->setOrientation(Qt::Vertical);
        co2DbgLCD = new QLCDNumber(frame_14);
        co2DbgLCD->setObjectName(QString::fromUtf8("co2DbgLCD"));
        co2DbgLCD->setGeometry(QRect(40, 60, 61, 31));
        sizePolicy3.setHeightForWidth(co2DbgLCD->sizePolicy().hasHeightForWidth());
        co2DbgLCD->setSizePolicy(sizePolicy3);
        co2DbgLCD->setMinimumSize(QSize(0, 0));
        co2DbgLCD->setBaseSize(QSize(0, 0));
        co2DbgLCD->setFont(font3);
        co2DbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        co2DbgLCD->setSmallDecimalPoint(true);
        co2DbgLCD->setNumDigits(3);
        co2DbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_14);

        frame_15 = new QFrame(layoutWidget7);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        sizePolicy3.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy3);
        frame_15->setMinimumSize(QSize(191, 101));
        frame_15->setMaximumSize(QSize(191, 101));
        frame_15->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        topFrame_12 = new QFrame(frame_15);
        topFrame_12->setObjectName(QString::fromUtf8("topFrame_12"));
        topFrame_12->setGeometry(QRect(6, 20, 121, 30));
        topFrame_12->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_12->setFrameShape(QFrame::StyledPanel);
        topFrame_12->setFrameShadow(QFrame::Raised);
        topFrame_12->setLineWidth(2);
        misionNameLabel_11 = new QLabel(topFrame_12);
        misionNameLabel_11->setObjectName(QString::fromUtf8("misionNameLabel_11"));
        misionNameLabel_11->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_11->setFont(font13);
        misionNameLabel_11->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_11->setAlignment(Qt::AlignCenter);
        soundProgressbar = new QProgressBar(frame_15);
        soundProgressbar->setObjectName(QString::fromUtf8("soundProgressbar"));
        soundProgressbar->setGeometry(QRect(140, 10, 41, 81));
        soundProgressbar->setValue(0);
        soundProgressbar->setOrientation(Qt::Vertical);
        soundDbgLCD = new QLCDNumber(frame_15);
        soundDbgLCD->setObjectName(QString::fromUtf8("soundDbgLCD"));
        soundDbgLCD->setGeometry(QRect(40, 59, 61, 31));
        sizePolicy3.setHeightForWidth(soundDbgLCD->sizePolicy().hasHeightForWidth());
        soundDbgLCD->setSizePolicy(sizePolicy3);
        soundDbgLCD->setMinimumSize(QSize(0, 0));
        soundDbgLCD->setBaseSize(QSize(0, 0));
        soundDbgLCD->setFont(font3);
        soundDbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        soundDbgLCD->setSmallDecimalPoint(true);
        soundDbgLCD->setNumDigits(3);
        soundDbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_15);

        frame_16 = new QFrame(layoutWidget7);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        sizePolicy3.setHeightForWidth(frame_16->sizePolicy().hasHeightForWidth());
        frame_16->setSizePolicy(sizePolicy3);
        frame_16->setMinimumSize(QSize(191, 101));
        frame_16->setMaximumSize(QSize(191, 101));
        frame_16->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        topFrame_13 = new QFrame(frame_16);
        topFrame_13->setObjectName(QString::fromUtf8("topFrame_13"));
        topFrame_13->setGeometry(QRect(6, 20, 121, 30));
        topFrame_13->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_13->setFrameShape(QFrame::StyledPanel);
        topFrame_13->setFrameShadow(QFrame::Raised);
        topFrame_13->setLineWidth(2);
        misionNameLabel_12 = new QLabel(topFrame_13);
        misionNameLabel_12->setObjectName(QString::fromUtf8("misionNameLabel_12"));
        misionNameLabel_12->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_12->setFont(font13);
        misionNameLabel_12->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_12->setAlignment(Qt::AlignCenter);
        skinProgressbar = new QProgressBar(frame_16);
        skinProgressbar->setObjectName(QString::fromUtf8("skinProgressbar"));
        skinProgressbar->setGeometry(QRect(140, 10, 41, 81));
        skinProgressbar->setValue(0);
        skinProgressbar->setOrientation(Qt::Vertical);
        skinDbgLCD = new QLCDNumber(frame_16);
        skinDbgLCD->setObjectName(QString::fromUtf8("skinDbgLCD"));
        skinDbgLCD->setGeometry(QRect(40, 59, 61, 31));
        sizePolicy3.setHeightForWidth(skinDbgLCD->sizePolicy().hasHeightForWidth());
        skinDbgLCD->setSizePolicy(sizePolicy3);
        skinDbgLCD->setMinimumSize(QSize(0, 0));
        skinDbgLCD->setBaseSize(QSize(0, 0));
        skinDbgLCD->setFont(font3);
        skinDbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        skinDbgLCD->setSmallDecimalPoint(true);
        skinDbgLCD->setNumDigits(3);
        skinDbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_16);

        frame_17 = new QFrame(layoutWidget7);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        sizePolicy3.setHeightForWidth(frame_17->sizePolicy().hasHeightForWidth());
        frame_17->setSizePolicy(sizePolicy3);
        frame_17->setMinimumSize(QSize(191, 101));
        frame_17->setMaximumSize(QSize(191, 101));
        frame_17->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        topFrame_14 = new QFrame(frame_17);
        topFrame_14->setObjectName(QString::fromUtf8("topFrame_14"));
        topFrame_14->setGeometry(QRect(6, 20, 121, 30));
        topFrame_14->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_14->setFrameShape(QFrame::StyledPanel);
        topFrame_14->setFrameShadow(QFrame::Raised);
        topFrame_14->setLineWidth(2);
        misionNameLabel_13 = new QLabel(topFrame_14);
        misionNameLabel_13->setObjectName(QString::fromUtf8("misionNameLabel_13"));
        misionNameLabel_13->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_13->setFont(font13);
        misionNameLabel_13->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_13->setAlignment(Qt::AlignCenter);
        motionProgressbar = new QProgressBar(frame_17);
        motionProgressbar->setObjectName(QString::fromUtf8("motionProgressbar"));
        motionProgressbar->setGeometry(QRect(140, 10, 41, 81));
        motionProgressbar->setValue(0);
        motionProgressbar->setOrientation(Qt::Vertical);
        motionDbgLCD = new QLCDNumber(frame_17);
        motionDbgLCD->setObjectName(QString::fromUtf8("motionDbgLCD"));
        motionDbgLCD->setGeometry(QRect(40, 59, 61, 31));
        sizePolicy3.setHeightForWidth(motionDbgLCD->sizePolicy().hasHeightForWidth());
        motionDbgLCD->setSizePolicy(sizePolicy3);
        motionDbgLCD->setMinimumSize(QSize(0, 0));
        motionDbgLCD->setBaseSize(QSize(0, 0));
        motionDbgLCD->setFont(font3);
        motionDbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        motionDbgLCD->setSmallDecimalPoint(true);
        motionDbgLCD->setNumDigits(3);
        motionDbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_17);

        frame_18 = new QFrame(layoutWidget7);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        sizePolicy3.setHeightForWidth(frame_18->sizePolicy().hasHeightForWidth());
        frame_18->setSizePolicy(sizePolicy3);
        frame_18->setMinimumSize(QSize(191, 101));
        frame_18->setMaximumSize(QSize(191, 101));
        frame_18->setStyleSheet(QString::fromUtf8("background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        topFrame_15 = new QFrame(frame_18);
        topFrame_15->setObjectName(QString::fromUtf8("topFrame_15"));
        topFrame_15->setGeometry(QRect(6, 20, 121, 30));
        topFrame_15->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        topFrame_15->setFrameShape(QFrame::StyledPanel);
        topFrame_15->setFrameShadow(QFrame::Raised);
        topFrame_15->setLineWidth(2);
        misionNameLabel_14 = new QLabel(topFrame_15);
        misionNameLabel_14->setObjectName(QString::fromUtf8("misionNameLabel_14"));
        misionNameLabel_14->setGeometry(QRect(0, 0, 121, 31));
        misionNameLabel_14->setFont(font13);
        misionNameLabel_14->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_14->setAlignment(Qt::AlignCenter);
        faceProgressbar = new QProgressBar(frame_18);
        faceProgressbar->setObjectName(QString::fromUtf8("faceProgressbar"));
        faceProgressbar->setGeometry(QRect(140, 10, 41, 81));
        faceProgressbar->setValue(0);
        faceProgressbar->setOrientation(Qt::Vertical);
        faceDbgLCD = new QLCDNumber(frame_18);
        faceDbgLCD->setObjectName(QString::fromUtf8("faceDbgLCD"));
        faceDbgLCD->setGeometry(QRect(40, 59, 61, 31));
        sizePolicy3.setHeightForWidth(faceDbgLCD->sizePolicy().hasHeightForWidth());
        faceDbgLCD->setSizePolicy(sizePolicy3);
        faceDbgLCD->setMinimumSize(QSize(0, 0));
        faceDbgLCD->setBaseSize(QSize(0, 0));
        faceDbgLCD->setFont(font3);
        faceDbgLCD->setStyleSheet(QString::fromUtf8("color: red;background: rgba(255, 255,255,200);"));
        faceDbgLCD->setSmallDecimalPoint(true);
        faceDbgLCD->setNumDigits(3);
        faceDbgLCD->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_24->addWidget(frame_18);

        tabWidget->addTab(tab_3, QString());
        layoutWidget8 = new QWidget(pandoraGui);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(0, 0, 2, 2));
        gridLayout_10 = new QGridLayout(layoutWidget8);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        topFrame = new QFrame(pandoraGui);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setGeometry(QRect(293, 0, 1151, 30));
        topFrame->setStyleSheet(QString::fromUtf8("#topFrame {border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);}\n"
"\n"
""));
        topFrame->setFrameShape(QFrame::StyledPanel);
        topFrame->setFrameShadow(QFrame::Raised);
        topFrame->setLineWidth(2);
        line_20 = new QFrame(topFrame);
        line_20->setObjectName(QString::fromUtf8("line_20"));
        line_20->setGeometry(QRect(630, 0, 3, 30));
        line_20->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255)"));
        line_20->setFrameShadow(QFrame::Plain);
        line_20->setLineWidth(3);
        line_20->setFrameShape(QFrame::VLine);
        layoutWidget9 = new QWidget(topFrame);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(130, 0, 96, 30));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        timeElapsedMinutesLCD = new QLCDNumber(layoutWidget9);
        timeElapsedMinutesLCD->setObjectName(QString::fromUtf8("timeElapsedMinutesLCD"));
        timeElapsedMinutesLCD->setStyleSheet(QString::fromUtf8("color: yellow;\n"
"background: grey"));
        timeElapsedMinutesLCD->setFrameShadow(QFrame::Sunken);
        timeElapsedMinutesLCD->setNumDigits(2);

        horizontalLayout_7->addWidget(timeElapsedMinutesLCD);

        label_17 = new QLabel(layoutWidget9);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font28;
        font28.setPointSize(15);
        font28.setBold(true);
        font28.setWeight(75);
        label_17->setFont(font28);
        label_17->setStyleSheet(QString::fromUtf8("color: yellow;\n"
"background: grey"));
        label_17->setFrameShape(QFrame::Box);
        label_17->setFrameShadow(QFrame::Sunken);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_17);

        timeElapsedSecondsLCD = new QLCDNumber(layoutWidget9);
        timeElapsedSecondsLCD->setObjectName(QString::fromUtf8("timeElapsedSecondsLCD"));
        timeElapsedSecondsLCD->setStyleSheet(QString::fromUtf8("color: yellow;\n"
"background: grey"));
        timeElapsedSecondsLCD->setFrameShadow(QFrame::Sunken);
        timeElapsedSecondsLCD->setNumDigits(2);

        horizontalLayout_7->addWidget(timeElapsedSecondsLCD);

        line_22 = new QFrame(topFrame);
        line_22->setObjectName(QString::fromUtf8("line_22"));
        line_22->setGeometry(QRect(745, 0, 3, 30));
        line_22->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255)"));
        line_22->setFrameShadow(QFrame::Plain);
        line_22->setLineWidth(3);
        line_22->setFrameShape(QFrame::VLine);
        forceModeOffButton = new QPushButton(topFrame);
        forceModeOffButton->setObjectName(QString::fromUtf8("forceModeOffButton"));
        forceModeOffButton->setGeometry(QRect(640, 0, 100, 29));
        sizePolicy3.setHeightForWidth(forceModeOffButton->sizePolicy().hasHeightForWidth());
        forceModeOffButton->setSizePolicy(sizePolicy3);
        forceModeOffButton->setMinimumSize(QSize(0, 29));
        forceModeOffButton->setMaximumSize(QSize(100, 29));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette58.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette58.setBrush(QPalette::Active, QPalette::Light, brush8);
        palette58.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        palette58.setBrush(QPalette::Active, QPalette::Dark, brush10);
        palette58.setBrush(QPalette::Active, QPalette::Mid, brush11);
        palette58.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette58.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette58.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette58.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette58.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette58.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette58.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette58.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette58.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette58.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette58.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette58.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette58.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette58.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette58.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette58.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette58.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette58.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette58.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette58.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette58.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette58.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette58.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette58.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette58.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette58.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette58.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette58.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette58.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        forceModeOffButton->setPalette(palette58);
        forceModeOffButton->setFont(font15);
        forceModeOffButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: black;\n"
"background: rgb(255,0,0);\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 0px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"color: rgb(255,0,0);\n"
"border: 2px solid #555;\n"
"border-radius: 7px;\n"
"padding: 0px;\n"
"background: black;\n"
"min-width: 65px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"color:  rgb(255,0,0);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        forceModeOffButton->setAutoDefault(false);
        launchButtonsGroupBox = new QGroupBox(topFrame);
        launchButtonsGroupBox->setObjectName(QString::fromUtf8("launchButtonsGroupBox"));
        launchButtonsGroupBox->setGeometry(QRect(760, 0, 181, 31));
        launchButtonsGroupBox->setAlignment(Qt::AlignCenter);
        launchButtonsGroupBox->setFlat(true);
        launchButtonsGroupBox->setCheckable(true);
        launchButtonsGroupBox->setChecked(false);
        startGlobLauncherButton = new QPushButton(launchButtonsGroupBox);
        startGlobLauncherButton->setObjectName(QString::fromUtf8("startGlobLauncherButton"));
        startGlobLauncherButton->setGeometry(QRect(20, 0, 64, 26));
        startGlobLauncherButton->setFont(font16);
        startGlobLauncherButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 50px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        startGlobLauncherButton->setCheckable(false);
        killGlobLauncherButton = new QPushButton(launchButtonsGroupBox);
        killGlobLauncherButton->setObjectName(QString::fromUtf8("killGlobLauncherButton"));
        killGlobLauncherButton->setGeometry(QRect(90, 0, 84, 26));
        killGlobLauncherButton->setFont(font16);
        killGlobLauncherButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: white;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 50px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        killGlobLauncherButton->setCheckable(false);
        killGlobLauncherButton->setChecked(false);
        frame_19 = new QFrame(topFrame);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(753, 0, 190, 30));
        frame_19->setStyleSheet(QString::fromUtf8("border: none;\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"stop: 0 #a6a6a6, stop: 0.08 #7f7f7f,\n"
"stop: 0.39999 #717171, stop: 0.4 #626262,\n"
"stop: 0.9 #4c4c4c, stop: 1 #333333);"));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        frame_19->setLineWidth(2);
        misionNameLabel_5 = new QLabel(frame_19);
        misionNameLabel_5->setObjectName(QString::fromUtf8("misionNameLabel_5"));
        misionNameLabel_5->setGeometry(QRect(6, 6, 52, 17));
        misionNameLabel_5->setFont(font13);
        misionNameLabel_5->setStyleSheet(QString::fromUtf8("color: white"));
        misionNameLabel_5->setAlignment(Qt::AlignCenter);
        soundExistenceLabel = new QLabel(frame_19);
        soundExistenceLabel->setObjectName(QString::fromUtf8("soundExistenceLabel"));
        soundExistenceLabel->setGeometry(QRect(60, 4, 51, 21));
        soundExistenceLabel->setFont(font13);
        soundExistenceLabel->setStyleSheet(QString::fromUtf8("background: rgb(200,200,200);"));
        soundExistenceLabel->setFrameShape(QFrame::Box);
        soundExistenceLabel->setFrameShadow(QFrame::Plain);
        soundExistenceLabel->setLineWidth(2);
        soundExistenceLabel->setAlignment(Qt::AlignCenter);
        progressBar = new QProgressBar(frame_19);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(120, 5, 61, 20));
        progressBar->setStyleSheet(QString::fromUtf8(""));
        progressBar->setValue(0);
        shutdownPandoraButton = new QPushButton(pandoraGui);
        shutdownPandoraButton->setObjectName(QString::fromUtf8("shutdownPandoraButton"));
        shutdownPandoraButton->setGeometry(QRect(1335, 0, 94, 27));
        shutdownPandoraButton->setFont(font15);
        shutdownPandoraButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: rgba(255,0,0,220);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        restartPandoraButton = new QPushButton(pandoraGui);
        restartPandoraButton->setObjectName(QString::fromUtf8("restartPandoraButton"));
        restartPandoraButton->setGeometry(QRect(1240, 0, 94, 27));
        restartPandoraButton->setFont(font15);
        restartPandoraButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 80px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}"));
        label_15 = new QLabel(pandoraGui);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(300, 1, 120, 26));
        label_15->setMinimumSize(QSize(0, 26));
        label_15->setMaximumSize(QSize(680, 26));
        QFont font29;
        font29.setPointSize(10);
        font29.setBold(true);
        font29.setItalic(false);
        font29.setWeight(75);
        label_15->setFont(font29);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(205, 0, 0,255)\n"
""));
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Plain);
        label_15->setLineWidth(2);
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget10 = new QWidget(pandoraGui);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(530, 0, 352, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget10);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 25));
        label_4->setMaximumSize(QSize(680, 25));
        label_4->setFont(font29);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);\n"
"background:rgba(205, 0, 0,255)\n"
""));
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setLineWidth(2);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        currentStateLabel = new QLabel(layoutWidget10);
        currentStateLabel->setObjectName(QString::fromUtf8("currentStateLabel"));
        currentStateLabel->setMinimumSize(QSize(286, 25));
        currentStateLabel->setMaximumSize(QSize(286, 25));
        QPalette palette59;
        QBrush brush265(QColor(255, 255, 0, 255));
        brush265.setStyle(Qt::SolidPattern);
        palette59.setBrush(QPalette::Active, QPalette::WindowText, brush265);
        QRadialGradient gradient234(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient234.setSpread(QGradient::PadSpread);
        gradient234.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient234.setColorAt(0, QColor(255, 255, 255, 255));
        gradient234.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush266(gradient234);
        palette59.setBrush(QPalette::Active, QPalette::Button, brush266);
        palette59.setBrush(QPalette::Active, QPalette::Text, brush265);
        palette59.setBrush(QPalette::Active, QPalette::ButtonText, brush265);
        QRadialGradient gradient235(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient235.setSpread(QGradient::PadSpread);
        gradient235.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient235.setColorAt(0, QColor(255, 255, 255, 255));
        gradient235.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush267(gradient235);
        palette59.setBrush(QPalette::Active, QPalette::Base, brush267);
        QRadialGradient gradient236(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient236.setSpread(QGradient::PadSpread);
        gradient236.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient236.setColorAt(0, QColor(255, 255, 255, 255));
        gradient236.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush268(gradient236);
        palette59.setBrush(QPalette::Active, QPalette::Window, brush268);
        palette59.setBrush(QPalette::Inactive, QPalette::WindowText, brush265);
        QRadialGradient gradient237(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient237.setSpread(QGradient::PadSpread);
        gradient237.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient237.setColorAt(0, QColor(255, 255, 255, 255));
        gradient237.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush269(gradient237);
        palette59.setBrush(QPalette::Inactive, QPalette::Button, brush269);
        palette59.setBrush(QPalette::Inactive, QPalette::Text, brush265);
        palette59.setBrush(QPalette::Inactive, QPalette::ButtonText, brush265);
        QRadialGradient gradient238(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient238.setSpread(QGradient::PadSpread);
        gradient238.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient238.setColorAt(0, QColor(255, 255, 255, 255));
        gradient238.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush270(gradient238);
        palette59.setBrush(QPalette::Inactive, QPalette::Base, brush270);
        QRadialGradient gradient239(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient239.setSpread(QGradient::PadSpread);
        gradient239.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient239.setColorAt(0, QColor(255, 255, 255, 255));
        gradient239.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush271(gradient239);
        palette59.setBrush(QPalette::Inactive, QPalette::Window, brush271);
        palette59.setBrush(QPalette::Disabled, QPalette::WindowText, brush265);
        QRadialGradient gradient240(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient240.setSpread(QGradient::PadSpread);
        gradient240.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient240.setColorAt(0, QColor(255, 255, 255, 255));
        gradient240.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush272(gradient240);
        palette59.setBrush(QPalette::Disabled, QPalette::Button, brush272);
        palette59.setBrush(QPalette::Disabled, QPalette::Text, brush265);
        palette59.setBrush(QPalette::Disabled, QPalette::ButtonText, brush265);
        QRadialGradient gradient241(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient241.setSpread(QGradient::PadSpread);
        gradient241.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient241.setColorAt(0, QColor(255, 255, 255, 255));
        gradient241.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush273(gradient241);
        palette59.setBrush(QPalette::Disabled, QPalette::Base, brush273);
        QRadialGradient gradient242(0.3, -0.4, 1.35, 0.3, -0.4);
        gradient242.setSpread(QGradient::PadSpread);
        gradient242.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient242.setColorAt(0, QColor(255, 255, 255, 255));
        gradient242.setColorAt(1, QColor(136, 136, 136, 255));
        QBrush brush274(gradient242);
        palette59.setBrush(QPalette::Disabled, QPalette::Window, brush274);
        currentStateLabel->setPalette(palette59);
        currentStateLabel->setFont(font29);
        currentStateLabel->setStyleSheet(QString::fromUtf8("color:rgba(255,255,0,255); \n"
"background:  \n"
"qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888);\n"
"border: white\n"
""));
        currentStateLabel->setFrameShape(QFrame::Box);
        currentStateLabel->setFrameShadow(QFrame::Plain);
        currentStateLabel->setLineWidth(2);
        currentStateLabel->setScaledContents(false);
        currentStateLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(currentStateLabel);

        layoutWidget11 = new QWidget(pandoraGui);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        layoutWidget12 = new QWidget(pandoraGui);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        layoutWidget13 = new QWidget(pandoraGui);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        layoutWidget14 = new QWidget(pandoraGui);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget14);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        layoutWidget15 = new QWidget(pandoraGui);
        layoutWidget15->setObjectName(QString::fromUtf8("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget15);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        layoutWidget16 = new QWidget(pandoraGui);
        layoutWidget16->setObjectName(QString::fromUtf8("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(0, 0, 2, 2));
        gridLayout_15 = new QGridLayout(layoutWidget16);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        gridLayout_15->setContentsMargins(0, 0, 0, 0);

        retranslateUi(pandoraGui);

        tabWidget->setCurrentIndex(0);
        statesComboBox->setCurrentIndex(0);
        sensorsComboBox1->setCurrentIndex(0);
        sensorsComboBox2->setCurrentIndex(0);
        sensorsComboBox3->setCurrentIndex(0);
        sensorsComboBox4->setCurrentIndex(0);
        sensorsComboBox5->setCurrentIndex(0);
        sensorsComboBox6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pandoraGui);
    } // setupUi

    void retranslateUi(QWidget *pandoraGui)
    {
        pandoraGui->setWindowTitle(QApplication::translate("pandoraGui", "PANDORA GUI", 0, QApplication::UnicodeUTF8));
        tab1BackLabel->setText(QString());
        SensorsGoupBox->setTitle(QString());
        label_6->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Sensors</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sonarLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:11pt; color:#00ff00;\">Sonar</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt; color:#00ff00;\">[cm]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        irLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:11pt; color:#00ff00;\">IR</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt; color:#00ff00;\">[cm]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        mlxLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:600; color:#00ff00;\">MLX(</span><span style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:600; color:#00ff00; vertical-align:super;\">o</span><span style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:600; color:#00ff00;\">C):</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        CO2Label->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600; color:#00ff00;\">CO2 [ppm]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("pandoraGui", "Enable/Disable streaming", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("pandoraGui", "Video Streaming", 0, QApplication::UnicodeUTF8));
        videoLabel->setText(QString());
        label_14->setText(QApplication::translate("pandoraGui", "TextLabel", 0, QApplication::UnicodeUTF8));
        mapNavGroupBox->setTitle(QApplication::translate("pandoraGui", "Enable/Disable map", 0, QApplication::UnicodeUTF8));
        mapTagNav->setText(QApplication::translate("pandoraGui", "Map", 0, QApplication::UnicodeUTF8));
        mapLabelNav->setText(QString());
        lowVoltageLabel->setText(QString());
        motorSpeedLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:12pt; font-weight:600; color:#ffffff;\">Motors Speed</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        motorLeftLinearLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Linear [m/s]:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        motorRightAngularLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-weight:600;\">Angular [rad/s]:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pandoraLogoLabel->setText(QString());
        ThermalGroupBox->setTitle(QString());
        thermalFront8->setText(QString());
        thermalFront2->setText(QString());
        thermalFront4->setText(QString());
        thermalFront7->setText(QString());
        thermalFront5->setText(QString());
        thermalFront1->setText(QString());
        thermalFront3->setText(QString());
        thermalFront6->setText(QString());
        thermalLeft2->setText(QString());
        thermalLeft4->setText(QString());
        thermalLeft7->setText(QString());
        thermalLeft5->setText(QString());
        thermalLeft1->setText(QString());
        thermalLeft8->setText(QString());
        thermalLeft3->setText(QString());
        thermalLeft6->setText(QString());
        thermalRight2->setText(QString());
        thermalRight4->setText(QString());
        thermalRight7->setText(QString());
        thermalRight5->setText(QString());
        thermalRight1->setText(QString());
        thermalRight8->setText(QString());
        thermalRight3->setText(QString());
        thermalRight6->setText(QString());
        irLabel_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; color:#ffffff;\">Thermal</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        vehicleControlLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">Vehicle Control</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        gripperLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt;\">Gripper</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        forceStopPushButton->setText(QApplication::translate("pandoraGui", "FORCE STOP", 0, QApplication::UnicodeUTF8));
        forwardPushButton->setText(QApplication::translate("pandoraGui", "Up", 0, QApplication::UnicodeUTF8));
        LeftPushButton->setText(QApplication::translate("pandoraGui", "Left", 0, QApplication::UnicodeUTF8));
        backwardPushButton->setText(QApplication::translate("pandoraGui", "Down", 0, QApplication::UnicodeUTF8));
        RightPushButton->setText(QApplication::translate("pandoraGui", "RIght", 0, QApplication::UnicodeUTF8));
        gripperGrabButton->setText(QApplication::translate("pandoraGui", "Grab", 0, QApplication::UnicodeUTF8));
        gripperStopButton->setText(QApplication::translate("pandoraGui", "STOP", 0, QApplication::UnicodeUTF8));
        gripperReleaseButton->setText(QApplication::translate("pandoraGui", "Release", 0, QApplication::UnicodeUTF8));
        armControlLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">Arm Control</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        xForwardButton->setText(QApplication::translate("pandoraGui", "X+", 0, QApplication::UnicodeUTF8));
        zUpButton->setText(QApplication::translate("pandoraGui", "Z+", 0, QApplication::UnicodeUTF8));
        yLeftButton->setText(QApplication::translate("pandoraGui", "Y+", 0, QApplication::UnicodeUTF8));
        xBackwardButton->setText(QApplication::translate("pandoraGui", "X-", 0, QApplication::UnicodeUTF8));
        yRightButton->setText(QApplication::translate("pandoraGui", "Y-", 0, QApplication::UnicodeUTF8));
        zDownButton->setText(QApplication::translate("pandoraGui", "Z-", 0, QApplication::UnicodeUTF8));
        xyzStepLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00ff00;\">Step</span><span style=\" font-size:8pt; font-weight:600; color:#00ff00;\">(cm)</span><span style=\" font-size:11pt; font-weight:600; color:#00ff00;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        parkArmButton->setText(QApplication::translate("pandoraGui", "Park", 0, QApplication::UnicodeUTF8));
        angleStepLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#00ff00;\">Step </span><span style=\" font-size:8pt; font-weight:600; color:#00ff00;\">(</span><span style=\" font-size:8pt; font-weight:600; color:#00ff00; vertical-align:super;\">o</span><span style=\" font-size:8pt; font-weight:600; color:#00ff00;\">)</span><span style=\" font-size:11pt; font-weight:600; color:#00ff00;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        bUpButton->setText(QApplication::translate("pandoraGui", "b+", 0, QApplication::UnicodeUTF8));
        aLeftButton->setText(QApplication::translate("pandoraGui", "a+", 0, QApplication::UnicodeUTF8));
        resetAngleAButton->setText(QApplication::translate("pandoraGui", "0", 0, QApplication::UnicodeUTF8));
        aRightButton->setText(QApplication::translate("pandoraGui", "a-", 0, QApplication::UnicodeUTF8));
        bDownButton->setText(QApplication::translate("pandoraGui", "b-", 0, QApplication::UnicodeUTF8));
        armHeadResetUpDownPushButton->setText(QApplication::translate("pandoraGui", "Reset", 0, QApplication::UnicodeUTF8));
        armHeadUpPushButton->setText(QApplication::translate("pandoraGui", "Up", 0, QApplication::UnicodeUTF8));
        armHeadLeftPushButton->setText(QApplication::translate("pandoraGui", "Left", 0, QApplication::UnicodeUTF8));
        armHeadRightPushButton->setText(QApplication::translate("pandoraGui", "Right", 0, QApplication::UnicodeUTF8));
        armHeadDownPushButton->setText(QApplication::translate("pandoraGui", "Down", 0, QApplication::UnicodeUTF8));
        armHeadResetPushButton->setText(QApplication::translate("pandoraGui", "Reset", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("pandoraGui", "head", 0, QApplication::UnicodeUTF8));
        butterflyLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:11pt; font-weight:600; color:#ffffff;\">Batteries [V]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        butMotorsLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Motors:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        butPsuLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">PSU:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        psuBatteryProgressBar->setFormat(QApplication::translate("pandoraGui", "%p%", 0, QApplication::UnicodeUTF8));
        butterflyLabel_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:11pt; color:#ffffff;\">Robot State</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        statesComboBox->clear();
        statesComboBox->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "Mode OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "Teleoperated", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "Autonomous", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "Test Sensors", 0, QApplication::UnicodeUTF8)
        );
        armTeleoperationCheckBox->setText(QApplication::translate("pandoraGui", "Arm teleoperation", 0, QApplication::UnicodeUTF8));
        numOfVictimsLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-weight:600;\">Victims found:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pandoraLabel->setText(QApplication::translate("pandoraGui", "Pandora:", 0, QApplication::UnicodeUTF8));
        clearPandoraTextBrowserButton->setText(QApplication::translate("pandoraGui", "clear", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("pandoraGui", "Navigation", 0, QApplication::UnicodeUTF8));
        tab2BackLabel->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = victimsTreeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("pandoraGui", "Sensors", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("pandoraGui", "y", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("pandoraGui", "x", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("pandoraGui", "Victim ID", 0, QApplication::UnicodeUTF8));
        mapTag_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:14pt; text-decoration: underline; color:#ffffff;\">Victims Found</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-weight:400; color:#ffffff;\">Identification Info</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        mapGroupBox->setTitle(QApplication::translate("pandoraGui", "Enable/Disable map", 0, QApplication::UnicodeUTF8));
        mapLabel->setText(QString());
        mapTag->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:12pt; color:#ffffff;\">Full Map</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lowVoltageLabel_2->setText(QString());
        label_5->setText(QApplication::translate("pandoraGui", "Victim validation:", 0, QApplication::UnicodeUTF8));
        acceptVictimPushButton->setText(QApplication::translate("pandoraGui", "Accept", 0, QApplication::UnicodeUTF8));
        declineVictimPushButton->setText(QApplication::translate("pandoraGui", "Decline", 0, QApplication::UnicodeUTF8));
        createGeotiffPushButton->setText(QApplication::translate("pandoraGui", "Create geotiff", 0, QApplication::UnicodeUTF8));
        misionNameLabel->setText(QApplication::translate("pandoraGui", "Mission name:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("pandoraGui", "   .", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1_2->setText(QApplication::translate("pandoraGui", "2:", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1_3->setText(QApplication::translate("pandoraGui", "6:", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1_4->setText(QApplication::translate("pandoraGui", "4:", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1_5->setText(QApplication::translate("pandoraGui", "3:", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1_6->setText(QApplication::translate("pandoraGui", "5:", 0, QApplication::UnicodeUTF8));
        semiAutoSensorsLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\"> Sensors:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        semiAutoSensorLabel1->setText(QApplication::translate("pandoraGui", "1:", 0, QApplication::UnicodeUTF8));
        semiAutoXLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">x:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        semiAutoXValueLabel->setText(QString());
        semiAutoYLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">y:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        semiAutoYValueLabel->setText(QString());
        semiAutoConfirmButton->setText(QApplication::translate("pandoraGui", "Register victim", 0, QApplication::UnicodeUTF8));
        semiAutonomousInstructions->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:9pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">1.</span><span style=\" font-size:10pt;\"> Click on the map to select the new victim's location!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">2.</span><span style=\" font-size:10pt;\"> Select the sensor types identifying the new victim.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-size:10pt; font-weight:600;\">3.</span><span style=\" font-size:10pt;\"> Register victim!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        semiAutonomousLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Teleoperated</span><span style=\" font-size:12pt; font-weight:600;\"> - </span><span style=\" font-weight:600; font-style:italic; color:#ffffff;\">Victim registration</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sensorsComboBox1->clear();
        sensorsComboBox1->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        sensorsComboBox2->clear();
        sensorsComboBox2->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        sensorsComboBox3->clear();
        sensorsComboBox3->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        sensorsComboBox4->clear();
        sensorsComboBox4->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        sensorsComboBox5->clear();
        sensorsComboBox5->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        sensorsComboBox6->clear();
        sensorsComboBox6->insertItems(0, QStringList()
         << QApplication::translate("pandoraGui", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "face", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "skin", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "tpa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "mlx", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "co2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "sound", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("pandoraGui", "motion", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("pandoraGui", "Victim Identification", 0, QApplication::UnicodeUTF8));
        tab3BackLabel->setText(QString());
        label->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#ffffff;\">Debugging Console</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Semi-Autonomous debug</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        motorSpeedLabel_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Motors Speed</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        motorLeftRpmLabel->setText(QApplication::translate("pandoraGui", "<b>Left:</b>", 0, QApplication::UnicodeUTF8));
        motorRightRpmLabel->setText(QApplication::translate("pandoraGui", "<b>Right:</b>", 0, QApplication::UnicodeUTF8));
        motorRpmLabel_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">[rpm]</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        debugMotorLinearLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Linear [m/s]:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        debugMotorAngularrLabel->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Angular [rad/s]:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        clearMousePressEventsPushButton->setText(QApplication::translate("pandoraGui", "Clear", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Mouse Press Events on Map</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ffffff;\">Extra features</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        dbgDebugLabel->setText(QApplication::translate("pandoraGui", "DEBUG:", 0, QApplication::UnicodeUTF8));
        dbgDebugButton->setText(QApplication::translate("pandoraGui", "OFF", 0, QApplication::UnicodeUTF8));
        dbgInfoLabel->setText(QApplication::translate("pandoraGui", "INFO:", 0, QApplication::UnicodeUTF8));
        dbgInfoButton->setText(QApplication::translate("pandoraGui", "OFF", 0, QApplication::UnicodeUTF8));
        dbgWarnLabel->setText(QApplication::translate("pandoraGui", "WARN:", 0, QApplication::UnicodeUTF8));
        dbgWarnButton->setText(QApplication::translate("pandoraGui", "OFF", 0, QApplication::UnicodeUTF8));
        dbgErrorLabel->setText(QApplication::translate("pandoraGui", "ERROR:", 0, QApplication::UnicodeUTF8));
        dbgErrorButton->setText(QApplication::translate("pandoraGui", "OFF", 0, QApplication::UnicodeUTF8));
        dbgFatalLabel->setText(QApplication::translate("pandoraGui", "FATAL:", 0, QApplication::UnicodeUTF8));
        dbgFatalButton->setText(QApplication::translate("pandoraGui", "OFF", 0, QApplication::UnicodeUTF8));
        startConsoleButton->setText(QApplication::translate("pandoraGui", "Start Console", 0, QApplication::UnicodeUTF8));
        clearConsoleButton->setText(QApplication::translate("pandoraGui", "Clear", 0, QApplication::UnicodeUTF8));
        stopConsoleButton->setText(QApplication::translate("pandoraGui", "Stop Console", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("pandoraGui", "                  .", 0, QApplication::UnicodeUTF8));
        motorSpeedLabel_3->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:11pt; font-weight:600;\">Sound Test</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        misionNameLabel_2->setText(QApplication::translate("pandoraGui", "Sound existence:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_4->setText(QApplication::translate("pandoraGui", "Sound existence:", 0, QApplication::UnicodeUTF8));
        soundExistenceDbgLabel->setText(QString());
        misionNameLabel_6->setText(QApplication::translate("pandoraGui", "Probability:", 0, QApplication::UnicodeUTF8));
        soundExistenceLabel_6->setText(QString());
        misionNameLabel_8->setText(QApplication::translate("pandoraGui", "Sound existence:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_9->setText(QApplication::translate("pandoraGui", "Sound direction:", 0, QApplication::UnicodeUTF8));
        soundDirLabel->setText(QString());
        misionNameLabel_10->setText(QApplication::translate("pandoraGui", "Probability:", 0, QApplication::UnicodeUTF8));
        testSoundButton->setText(QApplication::translate("pandoraGui", "Test", 0, QApplication::UnicodeUTF8));
        checkSensorsGroupBox->setTitle(QApplication::translate("pandoraGui", ".", 0, QApplication::UnicodeUTF8));
        motorSpeedLabel_4->setText(QApplication::translate("pandoraGui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:14pt; font-weight:600; text-decoration: underline;\">SENSORS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:14pt; font-weight:600;\">Test</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        misionNameLabel_3->setText(QApplication::translate("pandoraGui", "MLX:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_7->setText(QApplication::translate("pandoraGui", "CO2:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_11->setText(QApplication::translate("pandoraGui", "SOUND:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_12->setText(QApplication::translate("pandoraGui", "SKIN:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_13->setText(QApplication::translate("pandoraGui", "MOTION:", 0, QApplication::UnicodeUTF8));
        misionNameLabel_14->setText(QApplication::translate("pandoraGui", "FACE:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("pandoraGui", "Debug", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("pandoraGui", ":", 0, QApplication::UnicodeUTF8));
        forceModeOffButton->setText(QApplication::translate("pandoraGui", "MODE OFF", 0, QApplication::UnicodeUTF8));
        launchButtonsGroupBox->setTitle(QApplication::translate("pandoraGui", "a", 0, QApplication::UnicodeUTF8));
        startGlobLauncherButton->setText(QApplication::translate("pandoraGui", "Launch", 0, QApplication::UnicodeUTF8));
        killGlobLauncherButton->setText(QApplication::translate("pandoraGui", "Kill Launcher", 0, QApplication::UnicodeUTF8));
        misionNameLabel_5->setText(QApplication::translate("pandoraGui", "Sound:", 0, QApplication::UnicodeUTF8));
        soundExistenceLabel->setText(QString());
        shutdownPandoraButton->setText(QApplication::translate("pandoraGui", "Shutdown", 0, QApplication::UnicodeUTF8));
        restartPandoraButton->setText(QApplication::translate("pandoraGui", "Restart", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("pandoraGui", "Time elapsed:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("pandoraGui", "State:", 0, QApplication::UnicodeUTF8));
        currentStateLabel->setText(QApplication::translate("pandoraGui", "MODE_OFF", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pandoraGui: public Ui_pandoraGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANDORAGUI_H
