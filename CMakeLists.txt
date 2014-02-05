cmake_minimum_required(VERSION 2.4.6)
include($ENV{ROS_ROOT}/core/rosbuild/rosbuild.cmake)

# Set the build type.  Options are:
#  Coverage       : w/ debug symbols, w/o optimization, w/ code-coverage
#  Debug          : w/ debug symbols, w/o optimization
#  Release        : w/o debug symbols, w/ optimization
#  RelWithDebInfo : w/ debug symbols, w/ optimization
#  MinSizeRel     : w/o debug symbols, w/ optimization, stripped binaries
#set(ROS_BUILD_TYPE RelWithDebInfo)

#***for electric-fence use**
#set(ROS_BUILD_TYPE Debug)

rosbuild_init()

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

#uncomment if you have defined messages
#rosbuild_genmsg()
#uncomment if you have defined services
#rosbuild_gensrv()

FIND_PACKAGE( Qt4 REQUIRED )

INCLUDE( ${QT_USE_FILE} )

QT4_WRAP_UI(SAMPLE_UI_HDRS_1 src/masterGui/pandoragui.ui )

QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/masterGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/pandoragui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/ui_pandoragui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/thermalGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/mainMotorStateGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/setVehicleSpeedGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/semiAutonomousGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/irGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/sonarGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/co2Gui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/moveArmGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/butterflyGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/debugText.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/stateManagerGui.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/victimsFound.h)
#QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/mapThread.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/sensorsThread.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/videoStreaming.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/videoStreamThread.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/displayVideo.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/setVecSpeedThread.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/mapStreaming.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/mapStreamThread.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/displayMap.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/geotiffCreator.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/consoleManager.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/semiAutoMsgPublisher.h)
QT_WRAP_CPP(masterGui SAMPLE_MOC_SRCS_1 src/masterGui/soundTest.h)

#common commands for building c++ executables and libraries
#rosbuild_add_library(${PROJECT_NAME} src/example.cpp)
#target_link_libraries(${PROJECT_NAME} another_library)
#rosbuild_add_boost_directories()
#rosbuild_link_boost(${PROJECT_NAME} thread)
#rosbuild_add_executable(robotPoseGui src/robotPoseGui/robotPoseGui.cpp)
#rosbuild_add_executable(hazmatIdentificationGui src/hazmatIdentificationGui/hazmatIdentificationGui.cpp)
rosbuild_add_executable(masterGui 
src/masterGui/pandoragui.cpp
src/masterGui/mainMotorStateGui.cpp 
src/masterGui/main.cpp 
src/masterGui/masterGui.cpp 
src/masterGui/setVehicleSpeedGui.cpp 
src/masterGui/semiAutonomousGui.cpp
src/masterGui/irGui.cpp
src/masterGui/sonarGui.cpp
src/masterGui/co2Gui.cpp
src/masterGui/thermalGui.cpp
src/masterGui/moveArmGui.cpp
src/masterGui/butterflyGui.cpp
src/masterGui/debugText.cpp
src/masterGui/stateManagerGui.cpp
src/masterGui/victimsFound.cpp
#src/masterGui/mapThread.cpp
src/masterGui/sensorsThread.cpp
src/masterGui/videoStreaming.cpp
src/masterGui/videoStreamThread.cpp
src/masterGui/displayVideo.cpp
src/masterGui/setVecSpeedThread.cpp
src/masterGui/mapStreaming.cpp
src/masterGui/mapStreamThread.cpp
src/masterGui/displayMap.cpp
src/masterGui/geotiffCreator.cpp
src/masterGui/consoleManager.cpp
src/masterGui/semiAutoMsgPublisher.cpp
src/masterGui/soundTest.cpp
${SAMPLE_MOC_SRCS_1} ${SAMPLE_UI_HDRS_1})

#target_link_libraries(example ${PROJECT_NAME})

#***for electric-fence use**
#rosbuild_add_link_flags(masterGui -lefence)
rosbuild_add_link_flags(masterGui -lStateClient)
#-lvlc)
TARGET_LINK_LIBRARIES( masterGui ${QT_LIBRARIES} )
