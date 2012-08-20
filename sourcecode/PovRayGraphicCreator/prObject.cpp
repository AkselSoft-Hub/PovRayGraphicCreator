
#include "prObject.h"

TPr_Object::TPr_Object(){
	mName = "";
	mLocation = 0;	
}

TPr_Object::~TPr_Object(){
	delete mLocation;
}

