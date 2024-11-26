cmake_minimum_required(VERSION 3.28)
project(snackmap)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)

# add sqlite3 library
add_library(sqlite3 STATIC lib/sqlite3.c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

# set include directory
target_include_directories(sqlite3 PUBLIC ${CMAKE_SOURCE_DIR}/lib)
# add project source file
add_executable(snackmap main.cpp
        model/DatabaseManager.cpp
        model/DatabaseManager.h
        controller/UserController.cpp
        controller/UserController.h
        controller/PostController.h
        model/UserModel.h
        model/UserModel.cpp
        controller/PostController.cpp
        controller/FriendController.cpp
        controller/FriendController.h
        controller/ProfileController.h
        controller/ProfileController.cpp
        controller/LoginController.h
        controller/LoginController.cpp
        Insert_data_test.cpp
        model/PostModel.cpp
        QTProjectFiles/graphicInterface/mainwindow.cpp
        QTProjectFiles/graphicInterface/mainwindow.h
        QTProjectFiles/graphicInterface/mainwindow.ui
        QTProjectFiles/graphicInterface/loginpage.cpp
        QTProjectFiles/graphicInterface/loginpage.h
        QTProjectFiles/graphicInterface/loginpage.ui
        QTProjectFiles/graphicInterface/profilewindow.cpp
        QTProjectFiles/graphicInterface/profilewindow.h
        QTProjectFiles/graphicInterface/profilewindow.ui
        QTProjectFiles/graphicInterface/friendswindow.cpp
        QTProjectFiles/graphicInterface/friendswindow.h
        QTProjectFiles/graphicInterface/friendswindow.ui
        QTProjectFiles/graphicInterface/postswindow.cpp
        QTProjectFiles/graphicInterface/postswindow.h
        QTProjectFiles/graphicInterface/postswindow.ui
        QTProjectFiles/graphicInterface/editprofile.h
        QTProjectFiles/graphicInterface/editprofile.cpp
        QTProjectFiles/graphicInterface/editprofile.ui
        QTProjectFiles/graphicInterface/explorewindow.cpp
        QTProjectFiles/graphicInterface/explorewindow.h
        QTProjectFiles/graphicInterface/explorewindow.ui

)
#componentTesting/loginc.cpp)

# add link library


find_package(Qt5 REQUIRED COMPONENTS Widgets Core Gui)

target_link_libraries(snackmap 
        sqlite3 
        Qt5::Widgets
        Qt5::Core 
        Qt5::Gui
)
#target_link_libraries(snackmap PRIVATE Qt5::Widgets)
target_include_directories(snackmap PRIVATE
        "/usr/include/x86_64-linux-gnu/qt5",
        "/usr/include/x86_64-linux-gnu/qt5/QtWidgets",
        "/usr/include/x86_64-linux-gnu/qt5/QtGui",
        "/usr/include/x86_64-linux-gnu/qt5/QtCore")
#find_package(OpenSSL REQUIRED)
#include_directories(${OPENSSL_INCLUDE_DIR}
#        ${CMAKE_SOURCE_DIR}/model)
#target_link_libraries(snackmap OpenSSL::SSL OpenSSL::Crypto)

# Set build type explicitly
set(CMAKE_BUILD_TYPE Debug)



