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
CMAKE_SOURCE_DIR = /Users/cmcox007/CLionProjects/Bridge2021/hw10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw10.dir/flags.make

CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o: CMakeFiles/hw10.dir/flags.make
CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o: ../cc7261_hw10_q1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o -c /Users/cmcox007/CLionProjects/Bridge2021/hw10/cc7261_hw10_q1.cpp

CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cmcox007/CLionProjects/Bridge2021/hw10/cc7261_hw10_q1.cpp > CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.i

CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cmcox007/CLionProjects/Bridge2021/hw10/cc7261_hw10_q1.cpp -o CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.s

# Object files for target hw10
hw10_OBJECTS = \
"CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o"

# External object files for target hw10
hw10_EXTERNAL_OBJECTS =

hw10: CMakeFiles/hw10.dir/cc7261_hw10_q1.cpp.o
hw10: CMakeFiles/hw10.dir/build.make
hw10: CMakeFiles/hw10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw10.dir/build: hw10

.PHONY : CMakeFiles/hw10.dir/build

CMakeFiles/hw10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw10.dir/clean

CMakeFiles/hw10.dir/depend:
	cd /Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cmcox007/CLionProjects/Bridge2021/hw10 /Users/cmcox007/CLionProjects/Bridge2021/hw10 /Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug /Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug /Users/cmcox007/CLionProjects/Bridge2021/hw10/cmake-build-debug/CMakeFiles/hw10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw10.dir/depend

