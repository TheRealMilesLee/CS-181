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
CMAKE_COMMAND = "/Users/AKIRA/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.6693.114/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/AKIRA/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/211.6693.114/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Question1_Day_of_Year.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Question1_Day_of_Year.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Question1_Day_of_Year.dir/flags.make

CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o: CMakeFiles/Question1_Day_of_Year.dir/flags.make
CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o: ../DayOfYear.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o -c /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/DayOfYear.cpp

CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/DayOfYear.cpp > CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.i

CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/DayOfYear.cpp -o CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.s

# Object files for target Question1_Day_of_Year
Question1_Day_of_Year_OBJECTS = \
"CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o"

# External object files for target Question1_Day_of_Year
Question1_Day_of_Year_EXTERNAL_OBJECTS =

Question1_Day_of_Year: CMakeFiles/Question1_Day_of_Year.dir/DayOfYear.cpp.o
Question1_Day_of_Year: CMakeFiles/Question1_Day_of_Year.dir/build.make
Question1_Day_of_Year: CMakeFiles/Question1_Day_of_Year.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Question1_Day_of_Year"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Question1_Day_of_Year.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Question1_Day_of_Year.dir/build: Question1_Day_of_Year

.PHONY : CMakeFiles/Question1_Day_of_Year.dir/build

CMakeFiles/Question1_Day_of_Year.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Question1_Day_of_Year.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Question1_Day_of_Year.dir/clean

CMakeFiles/Question1_Day_of_Year.dir/depend:
	cd /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug /Users/AKIRA/ComputerScienceRelated/Spring2021-CS181/Lab3-Review/Question1-Day_of_Year/cmake-build-debug/CMakeFiles/Question1_Day_of_Year.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Question1_Day_of_Year.dir/depend

