# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/aleppi/Projects/QuickMath

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aleppi/Projects/QuickMath

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/aleppi/Projects/QuickMath/CMakeFiles /home/aleppi/Projects/QuickMath/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/aleppi/Projects/QuickMath/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named QuickMath.out

# Build rule for target.
QuickMath.out: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 QuickMath.out
.PHONY : QuickMath.out

# fast build rule for target.
QuickMath.out/fast:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/build
.PHONY : QuickMath.out/fast

Combi/combi.o: Combi/combi.cpp.o

.PHONY : Combi/combi.o

# target to build an object file
Combi/combi.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Combi/combi.cpp.o
.PHONY : Combi/combi.cpp.o

Combi/combi.i: Combi/combi.cpp.i

.PHONY : Combi/combi.i

# target to preprocess a source file
Combi/combi.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Combi/combi.cpp.i
.PHONY : Combi/combi.cpp.i

Combi/combi.s: Combi/combi.cpp.s

.PHONY : Combi/combi.s

# target to generate assembly for a file
Combi/combi.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Combi/combi.cpp.s
.PHONY : Combi/combi.cpp.s

Factorial/factorial.o: Factorial/factorial.cpp.o

.PHONY : Factorial/factorial.o

# target to build an object file
Factorial/factorial.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Factorial/factorial.cpp.o
.PHONY : Factorial/factorial.cpp.o

Factorial/factorial.i: Factorial/factorial.cpp.i

.PHONY : Factorial/factorial.i

# target to preprocess a source file
Factorial/factorial.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Factorial/factorial.cpp.i
.PHONY : Factorial/factorial.cpp.i

Factorial/factorial.s: Factorial/factorial.cpp.s

.PHONY : Factorial/factorial.s

# target to generate assembly for a file
Factorial/factorial.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Factorial/factorial.cpp.s
.PHONY : Factorial/factorial.cpp.s

LinAlg/vector.o: LinAlg/vector.cpp.o

.PHONY : LinAlg/vector.o

# target to build an object file
LinAlg/vector.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/LinAlg/vector.cpp.o
.PHONY : LinAlg/vector.cpp.o

LinAlg/vector.i: LinAlg/vector.cpp.i

.PHONY : LinAlg/vector.i

# target to preprocess a source file
LinAlg/vector.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/LinAlg/vector.cpp.i
.PHONY : LinAlg/vector.cpp.i

LinAlg/vector.s: LinAlg/vector.cpp.s

.PHONY : LinAlg/vector.s

# target to generate assembly for a file
LinAlg/vector.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/LinAlg/vector.cpp.s
.PHONY : LinAlg/vector.cpp.s

Math/exponent.o: Math/exponent.cpp.o

.PHONY : Math/exponent.o

# target to build an object file
Math/exponent.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Math/exponent.cpp.o
.PHONY : Math/exponent.cpp.o

Math/exponent.i: Math/exponent.cpp.i

.PHONY : Math/exponent.i

# target to preprocess a source file
Math/exponent.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Math/exponent.cpp.i
.PHONY : Math/exponent.cpp.i

Math/exponent.s: Math/exponent.cpp.s

.PHONY : Math/exponent.s

# target to generate assembly for a file
Math/exponent.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Math/exponent.cpp.s
.PHONY : Math/exponent.cpp.s

Pascal/pascal.o: Pascal/pascal.cpp.o

.PHONY : Pascal/pascal.o

# target to build an object file
Pascal/pascal.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Pascal/pascal.cpp.o
.PHONY : Pascal/pascal.cpp.o

Pascal/pascal.i: Pascal/pascal.cpp.i

.PHONY : Pascal/pascal.i

# target to preprocess a source file
Pascal/pascal.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Pascal/pascal.cpp.i
.PHONY : Pascal/pascal.cpp.i

Pascal/pascal.s: Pascal/pascal.cpp.s

.PHONY : Pascal/pascal.s

# target to generate assembly for a file
Pascal/pascal.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Pascal/pascal.cpp.s
.PHONY : Pascal/pascal.cpp.s

Trig/trigFunctions.o: Trig/trigFunctions.cpp.o

.PHONY : Trig/trigFunctions.o

# target to build an object file
Trig/trigFunctions.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Trig/trigFunctions.cpp.o
.PHONY : Trig/trigFunctions.cpp.o

Trig/trigFunctions.i: Trig/trigFunctions.cpp.i

.PHONY : Trig/trigFunctions.i

# target to preprocess a source file
Trig/trigFunctions.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Trig/trigFunctions.cpp.i
.PHONY : Trig/trigFunctions.cpp.i

Trig/trigFunctions.s: Trig/trigFunctions.cpp.s

.PHONY : Trig/trigFunctions.s

# target to generate assembly for a file
Trig/trigFunctions.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/Trig/trigFunctions.cpp.s
.PHONY : Trig/trigFunctions.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/QuickMath.out.dir/build.make CMakeFiles/QuickMath.out.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... QuickMath.out"
	@echo "... edit_cache"
	@echo "... Combi/combi.o"
	@echo "... Combi/combi.i"
	@echo "... Combi/combi.s"
	@echo "... Factorial/factorial.o"
	@echo "... Factorial/factorial.i"
	@echo "... Factorial/factorial.s"
	@echo "... LinAlg/vector.o"
	@echo "... LinAlg/vector.i"
	@echo "... LinAlg/vector.s"
	@echo "... Math/exponent.o"
	@echo "... Math/exponent.i"
	@echo "... Math/exponent.s"
	@echo "... Pascal/pascal.o"
	@echo "... Pascal/pascal.i"
	@echo "... Pascal/pascal.s"
	@echo "... Trig/trigFunctions.o"
	@echo "... Trig/trigFunctions.i"
	@echo "... Trig/trigFunctions.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

