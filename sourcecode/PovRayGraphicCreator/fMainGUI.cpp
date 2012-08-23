/*
 * File:   fMainGUI.cpp
 * Author: Brita Hentzschel
 *
 * Created on 5. August 2012, 10:49
 */

#include "fMainGUI.h"


fMainGUI::fMainGUI() {
    widget.setupUi(this);
	mGraphicManager = new TGraphicManager();
	fillTreeWidget();
	
	//Popupmenue
//	widget.treePrElements->setContextMenuPolicy(Qt::CustomContextMenu);
	
    connect(widget.btClose, SIGNAL(clicked()),this,
            SLOT(closeMyForm()) );		
	connect(widget.treePrElements, SIGNAL(itemDoubleClicked( QTreeWidgetItem *, int )  ),
			this, SLOT(showPopupMenue(QTreeWidgetItem *, int)) );	
//	connect(widget.treePrElements, SIGNAL(itemExpanded( QTreeWidgetItem * )),
//			this, SLOT());
}

fMainGUI::~fMainGUI() {
	delete mGraphicManager;
}

void fMainGUI::showInputMaskForTreeItem(QTreeWidgetItem* aItem){
	// Anhand der ID die in item.data steht wird der PRObjType bestimmt
	
}

void fMainGUI::closeMyForm(){
	close();
}
void fMainGUI::fillTreeWidget(){
	QList<QTreeWidgetItem*> treeList; 
	QTreeWidgetItem *subItem; // nur zwischenbehaelter
	QTreeWidgetItem *mainItem;
	QStringList treeHeader;
	treeHeader.append( "Objects" );	
	treeHeader.append( "Icons");
	
	widget.treePrElements->setColumnCount(2);		
	widget.treePrElements->clear();
	widget.treePrElements->setHeaderLabels( treeHeader );			
	
	mainItem = new QTreeWidgetItem();
	mainItem->setText(0,"elements");
	
	widget.treePrElements->addTopLevelItem(mainItem);
	
	// node fuer geometrische Obj:	
	int nrOfFig = mGraphicManager->getListOfStandardElements().size();
	treeList.clear();
	for( int i = 0; i < nrOfFig; i++){
//		treeList.append(new QTreeWidgetItem(widget.myTreeWidget));				
		treeList.append(new QTreeWidgetItem());				
		
		subItem = treeList.last();
		subItem->setText( 0, 
				(mGraphicManager->getListOfStandardElements()[i])->getName().c_str());
		// todo, daten an Knoten haengen
		subItem->setData( 0,Qt::UserRole, 
				(mGraphicManager->getListOfStandardElements()[i])->getName().c_str());
		QString iconPath =( "resourcen/"+ 
				mGraphicManager->getListOfStandardElements()[i]->getIconFileName()).c_str();
		subItem->setIcon(1, QIcon(iconPath));
	}
	mainItem->addChildren( treeList);	
	widget.treePrElements->expandItem(mainItem);
	
	
	// node fuer Lichtquellen:
	mainItem = new QTreeWidgetItem();
	mainItem->setText(0,"Light");

	widget.treePrElements->addTopLevelItem(mainItem);
	subItem = new QTreeWidgetItem();
	subItem->setText(0,"Light1");
	mainItem->addChild(subItem);
	widget.treePrElements->expandItem(mainItem);

	// node fuer Kamera:
	mainItem = new QTreeWidgetItem();
	
	// ToDo: pruefen ob fkt:
	widget.treePrElements->resizeColumnToContents(0);
	widget.treePrElements->resizeColumnToContents(1);
	
	// test
  vector<int> myvector;

  unsigned int i;

  // set some initial content:
  for (i=1;i<10;i++) myvector.push_back(i);

  int test = myvector.at(0);
  test = myvector.at(1);
  test = myvector.size();
  myvector.resize(5);
  myvector.resize(8,100);
  myvector.resize(12);	
}

void fMainGUI::showPopupMenue(QTreeWidgetItem* aItem, int aCol){
	QMenu *nodeMenu = new QMenu(widget.treePrElements);
	
	QAction *action_AddItem = nodeMenu->addAction("Add");
	QAction *action_DelItem = nodeMenu->addAction("Del");	
	connect(action_AddItem, SIGNAL(triggered()), 
			this,SLOT(addPrElem()));
	connect(action_DelItem, SIGNAL(triggered()), 
			this,SLOT(delPrElem()));
	
	
	nodeMenu->exec(QCursor::pos());
}

void fMainGUI::addPrElem(){	
	// frage ab, welcher treewidgetItem markiert ist
	QTreeWidgetItem *currItem = widget.treePrElements->currentItem();
	showInputMaskForTreeItem(currItem);
	
	
	// erzeuge ein pr Object des selectierten eintrages
	// erzeugermuster
}

void fMainGUI::delPrElem(){

}

