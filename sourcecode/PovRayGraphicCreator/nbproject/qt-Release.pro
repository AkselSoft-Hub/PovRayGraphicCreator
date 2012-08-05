# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/MinGW_QT-Windows
TARGET = PovRayGraphicCreator
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui
SOURCES += main.cpp Camera.cpp gitObjects.cpp graphicManager.cpp lightSource.cpp fMainGUI.cpp utils.cpp povrayImage.cpp
HEADERS += utils.h gitObjects.h camera.h lightSource.h povrayImage.h graphicManager.h fMainGUI.h
FORMS += fMainGUI.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/MinGW_QT-Windows
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc.exe
QMAKE_CXX = g++.exe
DEFINES += 
INCLUDEPATH += 
LIBS += 
