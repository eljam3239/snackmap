#pragma once

#include <QWidget>
#include "model/DatabaseManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class editprofile; }
QT_END_NAMESPACE

class editprofile : public QWidget
{
    Q_OBJECT

public:
    explicit editprofile(int userId, QWidget *parent = nullptr); // 接收用户 ID
    ~editprofile();

    private slots:
        void updateProfile();
    void openPostsWindow();
    void openProfileWindow();
    void openFriendsWindow();
    void openExploreWindow();

private:
    Ui::editprofile *ui;
    DatabaseManager& dbManager;
    int currentUserId;
};
