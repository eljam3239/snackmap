#include "loginpage.h"
#include "ui_loginpage.h"
#include "explorewindow.h"

loginPage::loginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginPage)
{
    ui->setupUi(this);
    connect(ui->enterButton, &QPushButton::clicked, this, &loginPage::openExploreWindow);
}

loginPage::~loginPage()
{
    delete ui;

}

void loginPage::openExploreWindow()
{
    // Create and show the second window
    ExploreWindow *exploreWindow = new ExploreWindow();
    exploreWindow->show();

    // Close the current window
    this->close();
}
