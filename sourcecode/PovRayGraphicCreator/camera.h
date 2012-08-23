/******************************************************************************
** @Filename: 	camera.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef CAMERA_H
#define CAMERA_H

#include "prObject.h"
class TCamera:public TPr_Object{
private:
	TLocation *mLocation; // wo kamera steht
	TLocation *mLookAt; // wohin Kamera schaut
	// ToDo-> direction zb = 2*z

public:
	TCamera(){
		Init();
	}
	~TCamera(){
		DeInit();
	}
	void Init();
	void DeInit();	
};

#endif
