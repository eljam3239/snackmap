#include "loginpage.h"
#include "ui_loginpage.h"
#include "explorewindow.h"
#include <QMessageBox>

loginPage::loginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginPage)
    , dbManager(DatabaseManager::getInstance())
{
    ui->setupUi(this);

    // connect(ui->enterButton, &QPushButton::clicked, this, &loginPage::openExploreWindow);
    connect(ui->enterButton, &QPushButton::clicked, this, &loginPage::handleLogin);
}

loginPage::~loginPage()
{
    delete ui;
}

void loginPage::handleLogin()
{
    // get username and password
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    // call the backend manager to validate the user
    if (dbManager.validateUser(username.toStdString(), password.toStdString())) {
        QMessageBox::information(this, "Login successful", "welcome," + username + "!");
        openExploreWindow();
    } else {
        QMessageBox::warning(this, "Login failed", "The user name or password is incorrect.");
    }
}

void loginPage::openExploreWindow()
{
    // create and show the second window
    ExploreWindow *exploreWindow = new ExploreWindow();
    exploreWindow->show();


    this->close();
}
