/* 
 * File:   fMainGUI.h
 * Author: Brita Hentzschel
 *
 * Created on 5. August 2012, 10:49
 */

#ifndef _FMAINGUI_H
#define	_FMAINGUI_H

#include "ui_fMainGUI.h"
#include "graphicManager.h"

class fMainGUI : public QDialog {
    Q_OBJECT
public:
    fMainGUI();
    virtual ~fMainGUI();
private:
    Ui::fMainGUI widget;
    TGraphicManager mGraphicManager;
};

#endif	/* _FMAINGUI_H */
