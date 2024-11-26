#include "editprofile.h"
#include "ui_editprofile.h"
#include "postswindow.h"
#include "friendswindow.h"
#include "profilewindow.h"
#include "explorewindow.h"
#include <QMessageBox>

// Constructor: Initialize editprofile with the user ID
editprofile::editprofile(int userId, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editprofile)
    , dbManager(DatabaseManager::getInstance())  // Initialize backend manager
    , currentUserId(userId)                      // Store the current user ID
{
    ui->setupUi(this);

    // Connect navigation buttons to corresponding slots
    connect(ui->PostsButton, &QPushButton::clicked, this, &editprofile::openPostsWindow);
    connect(ui->ProfileButton, &QPushButton::clicked, this, &editprofile::openProfileWindow);
    connect(ui->FriendsButton, &QPushButton::clicked, this, &editprofile::openFriendsWindow);
    connect(ui->exploreButton, &QPushButton::clicked, this, &editprofile::openExploreWindow);

    // Connect the save button to the updateProfile slot
    connect(ui->saveButton, &QPushButton::clicked, this, &editprofile::updateProfile);
}

// Destructor: Clean up UI resources
editprofile::~editprofile()
{
    delete ui;
}

// Slot: Update user profile in the database
void editprofile::updateProfile()
{
    // Retrieve user input from the UI
    QString newName = ui->nameInput->text();
    QString newBio = ui->bioInput->text();
    QString newProfilePicture = ui->profilePictureInput->text();

    // Call the backend to update the user profile
    if (dbManager.updateUserProfile(currentUserId, newName.toStdString(), newBio.toStdString(), newProfilePicture.toStdString())) {
        QMessageBox::information(this, "Update Successful", "Your profile has been updated successfully!");
    } else {
        QMessageBox::warning(this, "Update Failed", "An error occurred while updating your profile. Please try again later.");
    }
}

// Slot: Open the Posts window
void editprofile::openPostsWindow()
{
    // Create and show the Posts window
    PostsWindow *postsWindow = new PostsWindow(currentUserId);
    postsWindow->show();

    // Close the current window
    this->close();
}

// Slot: Open the Profile window
void editprofile::openProfileWindow()
{
    // Create and show the Profile window
    ProfileWindow *profileWindow = new ProfileWindow(currentUserId);
    profileWindow->show();

    // Close the current window
    this->close();
}

// Slot: Open the Friends window
void editprofile::openFriendsWindow()
{
    // Create and show the Friends window
    FriendsWindow *friendsWindow = new FriendsWindow(currentUserId);
    friendsWindow->show();

    // Close the current window
    this->close();
}

// Slot: Open the Explore window
void editprofile::openExploreWindow()
{
    // Create and show the Explore window
    ExploreWindow *exploreWindow = new ExploreWindow(currentUserId);
    exploreWindow->show();

    // Close the current window
    this->close();
}
