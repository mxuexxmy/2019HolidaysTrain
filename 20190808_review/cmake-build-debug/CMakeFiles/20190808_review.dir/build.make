# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /usr/share/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /usr/share/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/longxing/CLionProjects/20190808_review

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/longxing/CLionProjects/20190808_review/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/20190808_review.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20190808_review.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20190808_review.dir/flags.make

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o: CMakeFiles/20190808_review.dir/flags.make
CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o: ../7-1\ 天梯赛座位分配.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/longxing/CLionProjects/20190808_review/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o -c "/home/longxing/CLionProjects/20190808_review/7-1 天梯赛座位分配.cpp"

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/longxing/CLionProjects/20190808_review/7-1 天梯赛座位分配.cpp" > CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.i

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/longxing/CLionProjects/20190808_review/7-1 天梯赛座位分配.cpp" -o CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.s

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.requires:

.PHONY : CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.requires

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.provides: CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.requires
	$(MAKE) -f CMakeFiles/20190808_review.dir/build.make CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.provides.build
.PHONY : CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.provides

CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.provides.build: CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o


# Object files for target 20190808_review
20190808_review_OBJECTS = \
"CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o"

# External object files for target 20190808_review
20190808_review_EXTERNAL_OBJECTS =

20190808_review: CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o
20190808_review: CMakeFiles/20190808_review.dir/build.make
20190808_review: CMakeFiles/20190808_review.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/longxing/CLionProjects/20190808_review/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 20190808_review"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/20190808_review.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20190808_review.dir/build: 20190808_review

.PHONY : CMakeFiles/20190808_review.dir/build

CMakeFiles/20190808_review.dir/requires: CMakeFiles/20190808_review.dir/7-1_天梯赛座位分配.cpp.o.requires

.PHONY : CMakeFiles/20190808_review.dir/requires

CMakeFiles/20190808_review.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/20190808_review.dir/cmake_clean.cmake
.PHONY : CMakeFiles/20190808_review.dir/clean

CMakeFiles/20190808_review.dir/depend:
	cd /home/longxing/CLionProjects/20190808_review/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/longxing/CLionProjects/20190808_review /home/longxing/CLionProjects/20190808_review /home/longxing/CLionProjects/20190808_review/cmake-build-debug /home/longxing/CLionProjects/20190808_review/cmake-build-debug /home/longxing/CLionProjects/20190808_review/cmake-build-debug/CMakeFiles/20190808_review.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/20190808_review.dir/depend
