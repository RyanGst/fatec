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
CMAKE_COMMAND = /home/ryan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ryan/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ryan/Development/fatec/data_structures/fibonacci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fibonacci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fibonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fibonacci.dir/flags.make

CMakeFiles/fibonacci.dir/fibo.c.o: CMakeFiles/fibonacci.dir/flags.make
CMakeFiles/fibonacci.dir/fibo.c.o: ../fibo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fibonacci.dir/fibo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fibonacci.dir/fibo.c.o   -c /home/ryan/Development/fatec/data_structures/fibonacci/fibo.c

CMakeFiles/fibonacci.dir/fibo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fibonacci.dir/fibo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ryan/Development/fatec/data_structures/fibonacci/fibo.c > CMakeFiles/fibonacci.dir/fibo.c.i

CMakeFiles/fibonacci.dir/fibo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fibonacci.dir/fibo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ryan/Development/fatec/data_structures/fibonacci/fibo.c -o CMakeFiles/fibonacci.dir/fibo.c.s

# Object files for target fibonacci
fibonacci_OBJECTS = \
"CMakeFiles/fibonacci.dir/fibo.c.o"

# External object files for target fibonacci
fibonacci_EXTERNAL_OBJECTS =

fibonacci: CMakeFiles/fibonacci.dir/fibo.c.o
fibonacci: CMakeFiles/fibonacci.dir/build.make
fibonacci: CMakeFiles/fibonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable fibonacci"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fibonacci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fibonacci.dir/build: fibonacci

.PHONY : CMakeFiles/fibonacci.dir/build

CMakeFiles/fibonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fibonacci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fibonacci.dir/clean

CMakeFiles/fibonacci.dir/depend:
	cd /home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ryan/Development/fatec/data_structures/fibonacci /home/ryan/Development/fatec/data_structures/fibonacci /home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug /home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug /home/ryan/Development/fatec/data_structures/fibonacci/cmake-build-debug/CMakeFiles/fibonacci.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fibonacci.dir/depend

