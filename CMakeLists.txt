cmake_minimum_required(VERSION 3.29)
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

)
#componentTesting/loginc.cpp)

# add link library
target_link_libraries(snackmap sqlite3)


#find_package(OpenSSL REQUIRED)
#include_directories(${OPENSSL_INCLUDE_DIR}
#        ${CMAKE_SOURCE_DIR}/model)
#target_link_libraries(snackmap OpenSSL::SSL OpenSSL::Crypto)

# Set build type explicitly
set(CMAKE_BUILD_TYPE Debug)
