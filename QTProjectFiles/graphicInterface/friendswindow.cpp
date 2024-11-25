#include "friendswindow.h"
#include "postswindow.h"
#include "profilewindow.h"
#include "ui_friendswindow.h"
#include "explorewindow.h"

FriendsWindow::FriendsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FriendsWindow)
{
    ui->setupUi(this);
    connect(ui->PostsButton_4, &QPushButton::clicked, this, &FriendsWindow::openExploreWindow);
    connect(ui->ProfileButton_4, &QPushButton::clicked, this, &FriendsWindow::openProfileWindow);
    connect(ui->FriendsButton_4, &QPushButton::clicked, this, &FriendsWindow::openFriendsWindow);
}

FriendsWindow::~FriendsWindow()
{
    delete ui;
}

void FriendsWindow::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void FriendsWindow::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void FriendsWindow::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}


void FriendsWindow::openExploreWindow()
{
    // Create and show the second window
    ExploreWindow *friendsWindow = new ExploreWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}
