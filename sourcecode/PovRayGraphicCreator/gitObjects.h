/******************************************************************************
** @Filename: 	gitObjects.h
** @Project: 	
** @author:    Norman Bensmann, Brita Hentzschel 
** @date: 17.07.2012
******************************************************************************/
#ifndef GITOBJECTS_H
#define GITOBJECTS_H

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
	int mID; // muss uniqu sein
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

// Kugel
class TPr_Sphere:public TPr_Object{
private:
	int mRadius;
	void Init();
	void DeInit();
public:
	TPr_Sphere(){
		Init();
	}
	int GetRadius(){
		return mRadius;
	}	
};

// Quader
class TPr_Box:public TPr_Object{
private:
	TLocation *mLocation2;
	void Init();
	void DeInit();
public:
	TPr_Box(){
		Init();
	}	
	TLocation GetLocation2(){
		return *mLocation2;
	}
};

// Zylinder
class TPr_Cylinder:public TPr_Object{
private:
	TLocation *mLocation2;
	int mRadius;
	void Init();
	void DeInit();
public:
	TPr_Cylinder(){
		Init();
	}
	TLocation GetLocation2(){
		return *mLocation2;
	}
	int GetRadius(){
		return mRadius;
	}
};
#endif