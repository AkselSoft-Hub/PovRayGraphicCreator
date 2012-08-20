/******************************************************************************
** @Filename: 	figures.h
** @Project: 	
** @author:		Brita Hentzschel 
** @date:		20.08.2012
******************************************************************************/

#ifndef FIGURES_H
#define	FIGURES_H

#include "prObject.h"

// Kugel
class TPr_Sphere:public TPr_Object{
private:
	int mRadius;
public:
	TPr_Sphere(){ Init(); }
	~TPr_Sphere(){ DeInit(); }
	int GetRadius(){return mRadius;}	
	void Init();
	void DeInit();
	
};

// Quader
class TPr_Box:public TPr_Object{
private:
	TLocation *mLocation2;
public:
	TPr_Box(){ Init(); }	
	~TPr_Box(){ DeInit(); }	
	TLocation GetLocation2(){ return *mLocation2; }
	void Init();
	void DeInit();	
};

// Zylinder
class TPr_Cylinder:public TPr_Object{
private:
	TLocation *mLocation2;
	int mRadius;
public:
 	TPr_Cylinder(){	Init();	}
 	~TPr_Cylinder(){DeInit();}	
	TLocation GetLocation2(){return *mLocation2;}
	int GetRadius(){return mRadius;	}
	void Init();
	void DeInit();	
};

#endif	/* FIGURES_H */

