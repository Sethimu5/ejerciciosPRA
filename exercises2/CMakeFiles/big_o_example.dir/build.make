# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/ejerciciosPRA/exercises2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/ejerciciosPRA/exercises2

# Include any dependencies generated for this target.
include CMakeFiles/big_o_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/big_o_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/big_o_example.dir/flags.make

CMakeFiles/big_o_example.dir/big_o_example.cpp.o: CMakeFiles/big_o_example.dir/flags.make
CMakeFiles/big_o_example.dir/big_o_example.cpp.o: big_o_example.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /root/ejerciciosPRA/exercises2/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/big_o_example.dir/big_o_example.cpp.o"
	/opt/centos/devtoolset-1.1/root/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/big_o_example.dir/big_o_example.cpp.o -c /root/ejerciciosPRA/exercises2/big_o_example.cpp

CMakeFiles/big_o_example.dir/big_o_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/big_o_example.dir/big_o_example.cpp.i"
	/opt/centos/devtoolset-1.1/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /root/ejerciciosPRA/exercises2/big_o_example.cpp > CMakeFiles/big_o_example.dir/big_o_example.cpp.i

CMakeFiles/big_o_example.dir/big_o_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/big_o_example.dir/big_o_example.cpp.s"
	/opt/centos/devtoolset-1.1/root/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /root/ejerciciosPRA/exercises2/big_o_example.cpp -o CMakeFiles/big_o_example.dir/big_o_example.cpp.s

CMakeFiles/big_o_example.dir/big_o_example.cpp.o.requires:
.PHONY : CMakeFiles/big_o_example.dir/big_o_example.cpp.o.requires

CMakeFiles/big_o_example.dir/big_o_example.cpp.o.provides: CMakeFiles/big_o_example.dir/big_o_example.cpp.o.requires
	$(MAKE) -f CMakeFiles/big_o_example.dir/build.make CMakeFiles/big_o_example.dir/big_o_example.cpp.o.provides.build
.PHONY : CMakeFiles/big_o_example.dir/big_o_example.cpp.o.provides

CMakeFiles/big_o_example.dir/big_o_example.cpp.o.provides.build: CMakeFiles/big_o_example.dir/big_o_example.cpp.o

# Object files for target big_o_example
big_o_example_OBJECTS = \
"CMakeFiles/big_o_example.dir/big_o_example.cpp.o"

# External object files for target big_o_example
big_o_example_EXTERNAL_OBJECTS =

big_o_example: CMakeFiles/big_o_example.dir/big_o_example.cpp.o
big_o_example: CMakeFiles/big_o_example.dir/build.make
big_o_example: CMakeFiles/big_o_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable big_o_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/big_o_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/big_o_example.dir/build: big_o_example
.PHONY : CMakeFiles/big_o_example.dir/build

CMakeFiles/big_o_example.dir/requires: CMakeFiles/big_o_example.dir/big_o_example.cpp.o.requires
.PHONY : CMakeFiles/big_o_example.dir/requires

CMakeFiles/big_o_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/big_o_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/big_o_example.dir/clean

CMakeFiles/big_o_example.dir/depend:
	cd /root/ejerciciosPRA/exercises2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ejerciciosPRA/exercises2 /root/ejerciciosPRA/exercises2 /root/ejerciciosPRA/exercises2 /root/ejerciciosPRA/exercises2 /root/ejerciciosPRA/exercises2/CMakeFiles/big_o_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/big_o_example.dir/depend
