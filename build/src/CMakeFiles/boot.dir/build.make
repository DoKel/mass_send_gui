# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dokel/Workspace/BotGUI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dokel/Workspace/BotGUI/build

# Include any dependencies generated for this target.
include src/CMakeFiles/boot.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/boot.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/boot.dir/flags.make

src/CMakeFiles/boot.dir/boot.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/boot.cpp.o: ../src/boot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/boot.dir/boot.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/boot.cpp.o -c /home/dokel/Workspace/BotGUI/src/boot.cpp

src/CMakeFiles/boot.dir/boot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/boot.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/boot.cpp > CMakeFiles/boot.dir/boot.cpp.i

src/CMakeFiles/boot.dir/boot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/boot.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/boot.cpp -o CMakeFiles/boot.dir/boot.cpp.s

src/CMakeFiles/boot.dir/MainApplication.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/MainApplication.cpp.o: ../src/MainApplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/boot.dir/MainApplication.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/MainApplication.cpp.o -c /home/dokel/Workspace/BotGUI/src/MainApplication.cpp

src/CMakeFiles/boot.dir/MainApplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/MainApplication.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/MainApplication.cpp > CMakeFiles/boot.dir/MainApplication.cpp.i

src/CMakeFiles/boot.dir/MainApplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/MainApplication.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/MainApplication.cpp -o CMakeFiles/boot.dir/MainApplication.cpp.s

src/CMakeFiles/boot.dir/MainWindow.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/MainWindow.cpp.o: ../src/MainWindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/boot.dir/MainWindow.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/MainWindow.cpp.o -c /home/dokel/Workspace/BotGUI/src/MainWindow.cpp

src/CMakeFiles/boot.dir/MainWindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/MainWindow.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/MainWindow.cpp > CMakeFiles/boot.dir/MainWindow.cpp.i

src/CMakeFiles/boot.dir/MainWindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/MainWindow.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/MainWindow.cpp -o CMakeFiles/boot.dir/MainWindow.cpp.s

src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o: ../src/Widgets/RecipientsPane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o -c /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsPane.cpp

src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsPane.cpp > CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.i

src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsPane.cpp -o CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.s

src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o: ../src/Widgets/MsgControlsPane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o -c /home/dokel/Workspace/BotGUI/src/Widgets/MsgControlsPane.cpp

src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Widgets/MsgControlsPane.cpp > CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.i

src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Widgets/MsgControlsPane.cpp -o CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.s

src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o: ../src/Widgets/RecipientsTreeView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o -c /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsTreeView.cpp

src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsTreeView.cpp > CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.i

src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Widgets/RecipientsTreeView.cpp -o CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.s

src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o: ../src/Widgets/LastMsgsTreeView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o -c /home/dokel/Workspace/BotGUI/src/Widgets/LastMsgsTreeView.cpp

src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Widgets/LastMsgsTreeView.cpp > CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.i

src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Widgets/LastMsgsTreeView.cpp -o CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.s

src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o: ../src/Windows/ShowMessage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o -c /home/dokel/Workspace/BotGUI/src/Windows/ShowMessage.cpp

src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Windows/ShowMessage.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Windows/ShowMessage.cpp > CMakeFiles/boot.dir/Windows/ShowMessage.cpp.i

src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Windows/ShowMessage.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Windows/ShowMessage.cpp -o CMakeFiles/boot.dir/Windows/ShowMessage.cpp.s

src/CMakeFiles/boot.dir/Models/Message.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/Models/Message.cpp.o: ../src/Models/Message.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/boot.dir/Models/Message.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/Models/Message.cpp.o -c /home/dokel/Workspace/BotGUI/src/Models/Message.cpp

src/CMakeFiles/boot.dir/Models/Message.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/Models/Message.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/Models/Message.cpp > CMakeFiles/boot.dir/Models/Message.cpp.i

src/CMakeFiles/boot.dir/Models/Message.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/Models/Message.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/Models/Message.cpp -o CMakeFiles/boot.dir/Models/Message.cpp.s

src/CMakeFiles/boot.dir/util/IconsLoader.cpp.o: src/CMakeFiles/boot.dir/flags.make
src/CMakeFiles/boot.dir/util/IconsLoader.cpp.o: ../src/util/IconsLoader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/boot.dir/util/IconsLoader.cpp.o"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boot.dir/util/IconsLoader.cpp.o -c /home/dokel/Workspace/BotGUI/src/util/IconsLoader.cpp

src/CMakeFiles/boot.dir/util/IconsLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boot.dir/util/IconsLoader.cpp.i"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dokel/Workspace/BotGUI/src/util/IconsLoader.cpp > CMakeFiles/boot.dir/util/IconsLoader.cpp.i

src/CMakeFiles/boot.dir/util/IconsLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boot.dir/util/IconsLoader.cpp.s"
	cd /home/dokel/Workspace/BotGUI/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dokel/Workspace/BotGUI/src/util/IconsLoader.cpp -o CMakeFiles/boot.dir/util/IconsLoader.cpp.s

# Object files for target boot
boot_OBJECTS = \
"CMakeFiles/boot.dir/boot.cpp.o" \
"CMakeFiles/boot.dir/MainApplication.cpp.o" \
"CMakeFiles/boot.dir/MainWindow.cpp.o" \
"CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o" \
"CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o" \
"CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o" \
"CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o" \
"CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o" \
"CMakeFiles/boot.dir/Models/Message.cpp.o" \
"CMakeFiles/boot.dir/util/IconsLoader.cpp.o"

# External object files for target boot
boot_EXTERNAL_OBJECTS =

src/boot: src/CMakeFiles/boot.dir/boot.cpp.o
src/boot: src/CMakeFiles/boot.dir/MainApplication.cpp.o
src/boot: src/CMakeFiles/boot.dir/MainWindow.cpp.o
src/boot: src/CMakeFiles/boot.dir/Widgets/RecipientsPane.cpp.o
src/boot: src/CMakeFiles/boot.dir/Widgets/MsgControlsPane.cpp.o
src/boot: src/CMakeFiles/boot.dir/Widgets/RecipientsTreeView.cpp.o
src/boot: src/CMakeFiles/boot.dir/Widgets/LastMsgsTreeView.cpp.o
src/boot: src/CMakeFiles/boot.dir/Windows/ShowMessage.cpp.o
src/boot: src/CMakeFiles/boot.dir/Models/Message.cpp.o
src/boot: src/CMakeFiles/boot.dir/util/IconsLoader.cpp.o
src/boot: src/CMakeFiles/boot.dir/build.make
src/boot: src/CMakeFiles/boot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dokel/Workspace/BotGUI/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable boot"
	cd /home/dokel/Workspace/BotGUI/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/boot.dir/build: src/boot

.PHONY : src/CMakeFiles/boot.dir/build

src/CMakeFiles/boot.dir/clean:
	cd /home/dokel/Workspace/BotGUI/build/src && $(CMAKE_COMMAND) -P CMakeFiles/boot.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/boot.dir/clean

src/CMakeFiles/boot.dir/depend:
	cd /home/dokel/Workspace/BotGUI/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dokel/Workspace/BotGUI /home/dokel/Workspace/BotGUI/src /home/dokel/Workspace/BotGUI/build /home/dokel/Workspace/BotGUI/build/src /home/dokel/Workspace/BotGUI/build/src/CMakeFiles/boot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/boot.dir/depend

