#include "mainwindow.h"
#include "postswindow.h"
#include "profilewindow.h"
#include "friendswindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->PostsButton, &QPushButton::clicked, this, &MainWindow::openPostsWindow);
    connect(ui->ProfileButton, &QPushButton::clicked, this, &MainWindow::openProfileWindow);
    connect(ui->FriendsButton, &QPushButton::clicked, this, &MainWindow::openFriendsWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openPostsWindow()
{
    // Create and show the second window
    PostsWindow *postsWindow = new PostsWindow();
    postsWindow->show();

    // Close the current window
    this->close();
}

void MainWindow::openProfileWindow()
{
    // Create and show the second window
    ProfileWindow *profileWindow = new ProfileWindow();
    profileWindow->show();

    // Close the current window
    this->close();
}

void MainWindow::openFriendsWindow()
{
    // Create and show the second window
    FriendsWindow *friendsWindow = new FriendsWindow();
    friendsWindow->show();

    // Close the current window
    this->close();
}
