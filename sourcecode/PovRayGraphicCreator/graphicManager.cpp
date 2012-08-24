#include "graphicManager.h"


void TGraphicManager::Init(){
	mResultImage = new TPRImage();
	mPathAndNameOfPovrayScript = "c:\\povrayScript.pov"; // Todo: hardcodet string vermeiden 
	// alle figuren die im treeview auswaehlbar sind hier in Liste packen:
	mListOfPrElementTypes.push_back(new TPr_Sphere());
	mListOfPrElementTypes.push_back(new TPr_Box());
	mListOfPrElementTypes.push_back(new TPr_Cylinder());
	mListOfPrElementTypes.push_back(new TLightSource());
	mListOfPrElementTypes.push_back(new TCamera());
	mListOfPrElements.clear();
}

void TGraphicManager::DeInit(){
	mListOfPrElementTypes.clear();
	mListOfPrElements.clear();
	delete mResultImage;	
}
vector<TPr_Object*> TGraphicManager::getListOfPrElementTypes(){
	return mListOfPrElementTypes;
}

vector<TPr_Object*> TGraphicManager::getListOfPrElements(){
	return mListOfPrElements;
}

bool TGraphicManager::addPrElement( TPr_Object* aElement){
	return true;
	try{
		mListOfPrElements.push_back( aElement);
	}catch(...){
		return false;
	}			
}
bool TGraphicManager::CreatePovrayImage(){
	return false;
   // erzeuge povRay file anhand der Figurenliste (mListOfPrElements), der licht- und
	// Kameraeinstellungen (mLightSource,mCamera)
   if( CreatePovrayFile()){
		if(mResultImage)
			delete mResultImage;
		
		// wandle povRaySkript in Bild
		if( PovrayFileToImage() )
			return true;
	}		
}


bool TGraphicManager::CreatePovrayFile(){			
	mPovrayFile.open ("example.txt");
		
	// alle Figuren aus der Liste erzeugen Ihren eintrag:
	// for alle figuren in Liste{
	//   currFigur.writeToFile();
	// }
	mPovrayFile << "Writing this to a file.\n"; // test

	mPovrayFile.close();
	return true;
}

bool TGraphicManager::PovrayFileToImage(){
	return true;
}