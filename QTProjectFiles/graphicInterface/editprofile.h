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
    void openPostsWindow();
    void openProfileWindow();
    void openFriendsWindow();
    void openExploreWindow();
};

#endif // EDITPROFILE_H
