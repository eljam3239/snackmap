# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eli/repos/snackmap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eli/repos/snackmap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snackmap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/snackmap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/snackmap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snackmap.dir/flags.make

CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o: snackmap_autogen/mocs_compilation.cpp
CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o -MF CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o -c /home/eli/repos/snackmap/cmake-build-debug/snackmap_autogen/mocs_compilation.cpp

CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/cmake-build-debug/snackmap_autogen/mocs_compilation.cpp > CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.i

CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/cmake-build-debug/snackmap_autogen/mocs_compilation.cpp -o CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.s

CMakeFiles/snackmap.dir/main.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/main.cpp.o: /home/eli/repos/snackmap/main.cpp
CMakeFiles/snackmap.dir/main.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/snackmap.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/main.cpp.o -MF CMakeFiles/snackmap.dir/main.cpp.o.d -o CMakeFiles/snackmap.dir/main.cpp.o -c /home/eli/repos/snackmap/main.cpp

CMakeFiles/snackmap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/main.cpp > CMakeFiles/snackmap.dir/main.cpp.i

CMakeFiles/snackmap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/main.cpp -o CMakeFiles/snackmap.dir/main.cpp.s

CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o: /home/eli/repos/snackmap/model/DatabaseManager.cpp
CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o -MF CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o.d -o CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o -c /home/eli/repos/snackmap/model/DatabaseManager.cpp

CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/model/DatabaseManager.cpp > CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.i

CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/model/DatabaseManager.cpp -o CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.s

CMakeFiles/snackmap.dir/controller/UserController.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/controller/UserController.cpp.o: /home/eli/repos/snackmap/controller/UserController.cpp
CMakeFiles/snackmap.dir/controller/UserController.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/snackmap.dir/controller/UserController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/controller/UserController.cpp.o -MF CMakeFiles/snackmap.dir/controller/UserController.cpp.o.d -o CMakeFiles/snackmap.dir/controller/UserController.cpp.o -c /home/eli/repos/snackmap/controller/UserController.cpp

CMakeFiles/snackmap.dir/controller/UserController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/controller/UserController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/controller/UserController.cpp > CMakeFiles/snackmap.dir/controller/UserController.cpp.i

CMakeFiles/snackmap.dir/controller/UserController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/controller/UserController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/controller/UserController.cpp -o CMakeFiles/snackmap.dir/controller/UserController.cpp.s

CMakeFiles/snackmap.dir/model/UserModel.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/model/UserModel.cpp.o: /home/eli/repos/snackmap/model/UserModel.cpp
CMakeFiles/snackmap.dir/model/UserModel.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/snackmap.dir/model/UserModel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/model/UserModel.cpp.o -MF CMakeFiles/snackmap.dir/model/UserModel.cpp.o.d -o CMakeFiles/snackmap.dir/model/UserModel.cpp.o -c /home/eli/repos/snackmap/model/UserModel.cpp

CMakeFiles/snackmap.dir/model/UserModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/model/UserModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/model/UserModel.cpp > CMakeFiles/snackmap.dir/model/UserModel.cpp.i

CMakeFiles/snackmap.dir/model/UserModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/model/UserModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/model/UserModel.cpp -o CMakeFiles/snackmap.dir/model/UserModel.cpp.s

CMakeFiles/snackmap.dir/controller/PostController.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/controller/PostController.cpp.o: /home/eli/repos/snackmap/controller/PostController.cpp
CMakeFiles/snackmap.dir/controller/PostController.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/snackmap.dir/controller/PostController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/controller/PostController.cpp.o -MF CMakeFiles/snackmap.dir/controller/PostController.cpp.o.d -o CMakeFiles/snackmap.dir/controller/PostController.cpp.o -c /home/eli/repos/snackmap/controller/PostController.cpp

CMakeFiles/snackmap.dir/controller/PostController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/controller/PostController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/controller/PostController.cpp > CMakeFiles/snackmap.dir/controller/PostController.cpp.i

CMakeFiles/snackmap.dir/controller/PostController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/controller/PostController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/controller/PostController.cpp -o CMakeFiles/snackmap.dir/controller/PostController.cpp.s

CMakeFiles/snackmap.dir/controller/FriendController.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/controller/FriendController.cpp.o: /home/eli/repos/snackmap/controller/FriendController.cpp
CMakeFiles/snackmap.dir/controller/FriendController.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/snackmap.dir/controller/FriendController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/controller/FriendController.cpp.o -MF CMakeFiles/snackmap.dir/controller/FriendController.cpp.o.d -o CMakeFiles/snackmap.dir/controller/FriendController.cpp.o -c /home/eli/repos/snackmap/controller/FriendController.cpp

CMakeFiles/snackmap.dir/controller/FriendController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/controller/FriendController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/controller/FriendController.cpp > CMakeFiles/snackmap.dir/controller/FriendController.cpp.i

CMakeFiles/snackmap.dir/controller/FriendController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/controller/FriendController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/controller/FriendController.cpp -o CMakeFiles/snackmap.dir/controller/FriendController.cpp.s

CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o: /home/eli/repos/snackmap/controller/ProfileController.cpp
CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o -MF CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o.d -o CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o -c /home/eli/repos/snackmap/controller/ProfileController.cpp

CMakeFiles/snackmap.dir/controller/ProfileController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/controller/ProfileController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/controller/ProfileController.cpp > CMakeFiles/snackmap.dir/controller/ProfileController.cpp.i

CMakeFiles/snackmap.dir/controller/ProfileController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/controller/ProfileController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/controller/ProfileController.cpp -o CMakeFiles/snackmap.dir/controller/ProfileController.cpp.s

CMakeFiles/snackmap.dir/controller/LoginController.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/controller/LoginController.cpp.o: /home/eli/repos/snackmap/controller/LoginController.cpp
CMakeFiles/snackmap.dir/controller/LoginController.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/snackmap.dir/controller/LoginController.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/controller/LoginController.cpp.o -MF CMakeFiles/snackmap.dir/controller/LoginController.cpp.o.d -o CMakeFiles/snackmap.dir/controller/LoginController.cpp.o -c /home/eli/repos/snackmap/controller/LoginController.cpp

CMakeFiles/snackmap.dir/controller/LoginController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/controller/LoginController.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/controller/LoginController.cpp > CMakeFiles/snackmap.dir/controller/LoginController.cpp.i

CMakeFiles/snackmap.dir/controller/LoginController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/controller/LoginController.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/controller/LoginController.cpp -o CMakeFiles/snackmap.dir/controller/LoginController.cpp.s

CMakeFiles/snackmap.dir/Insert_data_test.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/Insert_data_test.cpp.o: /home/eli/repos/snackmap/Insert_data_test.cpp
CMakeFiles/snackmap.dir/Insert_data_test.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/snackmap.dir/Insert_data_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/Insert_data_test.cpp.o -MF CMakeFiles/snackmap.dir/Insert_data_test.cpp.o.d -o CMakeFiles/snackmap.dir/Insert_data_test.cpp.o -c /home/eli/repos/snackmap/Insert_data_test.cpp

CMakeFiles/snackmap.dir/Insert_data_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/Insert_data_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/Insert_data_test.cpp > CMakeFiles/snackmap.dir/Insert_data_test.cpp.i

CMakeFiles/snackmap.dir/Insert_data_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/Insert_data_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/Insert_data_test.cpp -o CMakeFiles/snackmap.dir/Insert_data_test.cpp.s

CMakeFiles/snackmap.dir/model/PostModel.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/model/PostModel.cpp.o: /home/eli/repos/snackmap/model/PostModel.cpp
CMakeFiles/snackmap.dir/model/PostModel.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/snackmap.dir/model/PostModel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/model/PostModel.cpp.o -MF CMakeFiles/snackmap.dir/model/PostModel.cpp.o.d -o CMakeFiles/snackmap.dir/model/PostModel.cpp.o -c /home/eli/repos/snackmap/model/PostModel.cpp

CMakeFiles/snackmap.dir/model/PostModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/model/PostModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/model/PostModel.cpp > CMakeFiles/snackmap.dir/model/PostModel.cpp.i

CMakeFiles/snackmap.dir/model/PostModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/model/PostModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/model/PostModel.cpp -o CMakeFiles/snackmap.dir/model/PostModel.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/mainwindow.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/mainwindow.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/mainwindow.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/mainwindow.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/loginpage.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/loginpage.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/loginpage.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/loginpage.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/profilewindow.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/profilewindow.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/profilewindow.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/profilewindow.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/friendswindow.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/friendswindow.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/friendswindow.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/friendswindow.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/postswindow.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/postswindow.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/postswindow.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/postswindow.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/editprofile.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/editprofile.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/editprofile.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/editprofile.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.s

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o: CMakeFiles/snackmap.dir/flags.make
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o: /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/explorewindow.cpp
CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o: CMakeFiles/snackmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o -MF CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o.d -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o -c /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/explorewindow.cpp

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/explorewindow.cpp > CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.i

CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eli/repos/snackmap/QTProjectFiles/graphicInterface/explorewindow.cpp -o CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.s

# Object files for target snackmap
snackmap_OBJECTS = \
"CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/snackmap.dir/main.cpp.o" \
"CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o" \
"CMakeFiles/snackmap.dir/controller/UserController.cpp.o" \
"CMakeFiles/snackmap.dir/model/UserModel.cpp.o" \
"CMakeFiles/snackmap.dir/controller/PostController.cpp.o" \
"CMakeFiles/snackmap.dir/controller/FriendController.cpp.o" \
"CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o" \
"CMakeFiles/snackmap.dir/controller/LoginController.cpp.o" \
"CMakeFiles/snackmap.dir/Insert_data_test.cpp.o" \
"CMakeFiles/snackmap.dir/model/PostModel.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o" \
"CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o"

# External object files for target snackmap
snackmap_EXTERNAL_OBJECTS =

snackmap: CMakeFiles/snackmap.dir/snackmap_autogen/mocs_compilation.cpp.o
snackmap: CMakeFiles/snackmap.dir/main.cpp.o
snackmap: CMakeFiles/snackmap.dir/model/DatabaseManager.cpp.o
snackmap: CMakeFiles/snackmap.dir/controller/UserController.cpp.o
snackmap: CMakeFiles/snackmap.dir/model/UserModel.cpp.o
snackmap: CMakeFiles/snackmap.dir/controller/PostController.cpp.o
snackmap: CMakeFiles/snackmap.dir/controller/FriendController.cpp.o
snackmap: CMakeFiles/snackmap.dir/controller/ProfileController.cpp.o
snackmap: CMakeFiles/snackmap.dir/controller/LoginController.cpp.o
snackmap: CMakeFiles/snackmap.dir/Insert_data_test.cpp.o
snackmap: CMakeFiles/snackmap.dir/model/PostModel.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/mainwindow.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/loginpage.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/profilewindow.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/friendswindow.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/postswindow.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/editprofile.cpp.o
snackmap: CMakeFiles/snackmap.dir/QTProjectFiles/graphicInterface/explorewindow.cpp.o
snackmap: CMakeFiles/snackmap.dir/build.make
snackmap: libsqlite3.a
snackmap: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.13
snackmap: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.13
snackmap: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.13
snackmap: CMakeFiles/snackmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/eli/repos/snackmap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Linking CXX executable snackmap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snackmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snackmap.dir/build: snackmap
.PHONY : CMakeFiles/snackmap.dir/build

CMakeFiles/snackmap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snackmap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snackmap.dir/clean

CMakeFiles/snackmap.dir/depend:
	cd /home/eli/repos/snackmap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eli/repos/snackmap /home/eli/repos/snackmap /home/eli/repos/snackmap/cmake-build-debug /home/eli/repos/snackmap/cmake-build-debug /home/eli/repos/snackmap/cmake-build-debug/CMakeFiles/snackmap.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/snackmap.dir/depend
