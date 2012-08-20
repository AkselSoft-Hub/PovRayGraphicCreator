#include "figures.h"

// Kugel implementieren
void TPr_Sphere::Init(){
	mName = SPHERE_STR;	
	mRadius = 0;
	mStrIconFile = SPHERE_IMG;
}
void TPr_Sphere::DeInit(){	
}

// Quader
void TPr_Box::Init(){
	mName = BOX_STR;	
	mLocation2 = new TLocation();
	mStrIconFile = BOX_IMG;
}
void TPr_Box::DeInit(){
	delete mLocation2;
}

// Zylinder
void TPr_Cylinder::Init(){
	mName = CYLINDER_STR;	
	mRadius = 0;
	mLocation2 = new TLocation;
	mStrIconFile = CYLINDER_IMG;
}
void TPr_Cylinder::DeInit(){
	delete mLocation2;
}

