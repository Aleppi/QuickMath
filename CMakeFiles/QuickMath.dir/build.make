# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/aleppi/QuickMath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aleppi/QuickMath

# Include any dependencies generated for this target.
include CMakeFiles/QuickMath.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QuickMath.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QuickMath.dir/flags.make

CMakeFiles/QuickMath.dir/main.cpp.o: CMakeFiles/QuickMath.dir/flags.make
CMakeFiles/QuickMath.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleppi/QuickMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QuickMath.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QuickMath.dir/main.cpp.o -c /home/aleppi/QuickMath/main.cpp

CMakeFiles/QuickMath.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuickMath.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleppi/QuickMath/main.cpp > CMakeFiles/QuickMath.dir/main.cpp.i

CMakeFiles/QuickMath.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuickMath.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleppi/QuickMath/main.cpp -o CMakeFiles/QuickMath.dir/main.cpp.s

CMakeFiles/QuickMath.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/QuickMath.dir/main.cpp.o.requires

CMakeFiles/QuickMath.dir/main.cpp.o.provides: CMakeFiles/QuickMath.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/QuickMath.dir/build.make CMakeFiles/QuickMath.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/QuickMath.dir/main.cpp.o.provides

CMakeFiles/QuickMath.dir/main.cpp.o.provides.build: CMakeFiles/QuickMath.dir/main.cpp.o


CMakeFiles/QuickMath.dir/pascal.cpp.o: CMakeFiles/QuickMath.dir/flags.make
CMakeFiles/QuickMath.dir/pascal.cpp.o: pascal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleppi/QuickMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/QuickMath.dir/pascal.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/QuickMath.dir/pascal.cpp.o -c /home/aleppi/QuickMath/pascal.cpp

CMakeFiles/QuickMath.dir/pascal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuickMath.dir/pascal.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aleppi/QuickMath/pascal.cpp > CMakeFiles/QuickMath.dir/pascal.cpp.i

CMakeFiles/QuickMath.dir/pascal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuickMath.dir/pascal.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aleppi/QuickMath/pascal.cpp -o CMakeFiles/QuickMath.dir/pascal.cpp.s

CMakeFiles/QuickMath.dir/pascal.cpp.o.requires:

.PHONY : CMakeFiles/QuickMath.dir/pascal.cpp.o.requires

CMakeFiles/QuickMath.dir/pascal.cpp.o.provides: CMakeFiles/QuickMath.dir/pascal.cpp.o.requires
	$(MAKE) -f CMakeFiles/QuickMath.dir/build.make CMakeFiles/QuickMath.dir/pascal.cpp.o.provides.build
.PHONY : CMakeFiles/QuickMath.dir/pascal.cpp.o.provides

CMakeFiles/QuickMath.dir/pascal.cpp.o.provides.build: CMakeFiles/QuickMath.dir/pascal.cpp.o


CMakeFiles/QuickMath.dir/factorial.c.o: CMakeFiles/QuickMath.dir/flags.make
CMakeFiles/QuickMath.dir/factorial.c.o: factorial.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aleppi/QuickMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/QuickMath.dir/factorial.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/QuickMath.dir/factorial.c.o   -c /home/aleppi/QuickMath/factorial.c

CMakeFiles/QuickMath.dir/factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/QuickMath.dir/factorial.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aleppi/QuickMath/factorial.c > CMakeFiles/QuickMath.dir/factorial.c.i

CMakeFiles/QuickMath.dir/factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/QuickMath.dir/factorial.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aleppi/QuickMath/factorial.c -o CMakeFiles/QuickMath.dir/factorial.c.s

CMakeFiles/QuickMath.dir/factorial.c.o.requires:

.PHONY : CMakeFiles/QuickMath.dir/factorial.c.o.requires

CMakeFiles/QuickMath.dir/factorial.c.o.provides: CMakeFiles/QuickMath.dir/factorial.c.o.requires
	$(MAKE) -f CMakeFiles/QuickMath.dir/build.make CMakeFiles/QuickMath.dir/factorial.c.o.provides.build
.PHONY : CMakeFiles/QuickMath.dir/factorial.c.o.provides

CMakeFiles/QuickMath.dir/factorial.c.o.provides.build: CMakeFiles/QuickMath.dir/factorial.c.o


# Object files for target QuickMath
QuickMath_OBJECTS = \
"CMakeFiles/QuickMath.dir/main.cpp.o" \
"CMakeFiles/QuickMath.dir/pascal.cpp.o" \
"CMakeFiles/QuickMath.dir/factorial.c.o"

# External object files for target QuickMath
QuickMath_EXTERNAL_OBJECTS =

QuickMath: CMakeFiles/QuickMath.dir/main.cpp.o
QuickMath: CMakeFiles/QuickMath.dir/pascal.cpp.o
QuickMath: CMakeFiles/QuickMath.dir/factorial.c.o
QuickMath: CMakeFiles/QuickMath.dir/build.make
QuickMath: CMakeFiles/QuickMath.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aleppi/QuickMath/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable QuickMath"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuickMath.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QuickMath.dir/build: QuickMath

.PHONY : CMakeFiles/QuickMath.dir/build

CMakeFiles/QuickMath.dir/requires: CMakeFiles/QuickMath.dir/main.cpp.o.requires
CMakeFiles/QuickMath.dir/requires: CMakeFiles/QuickMath.dir/pascal.cpp.o.requires
CMakeFiles/QuickMath.dir/requires: CMakeFiles/QuickMath.dir/factorial.c.o.requires

.PHONY : CMakeFiles/QuickMath.dir/requires

CMakeFiles/QuickMath.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/QuickMath.dir/cmake_clean.cmake
.PHONY : CMakeFiles/QuickMath.dir/clean

CMakeFiles/QuickMath.dir/depend:
	cd /home/aleppi/QuickMath && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aleppi/QuickMath /home/aleppi/QuickMath /home/aleppi/QuickMath /home/aleppi/QuickMath /home/aleppi/QuickMath/CMakeFiles/QuickMath.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QuickMath.dir/depend
