#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QWidget>

namespace Ui {
class editprofile;
}

class editprofile : public QWidget
{
    Q_OBJECT

public:
    explicit editprofile(QWidget *parent = nullptr);
    ~editprofile();

private:
    Ui::editprofile *ui;
};

#endif // EDITPROFILE_H
