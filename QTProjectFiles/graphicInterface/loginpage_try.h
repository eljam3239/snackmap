#pragma once

#include <QMainWindow>
#include "model/DatabaseManager.h" // 引入后端管理器

QT_BEGIN_NAMESPACE
namespace Ui { class loginPage; }
QT_END_NAMESPACE

class loginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginPage(QWidget *parent = nullptr);
    ~loginPage();

    private slots:
        void handleLogin();
    void openExploreWindow();

private:
    Ui::loginPage *ui;
    DatabaseManager& dbManager;
};
