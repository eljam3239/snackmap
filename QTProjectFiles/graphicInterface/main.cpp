#include "mainwindow.h"
#include "postswindow.h"
#include "profilewindow.h"
#include "friendswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //switch this to MainWindow for template file
    w.show();
    return a.exec();
}
