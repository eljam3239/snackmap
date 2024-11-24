#include "editprofile.h"
#include "ui_editprofile.h"
#include "postswindow.h"
#include "friendswindow.h"
#include "profilewindow.h"
editprofile::editprofile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editprofile)
{
    ui->setupUi(this);
    connect(ui->PostsButton, &QPushButton::clicked, this, &editprofile::openPostsWindow);
    connect(ui->ProfileButton, &QPushButton::clicked, this, &editprofile::openProfileWindow);
    connect(ui->FriendsButton, &QPushButton::clicked, this, &editprofile::openFriendsWindow);
}

editprofile::~editprofile()
{
    delete ui;
}


void editprofile::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void editprofile::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void editprofile::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}
