# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/hw4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw4.dir/flags.make

CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o: CMakeFiles/hw4.dir/flags.make
CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o: ../cc7261_hw4_q6.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o -c "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cc7261_hw4_q6.cpp"

CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cc7261_hw4_q6.cpp" > CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.i

CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cc7261_hw4_q6.cpp" -o CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.s

# Object files for target hw4
hw4_OBJECTS = \
"CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o"

# External object files for target hw4
hw4_EXTERNAL_OBJECTS =

hw4: CMakeFiles/hw4.dir/cc7261_hw4_q6.cpp.o
hw4: CMakeFiles/hw4.dir/build.make
hw4: CMakeFiles/hw4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw4.dir/build: hw4

.PHONY : CMakeFiles/hw4.dir/build

CMakeFiles/hw4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw4.dir/clean

CMakeFiles/hw4.dir/depend:
	cd "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/hw4/cmake-build-debug/CMakeFiles/hw4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hw4.dir/depend

