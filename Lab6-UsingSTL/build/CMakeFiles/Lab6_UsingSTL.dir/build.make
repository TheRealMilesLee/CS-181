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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.20.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.20.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build

# Include any dependencies generated for this target.
include CMakeFiles/Lab6_UsingSTL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Lab6_UsingSTL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab6_UsingSTL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab6_UsingSTL.dir/flags.make

CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o: CMakeFiles/Lab6_UsingSTL.dir/flags.make
CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o: ../ReverseFileUsing.cpp
CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o: CMakeFiles/Lab6_UsingSTL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o -MF CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o.d -o CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o -c /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/ReverseFileUsing.cpp

CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/ReverseFileUsing.cpp > CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.i

CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/ReverseFileUsing.cpp -o CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.s

# Object files for target Lab6_UsingSTL
Lab6_UsingSTL_OBJECTS = \
"CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o"

# External object files for target Lab6_UsingSTL
Lab6_UsingSTL_EXTERNAL_OBJECTS =

Lab6_UsingSTL: CMakeFiles/Lab6_UsingSTL.dir/ReverseFileUsing.cpp.o
Lab6_UsingSTL: CMakeFiles/Lab6_UsingSTL.dir/build.make
Lab6_UsingSTL: CMakeFiles/Lab6_UsingSTL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab6_UsingSTL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab6_UsingSTL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab6_UsingSTL.dir/build: Lab6_UsingSTL
.PHONY : CMakeFiles/Lab6_UsingSTL.dir/build

CMakeFiles/Lab6_UsingSTL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab6_UsingSTL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab6_UsingSTL.dir/clean

CMakeFiles/Lab6_UsingSTL.dir/depend:
	cd /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab6-UsingSTL/build/CMakeFiles/Lab6_UsingSTL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab6_UsingSTL.dir/depend

