#include "mainwindow.h"
#include "postswindow.h"
#include "profilewindow.h"
#include "friendswindow.h"
#include "explorewindow.h"
#include "editprofile.h"
#include "loginpage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginPage w; //switch this to MainWindow for template file
    w.show();
    return a.exec();
}
