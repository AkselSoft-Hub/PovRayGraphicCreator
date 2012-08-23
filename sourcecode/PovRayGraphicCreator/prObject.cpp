
#include "prObject.h"

TPr_Object::TPr_Object(){
	mName =  NONAME_STR;
	mLocation = 0;	
	mStrIconFile = NO_ICON;
	mId = NO_ID;
}

TPr_Object::~TPr_Object(){
	delete mLocation;
}

