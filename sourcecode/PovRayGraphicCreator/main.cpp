/*
 * File:   main.cpp
 * Author: Brita Hentzschel
 *
 * Created on 5. August 2012, 10:41
 */

#include <QtGui/QApplication>
#include "fMainGUI.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    fMainGUI mainGUI;
    mainGUI.show();

    return app.exec();
}
