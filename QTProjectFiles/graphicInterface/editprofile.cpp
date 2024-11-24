#include "editprofile.h"
#include "ui_editprofile.h"

editprofile::editprofile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editprofile)
{
    ui->setupUi(this);
}

editprofile::~editprofile()
{
    delete ui;
}
