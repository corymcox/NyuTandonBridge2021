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
CMAKE_SOURCE_DIR = "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/exam1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exam1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exam1.dir/flags.make

CMakeFiles/exam1.dir/cc7261_q12.cpp.o: CMakeFiles/exam1.dir/flags.make
CMakeFiles/exam1.dir/cc7261_q12.cpp.o: ../cc7261_q12.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exam1.dir/cc7261_q12.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exam1.dir/cc7261_q12.cpp.o -c "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cc7261_q12.cpp"

CMakeFiles/exam1.dir/cc7261_q12.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exam1.dir/cc7261_q12.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cc7261_q12.cpp" > CMakeFiles/exam1.dir/cc7261_q12.cpp.i

CMakeFiles/exam1.dir/cc7261_q12.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exam1.dir/cc7261_q12.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cc7261_q12.cpp" -o CMakeFiles/exam1.dir/cc7261_q12.cpp.s

# Object files for target exam1
exam1_OBJECTS = \
"CMakeFiles/exam1.dir/cc7261_q12.cpp.o"

# External object files for target exam1
exam1_EXTERNAL_OBJECTS =

exam1: CMakeFiles/exam1.dir/cc7261_q12.cpp.o
exam1: CMakeFiles/exam1.dir/build.make
exam1: CMakeFiles/exam1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exam1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exam1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exam1.dir/build: exam1

.PHONY : CMakeFiles/exam1.dir/build

CMakeFiles/exam1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exam1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exam1.dir/clean

CMakeFiles/exam1.dir/depend:
	cd "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug" "/Users/cmcox007/CLionProjects/NyuTandonBridge2021/exam1/cmake-build-debug/CMakeFiles/exam1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/exam1.dir/depend
