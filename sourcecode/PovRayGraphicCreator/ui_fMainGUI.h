/********************************************************************************
** Form generated from reading UI file 'fMainGUI.ui'
**
** Created: Mon 20. Aug 10:06:15 2012
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_fMainGUI
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treePrElements;
    QSpacerItem *horizontalSpacer;
    QPushButton *btClose;

    void setupUi(QDialog *fMainGUI)
    {
        if (fMainGUI->objectName().isEmpty())
            fMainGUI->setObjectName(QString::fromUtf8("fMainGUI"));
        fMainGUI->resize(800, 600);
        gridLayout = new QGridLayout(fMainGUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treePrElements = new QTreeWidget(fMainGUI);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treePrElements->setHeaderItem(__qtreewidgetitem);
        treePrElements->setObjectName(QString::fromUtf8("treePrElements"));

        gridLayout->addWidget(treePrElements, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(696, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        btClose = new QPushButton(fMainGUI);
        btClose->setObjectName(QString::fromUtf8("btClose"));

        gridLayout->addWidget(btClose, 1, 1, 1, 1);


        retranslateUi(fMainGUI);

        QMetaObject::connectSlotsByName(fMainGUI);
    } // setupUi

    void retranslateUi(QDialog *fMainGUI)
    {
        fMainGUI->setWindowTitle(QApplication::translate("fMainGUI", "PovRay Graphic Creator", 0, QApplication::UnicodeUTF8));
        btClose->setText(QApplication::translate("fMainGUI", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fMainGUI: public Ui_fMainGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FMAINGUI_H
