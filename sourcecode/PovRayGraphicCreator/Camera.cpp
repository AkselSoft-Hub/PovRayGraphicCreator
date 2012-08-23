#include "camera.h"

void TCamera::Init(){
	mName		= CAMERA_STR;	
	mId			= CAMERA_ID;	
	mStrIconFile= CAMERA_IMG;
	mLocation	= new TLocation;
	mLookAt		= new TLocation;

}

void TCamera::DeInit(){
	delete mLocation;
	delete mLookAt;
}