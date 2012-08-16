#include "gitObjects.h"

#define SPHERE_STR		"Kugel"
#define BOX_STR			"Box"
#define CYLINDER_STR	"Cylinder"
#define SPHERE_IMG		"sphere.jpg"
#define BOX_IMG			"box.jpg"
#define CYLINDER_IMG	"cylinder.jpg"


void TPr_Object::Init(){
	mName = "";
	mID = -1;
	mStrIconFile = "";
}

void TPr_Object::DeInit(){
	
}
// Kugel implementieren
void TPr_Sphere::Init(){
	mName = SPHERE_STR;
	mID = 1;
	mRadius = 0;
	mStrIconFile = SPHERE_IMG;
}
void TPr_Sphere::DeInit(){	
}

// Quader
void TPr_Box::Init(){
	mName = BOX_STR;
	mID = 2;
	mLocation2 = new TLocation();
	mStrIconFile = BOX_IMG;
}
void TPr_Box::DeInit(){
	delete mLocation2;
}

// Zylinder
void TPr_Cylinder::Init(){
	mName = CYLINDER_STR;
	mID = 3;
	mRadius = 0;
	mLocation2 = new TLocation;
	mStrIconFile = CYLINDER_IMG;
}
void TPr_Cylinder::DeInit(){
	delete mLocation2;
}
