# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/roma/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/roma/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/roma/CLionProjects/seminar-10-fin2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/seminar_10_fin2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/seminar_10_fin2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/seminar_10_fin2.dir/flags.make

CMakeFiles/seminar_10_fin2.dir/main.c.o: CMakeFiles/seminar_10_fin2.dir/flags.make
CMakeFiles/seminar_10_fin2.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/seminar_10_fin2.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/seminar_10_fin2.dir/main.c.o -c /home/roma/CLionProjects/seminar-10-fin2/main.c

CMakeFiles/seminar_10_fin2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/seminar_10_fin2.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/roma/CLionProjects/seminar-10-fin2/main.c > CMakeFiles/seminar_10_fin2.dir/main.c.i

CMakeFiles/seminar_10_fin2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/seminar_10_fin2.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/roma/CLionProjects/seminar-10-fin2/main.c -o CMakeFiles/seminar_10_fin2.dir/main.c.s

# Object files for target seminar_10_fin2
seminar_10_fin2_OBJECTS = \
"CMakeFiles/seminar_10_fin2.dir/main.c.o"

# External object files for target seminar_10_fin2
seminar_10_fin2_EXTERNAL_OBJECTS =

seminar_10_fin2: CMakeFiles/seminar_10_fin2.dir/main.c.o
seminar_10_fin2: CMakeFiles/seminar_10_fin2.dir/build.make
seminar_10_fin2: CMakeFiles/seminar_10_fin2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable seminar_10_fin2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seminar_10_fin2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/seminar_10_fin2.dir/build: seminar_10_fin2
.PHONY : CMakeFiles/seminar_10_fin2.dir/build

CMakeFiles/seminar_10_fin2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/seminar_10_fin2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/seminar_10_fin2.dir/clean

CMakeFiles/seminar_10_fin2.dir/depend:
	cd /home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/roma/CLionProjects/seminar-10-fin2 /home/roma/CLionProjects/seminar-10-fin2 /home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug /home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug /home/roma/CLionProjects/seminar-10-fin2/cmake-build-debug/CMakeFiles/seminar_10_fin2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/seminar_10_fin2.dir/depend
