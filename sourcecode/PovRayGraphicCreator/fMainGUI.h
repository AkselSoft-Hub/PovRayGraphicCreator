/* 
 * File:   fMainGUI.h
 * Author: Brita Hentzschel
 *
 * Created on 5. August 2012, 10:49
 */

#ifndef _FMAINGUI_H
#define	_FMAINGUI_H

#include "ui_fMainGUI.h"
#include <QMessageBox>

#include "graphicManager.h"
#include <QtGui>
#include <QList>
#include <QIcon>

class fMainGUI : public QDialog {
    Q_OBJECT
public:
    fMainGUI();
    virtual ~fMainGUI();
	void fillTreeWidget();
	void showInputMaskForTreeItem( QTreeWidgetItem* aItem);
public slots:
    void closeMyForm();				
	void showPopupMenue(QTreeWidgetItem * aItem, int aColumn);		
	void addPrElem();
	void delPrElem();
private:
    Ui::fMainGUI widget;
    TGraphicManager *mGraphicManager;
};

#endif	/* _FMAINGUI_H */
