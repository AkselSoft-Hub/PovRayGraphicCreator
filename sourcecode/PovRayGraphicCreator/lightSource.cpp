// Implementierungen fuer die Lichtquelle
#include "lightSource.h"

void TLightSource::Init(){
	mName = LIGHT_STR;	
	mId = LIGHT_ID;
	mStrIconFile = LIGHT_IMG;
	mshadowless = true;
}

void TLightSource::DeInit(){

}
