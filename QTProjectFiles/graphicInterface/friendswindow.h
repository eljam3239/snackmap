#ifndef FRIENDSWINDOW_H
#define FRIENDSWINDOW_H

#include <QMainWindow>

namespace Ui {
class FriendsWindow;
}

class FriendsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FriendsWindow(QWidget *parent = nullptr);
    ~FriendsWindow();

private:
    Ui::FriendsWindow *ui;
    void openPostsWindow();
    void openProfileWindow();
    void openFriendsWindow();
};

#endif // FRIENDSWINDOW_H
