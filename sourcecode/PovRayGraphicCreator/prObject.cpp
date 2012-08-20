
#include "prObject.h"

TPr_Object::TPr_Object(){
	Init();
}

TPr_Object::~TPr_Object(){
	DeInit();
}

void TPr_Object::Init(){
	mName = "";
	mID = -1;
	mLocation = 0;
}
void TPr_Object::DeInit(){
	delete mLocation;
}

