#include "explorewindow.h"
#include "ui_explorewindow.h"
#include "friendswindow.h"
#include "mainwindow.h"
#include "postswindow.h"
#include "profilewindow.h"

ExploreWindow::ExploreWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ExploreWindow)
{
    ui->setupUi(this);
    connect(ui->PostsButton_2, &QPushButton::clicked, this, &ExploreWindow::openPostsWindow);
    connect(ui->ProfileButton_2, &QPushButton::clicked, this, &ExploreWindow::openProfileWindow);
    connect(ui->FriendsButton_2, &QPushButton::clicked, this, &ExploreWindow::openFriendsWindow);
    connect(ui->postsTopButton, &QPushButton::clicked, this, &ExploreWindow::openPostsWindow);
}

ExploreWindow::~ExploreWindow()
{
    delete ui;
}


void ExploreWindow::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void ExploreWindow::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void ExploreWindow::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}
