#include "figures.h"

// Kugel implementieren
void TPr_Sphere::Init(){
	mName = SPHERE_STR;	
	mId	= SPHERE_ID;		
	mStrIconFile = SPHERE_IMG;
	mRadius = 0;
}
void TPr_Sphere::DeInit(){	
}

// Quader
void TPr_Box::Init(){
	mName = BOX_STR;	
	mId	= BOX_ID;
	mStrIconFile = BOX_IMG;	
	mLocation2 = new TLocation();
}
void TPr_Box::DeInit(){
	delete mLocation2;
}

// Zylinder
void TPr_Cylinder::Init(){
	mName = CYLINDER_STR;	
	mId  = CYLINDER_ID;
	mStrIconFile = CYLINDER_IMG;	
	mRadius = 0;
	mLocation2 = new TLocation;
}
void TPr_Cylinder::DeInit(){
	delete mLocation2;
}

