# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/JDgomez/Git/graphics/lab04-CC2018

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/JDgomez/Git/graphics/lab04-CC2018/build

# Include any dependencies generated for this target.
include CMakeFiles/EXEC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EXEC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EXEC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EXEC.dir/flags.make

CMakeFiles/EXEC.dir/src/main.cpp.o: CMakeFiles/EXEC.dir/flags.make
CMakeFiles/EXEC.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/EXEC.dir/src/main.cpp.o: CMakeFiles/EXEC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/JDgomez/Git/graphics/lab04-CC2018/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EXEC.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EXEC.dir/src/main.cpp.o -MF CMakeFiles/EXEC.dir/src/main.cpp.o.d -o CMakeFiles/EXEC.dir/src/main.cpp.o -c /mnt/d/JDgomez/Git/graphics/lab04-CC2018/src/main.cpp

CMakeFiles/EXEC.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EXEC.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/JDgomez/Git/graphics/lab04-CC2018/src/main.cpp > CMakeFiles/EXEC.dir/src/main.cpp.i

CMakeFiles/EXEC.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EXEC.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/JDgomez/Git/graphics/lab04-CC2018/src/main.cpp -o CMakeFiles/EXEC.dir/src/main.cpp.s

# Object files for target EXEC
EXEC_OBJECTS = \
"CMakeFiles/EXEC.dir/src/main.cpp.o"

# External object files for target EXEC
EXEC_EXTERNAL_OBJECTS =

EXEC: CMakeFiles/EXEC.dir/src/main.cpp.o
EXEC: CMakeFiles/EXEC.dir/build.make
EXEC: CMakeFiles/EXEC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/JDgomez/Git/graphics/lab04-CC2018/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EXEC"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EXEC.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EXEC.dir/build: EXEC
.PHONY : CMakeFiles/EXEC.dir/build

CMakeFiles/EXEC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EXEC.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EXEC.dir/clean

CMakeFiles/EXEC.dir/depend:
	cd /mnt/d/JDgomez/Git/graphics/lab04-CC2018/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/JDgomez/Git/graphics/lab04-CC2018 /mnt/d/JDgomez/Git/graphics/lab04-CC2018 /mnt/d/JDgomez/Git/graphics/lab04-CC2018/build /mnt/d/JDgomez/Git/graphics/lab04-CC2018/build /mnt/d/JDgomez/Git/graphics/lab04-CC2018/build/CMakeFiles/EXEC.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EXEC.dir/depend

