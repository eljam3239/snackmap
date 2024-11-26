#pragma once

#include <QMainWindow>
#include "model/DatabaseManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PostsWindow; }
QT_END_NAMESPACE

class PostsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PostsWindow(QWidget *parent = nullptr);
    ~PostsWindow();

    private slots:
        void loadPosts();
    void loadComments(int postId);
    void addPost();
    void addComment();
    void updateLikes(int postId);

private:
    Ui::PostsWindow *ui;
    DatabaseManager& dbManager;
};
