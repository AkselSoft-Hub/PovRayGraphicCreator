/******************************************************************************
** @Filename: 	lightSource.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 19.07.2012
******************************************************************************/

#ifndef LIGHTSOURCE_H
#define LIGHTSOURCE_H

#include "prObject.h"

class TLightSource:public TPr_Object{
private:
	bool mshadowless;
public:
	TLightSource(){  Init(); }
	~TLightSource(){ DeInit(); }
	void Init();
	void DeInit();	
};
#endif