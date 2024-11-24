#include "postswindow.h"
#include "profilewindow.h"
#include "ui_postswindow.h"
#include "friendswindow.h"

PostsWindow::PostsWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::PostsWindow)

{
    ui->setupUi(this);
    connect(ui->PostsButton_2, &QPushButton::clicked, this, &PostsWindow::openPostsWindow);
    connect(ui->ProfileButton_2, &QPushButton::clicked, this, &PostsWindow::openProfileWindow);
    connect(ui->FriendsButton_2, &QPushButton::clicked, this, &PostsWindow::openFriendsWindow);
}

PostsWindow::~PostsWindow()
{
    delete ui;
}


void PostsWindow::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void PostsWindow::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void PostsWindow::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}
