/******************************************************************************
** @Filename: 	prObject.h
** @Project: 	
** @author:		Brita Hentzschel 
** @date:		20.08.2012
******************************************************************************/
#ifndef PROBJECT_H
#define PROBJECT_H

#include <string>


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
	string mStrIconFile;	
//	??? mColor;
//	??? mStructure;
	
protected:	
	int mID;
	string mName;		
	
	void Init();
	void DeInit();
public:
	TPr_Object(){ 
		Init();
	};
	~TPr_Object(){
		DeInit();
	}
	TLocation getLocation(){ 
		return *mLocation; 
	}
	string getIconFileName(){
		return mStrIconFile;
	}
	string GetName(){
		return  mName;
	}
	int getID(){ return mID; }	
};

#endif

