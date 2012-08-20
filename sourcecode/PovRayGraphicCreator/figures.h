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

#endif	/* FIGURES_H */

