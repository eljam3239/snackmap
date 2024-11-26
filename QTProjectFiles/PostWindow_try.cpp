#include "postswindow.h"
#include "ui_postswindow.h"
#include <QMessageBox>
#include <QString>

PostsWindow::PostsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PostsWindow)
    , dbManager(DatabaseManager::getInstance())
    , currentUserId(userId)
{
    ui->setupUi(this);


    loadPosts();


    connect(ui->addPostButton, &QPushButton::clicked, this, &PostsWindow::addPost);
    connect(ui->addCommentButton, &QPushButton::clicked, this, &PostsWindow::addComment);
    connect(ui->likeButton, &QPushButton::clicked, [this]() {
        int postId = ui->postIdInput->text().toInt();
        updateLikes(postId);
    });
}

PostsWindow::~PostsWindow()
{
    delete ui;
}

void PostsWindow::loadPosts()
{

    std::vector<std::tuple<int, std::string, int>> posts = dbManager.getUserPostsWithLikes(userId);

    // 清空 UI 列表
    ui->postsListWidget->clear();

    // 显示帖子内容
    for (const auto& [postId, content, likes] : posts) {
        QString postInfo = QString("Post ID: %1\nContent: %2\nLikes: %3")
            .arg(postId).arg(QString::fromStdString(content)).arg(likes);
        ui->postsListWidget->addItem(postInfo);
    }
}

void PostsWindow::loadComments(int postId)
{

    std::vector<std::string> comments = dbManager.getCommentsForPost(postId);

    // 清空评论列表
    ui->commentsListWidget->clear();

    // 显示评论
    for (const auto& comment : comments) {
        ui->commentsListWidget->addItem(QString::fromStdString(comment));
    }
}

void PostsWindow::addPost()
{
    QString content = ui->postContentInput->text();

    // 写入数据库
    if (dbManager.addPost(1, content.toStdString())) {
        QMessageBox::information(this, "Success", "Post added successfully!");
        loadPosts();  // 重新加载帖子
    } else {
        QMessageBox::warning(this, "Error", "Failed to add post.");
    }
}

void PostsWindow::addComment()
{
    int postId = ui->postIdInput->text().toInt();
    QString comment = ui->commentInput->text();

    // 写入数据库
    if (dbManager.addComment(postId, comment.toStdString())) {
        QMessageBox::information(this, "Success", "Comment added successfully!");
        loadComments(postId);
    } else {
        QMessageBox::warning(this, "Error", "Failed to add comment.");
    }
}

void PostsWindow::updateLikes(int postId)
{
    // 更新点赞数
    if (dbManager.updateLikes(postId)) {
        QMessageBox::information(this, "Success", "Like updated successfully!");
        loadPosts();
    } else {
        QMessageBox::warning(this, "Error", "Failed to update likes.");
    }
}
