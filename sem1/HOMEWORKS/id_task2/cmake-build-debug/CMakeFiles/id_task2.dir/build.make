# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/tigron/Загрузки/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/tigron/Загрузки/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/id_task2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/id_task2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/id_task2.dir/flags.make

CMakeFiles/id_task2.dir/main.c.o: CMakeFiles/id_task2.dir/flags.make
CMakeFiles/id_task2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/id_task2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/id_task2.dir/main.c.o   -c /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/main.c

CMakeFiles/id_task2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/id_task2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/main.c > CMakeFiles/id_task2.dir/main.c.i

CMakeFiles/id_task2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/id_task2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/main.c -o CMakeFiles/id_task2.dir/main.c.s

CMakeFiles/id_task2.dir/main.c.o.requires:

.PHONY : CMakeFiles/id_task2.dir/main.c.o.requires

CMakeFiles/id_task2.dir/main.c.o.provides: CMakeFiles/id_task2.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/id_task2.dir/build.make CMakeFiles/id_task2.dir/main.c.o.provides.build
.PHONY : CMakeFiles/id_task2.dir/main.c.o.provides

CMakeFiles/id_task2.dir/main.c.o.provides.build: CMakeFiles/id_task2.dir/main.c.o


CMakeFiles/id_task2.dir/test.c.o: CMakeFiles/id_task2.dir/flags.make
CMakeFiles/id_task2.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/id_task2.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/id_task2.dir/test.c.o   -c /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/test.c

CMakeFiles/id_task2.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/id_task2.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/test.c > CMakeFiles/id_task2.dir/test.c.i

CMakeFiles/id_task2.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/id_task2.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/test.c -o CMakeFiles/id_task2.dir/test.c.s

CMakeFiles/id_task2.dir/test.c.o.requires:

.PHONY : CMakeFiles/id_task2.dir/test.c.o.requires

CMakeFiles/id_task2.dir/test.c.o.provides: CMakeFiles/id_task2.dir/test.c.o.requires
	$(MAKE) -f CMakeFiles/id_task2.dir/build.make CMakeFiles/id_task2.dir/test.c.o.provides.build
.PHONY : CMakeFiles/id_task2.dir/test.c.o.provides

CMakeFiles/id_task2.dir/test.c.o.provides.build: CMakeFiles/id_task2.dir/test.c.o


# Object files for target id_task2
id_task2_OBJECTS = \
"CMakeFiles/id_task2.dir/main.c.o" \
"CMakeFiles/id_task2.dir/test.c.o"

# External object files for target id_task2
id_task2_EXTERNAL_OBJECTS =

id_task2: CMakeFiles/id_task2.dir/main.c.o
id_task2: CMakeFiles/id_task2.dir/test.c.o
id_task2: CMakeFiles/id_task2.dir/build.make
id_task2: CMakeFiles/id_task2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable id_task2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/id_task2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/id_task2.dir/build: id_task2

.PHONY : CMakeFiles/id_task2.dir/build

CMakeFiles/id_task2.dir/requires: CMakeFiles/id_task2.dir/main.c.o.requires
CMakeFiles/id_task2.dir/requires: CMakeFiles/id_task2.dir/test.c.o.requires

.PHONY : CMakeFiles/id_task2.dir/requires

CMakeFiles/id_task2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/id_task2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/id_task2.dir/clean

CMakeFiles/id_task2.dir/depend:
	cd /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2 /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2 /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug /home/tigron/projects/education/technopark/sem1/HOMEWORKS/id_task2/cmake-build-debug/CMakeFiles/id_task2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/id_task2.dir/depend

