#ifndef POSTSWINDOW_H
#define POSTSWINDOW_H

#include <QMainWindow>

namespace Ui {
class PostsWindow;
}

class PostsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostsWindow(QWidget *parent = nullptr);
    ~PostsWindow();

private:
    Ui::PostsWindow *ui;
    void openPostsWindow();
    void openProfileWindow();
    void openFriendsWindow();
    void openExploreWindow();
};


#endif // POSTSWINDOW_H
