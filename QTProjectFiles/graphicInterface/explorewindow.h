#ifndef EXPLOREWINDOW_H
#define EXPLOREWINDOW_H

#include <QMainWindow>

namespace Ui {
class ExploreWindow;
}

class ExploreWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExploreWindow(QWidget *parent = nullptr);
    ~ExploreWindow();

private:
    Ui::ExploreWindow *ui;
    void openPostsWindow();
    void openProfileWindow();
    void openFriendsWindow();
};

#endif // EXPLOREWINDOW_H
