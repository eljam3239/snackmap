/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editprofile
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *MainVertBox;
    QFrame *TopBanner;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QToolButton *toolButton;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
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

    void setupUi(QWidget *editprofile)
    {
        if (editprofile->objectName().isEmpty())
            editprofile->setObjectName(QString::fromUtf8("editprofile"));
        editprofile->resize(320, 568);
        editprofile->setStyleSheet(QString::fromUtf8("#editprofile { \n"
"background-color: rgb(255, 255, 255); /* RGB color */\n"
"}"));
        verticalLayoutWidget = new QWidget(editprofile);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 322, 734));
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

        toolButton = new QToolButton(verticalLayoutWidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(320, 25));
        toolButton->setStyleSheet(QString::fromUtf8("   color: Black;               \n"
"    font-size: 14px;            /* Adjust font size */\n"
""));
        toolButton->setAutoRepeatDelay(297);
        toolButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextOnly);

        MainVertBox->addWidget(toolButton);

        horizontalWidget_3 = new QWidget(verticalLayoutWidget);
        horizontalWidget_3->setObjectName(QString::fromUtf8("horizontalWidget_3"));
        horizontalWidget_3->setMaximumSize(QSize(320, 20));
        horizontalLayout_10 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));

        MainVertBox->addWidget(horizontalWidget_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(320, 30));
        label_2->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 1px;   "));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(200, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    background-color: white;     /* Background color */\n"
"    border: 1px solid black;    /* Optional border */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 1px;   "));
        lineEdit->setMaxLength(200);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lineEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(320, 30));
        label_3->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 1px;   "));

        verticalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(200, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    background-color: white;     /* Background color */\n"
"    border: 1px solid black;    /* Optional border */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 5px;   "));
        lineEdit_2->setMaxLength(200);

        verticalLayout->addWidget(lineEdit_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(320, 30));
        label_4->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 1px;   "));

        verticalLayout->addWidget(label_4);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(200, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    background-color: white;     /* Background color */\n"
"    border: 1px solid black;    /* Optional border */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 5px;   "));
        lineEdit_3->setMaxLength(200);

        verticalLayout->addWidget(lineEdit_3);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(320, 30));
        label_5->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 1px;   "));

        verticalLayout->addWidget(label_5);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(200, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("   color: Black;               /* Text color */\n"
"    background-color: white;     /* Background color */\n"
"    border: 1px solid black;    /* Optional border */\n"
"    font-size: 14px;            /* Adjust font size */\n"
"    padding: 5px;   "));
        lineEdit_4->setMaxLength(200);

        verticalLayout->addWidget(lineEdit_4);


        horizontalLayout_11->addLayout(verticalLayout);


        MainVertBox->addLayout(horizontalLayout_11);

        MenuOptions = new QGroupBox(verticalLayoutWidget);
        MenuOptions->setObjectName(QString::fromUtf8("MenuOptions"));
        MenuOptions->setToolTipDuration(-1);
        MenuOptions->setStyleSheet(QString::fromUtf8("#MenuOptions {\n"
"    background-color: white;\n"
"}"));
        MenuOptions->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
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


        retranslateUi(editprofile);

        QMetaObject::connectSlotsByName(editprofile);
    } // setupUi

    void retranslateUi(QWidget *editprofile)
    {
        editprofile->setWindowTitle(QCoreApplication::translate("editprofile", "Form", nullptr));
        label->setText(QCoreApplication::translate("editprofile", "Profile", nullptr));
        toolButton->setText(QCoreApplication::translate("editprofile", "Change Picture", nullptr));
        label_2->setText(QCoreApplication::translate("editprofile", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("editprofile", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("editprofile", "Phone Number", nullptr));
        label_5->setText(QCoreApplication::translate("editprofile", "Password", nullptr));
        MenuOptions->setTitle(QString());
        FriendsButton->setText(QString());
        PostsButton->setText(QString());
        ProfileButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editprofile: public Ui_editprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
