/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MainVertBox;
    QSpacerItem *VSpacer1;
    QGroupBox *MenuOptions;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *FriendsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *PostsButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ProfileButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(320, 568);
        MainWindow->setMinimumSize(QSize(320, 568));
        MainWindow->setMaximumSize(QSize(320, 568));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-color: lightblue;\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 321, 571));
        MainVertBox = new QVBoxLayout(verticalLayoutWidget);
        MainVertBox->setObjectName(QString::fromUtf8("MainVertBox"));
        MainVertBox->setContentsMargins(0, 0, 0, 0);
        VSpacer1 = new QSpacerItem(20, 500, QSizePolicy::Policy::Maximum, QSizePolicy::Minimum);

        MainVertBox->addItem(VSpacer1);

        MenuOptions = new QGroupBox(verticalLayoutWidget);
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        MenuOptions->setStyleSheet(QString::fromUtf8("#MenuOptions {\n"
"    background-color: white;\n"
"}"));
        MenuOptions->setFlat(true);
        horizontalLayoutWidget = new QWidget(MenuOptions);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 319, 71));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        FriendsButton = new QPushButton(horizontalLayoutWidget);
        FriendsButton->setObjectName(QString::fromUtf8("FriendsButton"));
        FriendsButton->setMinimumSize(QSize(40, 40));
        FriendsButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/friendsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        FriendsButton->setIcon(icon);
        FriendsButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(FriendsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        PostsButton = new QPushButton(horizontalLayoutWidget);
        PostsButton->setObjectName(QString::fromUtf8("PostsButton"));
        PostsButton->setMinimumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/postsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        PostsButton->setIcon(icon1);
        PostsButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(PostsButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ProfileButton = new QPushButton(horizontalLayoutWidget);
        ProfileButton->setObjectName(QString::fromUtf8("ProfileButton"));
        ProfileButton->setMinimumSize(QSize(40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/profileImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProfileButton->setIcon(icon2);
        ProfileButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(ProfileButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        MainVertBox->addWidget(MenuOptions);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Template", nullptr));
        MenuOptions->setTitle(QString());
        FriendsButton->setText(QString());
        PostsButton->setText(QString());
        ProfileButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
