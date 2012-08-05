/********************************************************************************
** Form generated from reading UI file 'fMainGUI.ui'
**
** Created: Sun 5. Aug 10:55:39 2012
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FMAINGUI_H
#define UI_FMAINGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_fMainGUI
{
public:

    void setupUi(QDialog *fMainGUI)
    {
        if (fMainGUI->objectName().isEmpty())
            fMainGUI->setObjectName(QString::fromUtf8("fMainGUI"));
        fMainGUI->resize(800, 600);

        retranslateUi(fMainGUI);

        QMetaObject::connectSlotsByName(fMainGUI);
    } // setupUi

    void retranslateUi(QDialog *fMainGUI)
    {
        fMainGUI->setWindowTitle(QApplication::translate("fMainGUI", "PovRay Graphic Creator", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fMainGUI: public Ui_fMainGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FMAINGUI_H
