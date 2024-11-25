cmake_minimum_required(VERSION 3.28)
project(snackmap)

set(CMAKE_CXX_STANDARD 14)

# add sqlite3 library
add_library(sqlite3 STATIC lib/sqlite3.c)
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
        QTProjectFiles/graphicinterface/mainwindow.cpp
        QTProjectFiles/graphicinterface/mainwindow.h
        QTProjectFiles/graphicinterface/mainwindow.ui
        QTProjectFiles/graphicinterface/loginwindow.cpp
        QTProjectFiles/graphicinterface/loginwindow.h
        QTProjectFiles/graphicinterface/loginwindow.ui
        QTProjectFiles/graphicinterface/registerwindow.cpp
        QTProjectFiles/graphicinterface/registerwindow.h
        QTProjectFiles/graphicinterface/registerwindow.ui
        QTProjectFiles/graphicinterface/profilewindow.cpp
        QTProjectFiles/graphicinterface/profilewindow.h
        QTProjectFiles/graphicinterface/profilewindow.ui
        QTProjectFiles/graphicinterface/friendwindow.cpp
        QTProjectFiles/graphicinterface/friendwindow.h
        QTProjectFiles/graphicinterface/friendwindow.ui
        QTProjectFiles/graphicinterface/postwindow.cpp
        QTProjectFiles/graphicinterface/postwindow.h
        QTProjectFiles/graphicinterface/postwindow.ui
        QTProjectFiles/graphicinterface/editprofile.h
        QTProjectFiles/graphicinterface/editprofile.cpp
        QTProjectFiles/graphicinterface/editprofile.ui

)
#componentTesting/loginc.cpp)

# add link library
target_link_libraries(snackmap sqlite3)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
target_link_libraries(mytarget PRIVATE Qt6::Widgets)
#find_package(OpenSSL REQUIRED)
#include_directories(${OPENSSL_INCLUDE_DIR}
#        ${CMAKE_SOURCE_DIR}/model)
#target_link_libraries(snackmap OpenSSL::SSL OpenSSL::Crypto)

# Set build type explicitly
set(CMAKE_BUILD_TYPE Debug)
