/******************************************************************************
** @Filename: 	prObject.h
** @Project: 	
** @author:		Brita Hentzschel 
** @date:		20.08.2012
******************************************************************************/
#ifndef PROBJECT_H
#define PROBJECT_H

#include <string>
#include "globalDefs.h"


using namespace std;

class TLocation{
public:
	int mX, mY, mZ;
	TLocation(){
		mX = mY = mZ = 0;		
	}
};

// allgemeines PovRay Object
class TPr_Object{
public:
	TLocation *mLocation;		
protected:		
	string mName;
	string mStrIconFile;
	int mId;		
public:	
	TPr_Object();
	virtual ~TPr_Object() = 0; // hiermit wird klasse abstract
	virtual void Init() = 0;
	virtual void DeInit() = 0;	
	TLocation getLocation(){ return *mLocation;}
	string getIconFileName(){return mStrIconFile;}
	string getName(){ return  mName; }	
	int getId(){ return mId;}
};

#endif

