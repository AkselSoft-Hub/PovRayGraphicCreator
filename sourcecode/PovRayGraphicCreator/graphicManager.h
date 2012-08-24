/******************************************************************************
** @Filename: 	graphicManager.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include "povrayImage.h"
#include "lightSource.h"
#include "camera.h"
#include "figures.h"
#include <vector>
#include <iostream>
#include <fstream>


using namespace std;

class TGraphicManager{
private:
	TPRImage *mResultImage;
	string mPathAndNameOfPovrayScript;
	ofstream mPovrayFile;
	void Init();
	void DeInit();
public:
	vector<TPr_Object*> mListOfPrElementTypes;// liste aller Povray Elemente
											//  die verfuegbar sind (zb Box, light...)
	vector<TPr_Object*> mListOfPrElements;			// liste der verwendeten Figuren
	// povray datei
	TGraphicManager(){
		Init();
	}
	~TGraphicManager(){
		DeInit();
	}
	vector<TPr_Object*> getListOfPrElementTypes();
	vector<TPr_Object*> getListOfPrElements();
	bool addPrElement( TPr_Object* aElement);
	bool CreatePovrayImage();
	bool CreatePovrayFile();
	bool PovrayFileToImage();	
};

#endif	