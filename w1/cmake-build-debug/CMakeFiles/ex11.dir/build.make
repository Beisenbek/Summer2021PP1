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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bsnbk/Documents/kbtu-summer/pp1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex11.dir/flags.make

CMakeFiles/ex11.dir/ex11.cpp.o: CMakeFiles/ex11.dir/flags.make
CMakeFiles/ex11.dir/ex11.cpp.o: ../ex11.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex11.dir/ex11.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex11.dir/ex11.cpp.o -c /Users/bsnbk/Documents/kbtu-summer/pp1/ex11.cpp

CMakeFiles/ex11.dir/ex11.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex11.dir/ex11.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bsnbk/Documents/kbtu-summer/pp1/ex11.cpp > CMakeFiles/ex11.dir/ex11.cpp.i

CMakeFiles/ex11.dir/ex11.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex11.dir/ex11.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bsnbk/Documents/kbtu-summer/pp1/ex11.cpp -o CMakeFiles/ex11.dir/ex11.cpp.s

# Object files for target ex11
ex11_OBJECTS = \
"CMakeFiles/ex11.dir/ex11.cpp.o"

# External object files for target ex11
ex11_EXTERNAL_OBJECTS =

ex11: CMakeFiles/ex11.dir/ex11.cpp.o
ex11: CMakeFiles/ex11.dir/build.make
ex11: CMakeFiles/ex11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex11.dir/build: ex11

.PHONY : CMakeFiles/ex11.dir/build

CMakeFiles/ex11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex11.dir/clean

CMakeFiles/ex11.dir/depend:
	cd /Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bsnbk/Documents/kbtu-summer/pp1 /Users/bsnbk/Documents/kbtu-summer/pp1 /Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug /Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug /Users/bsnbk/Documents/kbtu-summer/pp1/cmake-build-debug/CMakeFiles/ex11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex11.dir/depend

