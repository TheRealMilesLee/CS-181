# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.19.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.19.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build"

# Include any dependencies generated for this target.
include CMakeFiles/Bonus_Lab.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bonus_Lab.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bonus_Lab.dir/flags.make

CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o: CMakeFiles/Bonus_Lab.dir/flags.make
CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o: ../ProgrammingChallenge_RetailItem_Class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o -c "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/ProgrammingChallenge_RetailItem_Class.cpp"

CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/ProgrammingChallenge_RetailItem_Class.cpp" > CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.i

CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/ProgrammingChallenge_RetailItem_Class.cpp" -o CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.s

# Object files for target Bonus_Lab
Bonus_Lab_OBJECTS = \
"CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o"

# External object files for target Bonus_Lab
Bonus_Lab_EXTERNAL_OBJECTS =

Bonus_Lab: CMakeFiles/Bonus_Lab.dir/ProgrammingChallenge_RetailItem_Class.cpp.o
Bonus_Lab: CMakeFiles/Bonus_Lab.dir/build.make
Bonus_Lab: CMakeFiles/Bonus_Lab.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Bonus_Lab"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bonus_Lab.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bonus_Lab.dir/build: Bonus_Lab

.PHONY : CMakeFiles/Bonus_Lab.dir/build

CMakeFiles/Bonus_Lab.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bonus_Lab.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bonus_Lab.dir/clean

CMakeFiles/Bonus_Lab.dir/depend:
	cd "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab" "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab" "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build" "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build" "/Users/leemiles/ComputerScienceRelated/Spring2021-CS181/Bonus Lab/build/CMakeFiles/Bonus_Lab.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bonus_Lab.dir/depend

