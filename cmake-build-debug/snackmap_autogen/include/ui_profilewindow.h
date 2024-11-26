/********************************************************************************
** Form generated from reading UI file 'profilewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEWINDOW_H
#define UI_PROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MainVertBox;
    QFrame *TopBanner;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QFrame *Settings;
    QTextBrowser *textBrowser;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton;
    QSpacerItem *verticalSpacer_7;
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

    void setupUi(QMainWindow *ProfileWindow)
    {
        if (ProfileWindow->objectName().isEmpty())
            ProfileWindow->setObjectName(QString::fromUtf8("ProfileWindow"));
        ProfileWindow->resize(320, 568);
        ProfileWindow->setMinimumSize(QSize(320, 568));
        ProfileWindow->setMaximumSize(QSize(320, 568));
        centralwidget = new QWidget(ProfileWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-color: white;\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 321, 734));
        MainVertBox = new QVBoxLayout(verticalLayoutWidget);
        MainVertBox->setObjectName(QString::fromUtf8("MainVertBox"));
        MainVertBox->setContentsMargins(0, 0, 0, 0);
        TopBanner = new QFrame(verticalLayoutWidget);
        TopBanner->setObjectName(QString::fromUtf8("TopBanner"));
        TopBanner->setMaximumSize(QSize(320, 200));
        TopBanner->setStyleSheet(QString::fromUtf8("background-color: lightblue;\n"
"\n"
"\n"
""));
        TopBanner->setFrameShape(QFrame::Shape::StyledPanel);
        TopBanner->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(TopBanner);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(110, 90, 100, 100));
        frame->setMaximumSize(QSize(100, 100));
        frame->setStyleSheet(QString::fromUtf8("border: 2px solid black; \n"
"border-radius: 50px;    \n"
"background-color: white;   \n"
""));
        frame->setFrameShape(QFrame::Shape::NoFrame);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        horizontalLayoutWidget_2 = new QWidget(TopBanner);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(-1, 30, 321, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(39, 0));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(label);


        MainVertBox->addWidget(TopBanner);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        MainVertBox->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("    color: black;\n"
""));

        MainVertBox->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Maximum, QSizePolicy::Minimum);

        MainVertBox->addItem(verticalSpacer);

        Settings = new QFrame(verticalLayoutWidget);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setMaximumSize(QSize(320, 150));
        Settings->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;   \n"
""));
        Settings->setFrameShape(QFrame::Shape::NoFrame);
        Settings->setFrameShadow(QFrame::Shadow::Plain);
        textBrowser = new QTextBrowser(Settings);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 321, 31));
        textBrowser->setAutoFillBackground(false);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: Grey;\n"
""));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        horizontalLayoutWidget_3 = new QWidget(Settings);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(-1, 50, 321, 101));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolButton_2 = new QToolButton(horizontalLayoutWidget_3);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setStyleSheet(QString::fromUtf8("    color: black;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/1077035.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon);
        toolButton_2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(horizontalLayoutWidget_3);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setStyleSheet(QString::fromUtf8("    color: black;\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/4104794.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon1);
        toolButton_3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(toolButton_3);

        toolButton = new QToolButton(horizontalLayoutWidget_3);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setStyleSheet(QString::fromUtf8("    color: black;\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);

        verticalLayout->addWidget(toolButton);


        horizontalLayout_5->addLayout(verticalLayout);


        MainVertBox->addWidget(Settings);

        verticalSpacer_7 = new QSpacerItem(20, 30, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        MainVertBox->addItem(verticalSpacer_7);

        MenuOptions = new QGroupBox(verticalLayoutWidget);
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        MenuOptions->setMinimumSize(QSize(0, 60));
        MenuOptions->setMaximumSize(QSize(16777215, 220));
        MenuOptions->setToolTipDuration(-1);
        MenuOptions->setStyleSheet(QString::fromUtf8("#MenuOptions {\n"
"    background-color: white;\n"
"}"));
        MenuOptions->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        MenuOptions->setFlat(true);
        horizontalLayoutWidget = new QWidget(MenuOptions);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 319, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        FriendsButton = new QPushButton(horizontalLayoutWidget);
        FriendsButton->setObjectName(QString::fromUtf8("FriendsButton"));
        FriendsButton->setMinimumSize(QSize(40, 40));
        FriendsButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/friendsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        FriendsButton->setIcon(icon3);
        FriendsButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(FriendsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        PostsButton = new QPushButton(horizontalLayoutWidget);
        PostsButton->setObjectName(QString::fromUtf8("PostsButton"));
        PostsButton->setMinimumSize(QSize(40, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/postsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        PostsButton->setIcon(icon4);
        PostsButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(PostsButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ProfileButton = new QPushButton(horizontalLayoutWidget);
        ProfileButton->setObjectName(QString::fromUtf8("ProfileButton"));
        ProfileButton->setMinimumSize(QSize(40, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/profileImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProfileButton->setIcon(icon5);
        ProfileButton->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(ProfileButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        MainVertBox->addWidget(MenuOptions);

        ProfileWindow->setCentralWidget(centralwidget);

        retranslateUi(ProfileWindow);

        QMetaObject::connectSlotsByName(ProfileWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProfileWindow)
    {
        ProfileWindow->setWindowTitle(QCoreApplication::translate("ProfileWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ProfileWindow", "Profile", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ProfileWindow", "Edit Profile", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("ProfileWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:13pt;\">Settings</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:13pt;\"><br /></p></body></html>", nullptr));
        toolButton_2->setText(QCoreApplication::translate("ProfileWindow", "View Posts", nullptr));
        toolButton_3->setText(QCoreApplication::translate("ProfileWindow", "Privacy Settings", nullptr));
        toolButton->setText(QCoreApplication::translate("ProfileWindow", "Languages", nullptr));
        MenuOptions->setTitle(QString());
        FriendsButton->setText(QString());
        PostsButton->setText(QString());
        ProfileButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfileWindow: public Ui_ProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEWINDOW_H
