#include "profilewindow.h"
#include "ui_profilewindow.h"
#include "postswindow.h"
#include "friendswindow.h"
#include "editprofile.h"

ProfileWindow::ProfileWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ProfileWindow)
{
    ui->setupUi(this);
    connect(ui->PostsButton, &QPushButton::clicked, this, &ProfileWindow::openPostsWindow);
    connect(ui->ProfileButton, &QPushButton::clicked, this, &ProfileWindow::openProfileWindow);
    connect(ui->FriendsButton, &QPushButton::clicked, this, &ProfileWindow::openFriendsWindow);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &ProfileWindow::openEditProfile);
}

ProfileWindow::~ProfileWindow()
{
    delete ui;
}


void ProfileWindow::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void ProfileWindow::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void ProfileWindow::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}

void ProfileWindow::openEditProfile()
{
    // Create and show the second window
    editprofile *editProfileWindow = new editprofile();
    editProfileWindow->show();

    // Close the current window
    this->close();
}
