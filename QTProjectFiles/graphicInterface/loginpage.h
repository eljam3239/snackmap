#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>

namespace Ui {
class loginPage;
}

class loginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();

private:
    Ui::loginPage *ui;
    void openExploreWindow();
};

#endif // LOGINPAGE_H
