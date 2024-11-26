/********************************************************************************
** Form generated from reading UI file 'postswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTSWINDOW_H
#define UI_POSTSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PostsWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MainVertBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *topGroupBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *exploreButton;
    QPushButton *postsTopButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *VSpacer1;
    QGroupBox *MenuOptions;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *FriendsButton_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *PostsButton_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ProfileButton_2;
    QSpacerItem *horizontalSpacer_8;

    void setupUi(QMainWindow *PostsWindow)
    {
        if (PostsWindow->objectName().isEmpty())
            PostsWindow->setObjectName(QString::fromUtf8("PostsWindow"));
        PostsWindow->resize(320, 568);
        PostsWindow->setMinimumSize(QSize(320, 568));
        PostsWindow->setMaximumSize(QSize(320, 568));
        centralwidget = new QWidget(PostsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-color: lightblue;\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 321, 602));
        MainVertBox = new QVBoxLayout(verticalLayoutWidget);
        MainVertBox->setObjectName(QString::fromUtf8("MainVertBox"));
        MainVertBox->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        topGroupBox = new QGroupBox(verticalLayoutWidget);
        topGroupBox->setObjectName(QString::fromUtf8("topGroupBox"));
        topGroupBox->setMaximumSize(QSize(16777215, 50));
        topGroupBox->setStyleSheet(QString::fromUtf8("#topGroupBox{\n"
"background-color: white;\n"
"}"));
        topGroupBox->setFlat(true);
        horizontalLayoutWidget_3 = new QWidget(topGroupBox);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 319, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        exploreButton = new QPushButton(horizontalLayoutWidget_3);
        exploreButton->setObjectName(QString::fromUtf8("exploreButton"));
        exploreButton->setMinimumSize(QSize(40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font.setPointSize(20);
        exploreButton->setFont(font);

        horizontalLayout_3->addWidget(exploreButton);

        postsTopButton = new QPushButton(horizontalLayoutWidget_3);
        postsTopButton->setObjectName(QString::fromUtf8("postsTopButton"));
        postsTopButton->setMinimumSize(QSize(40, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font1.setPointSize(20);
        postsTopButton->setFont(font1);

        horizontalLayout_3->addWidget(postsTopButton);


        horizontalLayout->addWidget(topGroupBox);


        MainVertBox->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

        MainVertBox->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(150, 150));
        pushButton->setMaximumSize(QSize(150, 150));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::ListAdd")));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(70, 70));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        MainVertBox->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(200, 160));
        widget->setMaximumSize(QSize(80, 16777215));
        verticalWidget_2 = new QWidget(widget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalWidget_2->setGeometry(QRect(-1, 0, 201, 161));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(verticalWidget_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(verticalWidget_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_3 = new QLineEdit(verticalWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(verticalWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(verticalWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_5->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        MainVertBox->addLayout(horizontalLayout_5);

        VSpacer1 = new QSpacerItem(20, 60, QSizePolicy::Policy::Fixed, QSizePolicy::Minimum);

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
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        FriendsButton_2 = new QPushButton(horizontalLayoutWidget);
        FriendsButton_2->setObjectName(QString::fromUtf8("FriendsButton_2"));
        FriendsButton_2->setMinimumSize(QSize(40, 40));
        FriendsButton_2->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/friendsIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        FriendsButton_2->setIcon(icon1);
        FriendsButton_2->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(FriendsButton_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        PostsButton_2 = new QPushButton(horizontalLayoutWidget);
        PostsButton_2->setObjectName(QString::fromUtf8("PostsButton_2"));
        PostsButton_2->setMinimumSize(QSize(40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/postsImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        PostsButton_2->setIcon(icon2);
        PostsButton_2->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(PostsButton_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        ProfileButton_2 = new QPushButton(horizontalLayoutWidget);
        ProfileButton_2->setObjectName(QString::fromUtf8("ProfileButton_2"));
        ProfileButton_2->setMinimumSize(QSize(40, 40));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/profileImage.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProfileButton_2->setIcon(icon3);
        ProfileButton_2->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(ProfileButton_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        MainVertBox->addWidget(MenuOptions);

        PostsWindow->setCentralWidget(centralwidget);

        retranslateUi(PostsWindow);

        QMetaObject::connectSlotsByName(PostsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PostsWindow)
    {
        PostsWindow->setWindowTitle(QCoreApplication::translate("PostsWindow", "MainWindow", nullptr));
        topGroupBox->setTitle(QString());
        exploreButton->setText(QCoreApplication::translate("PostsWindow", "EXPLORE", nullptr));
        postsTopButton->setText(QCoreApplication::translate("PostsWindow", "ADD POST", nullptr));
        pushButton->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("PostsWindow", "Title", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("PostsWindow", "Date", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("PostsWindow", "Description", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("PostsWindow", "Author", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PostsWindow", "Upload", nullptr));
        MenuOptions->setTitle(QString());
        FriendsButton_2->setText(QString());
        PostsButton_2->setText(QString());
        ProfileButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PostsWindow: public Ui_PostsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTSWINDOW_H
