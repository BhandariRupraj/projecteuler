# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP106"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EulerP106.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EulerP106.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EulerP106.dir/flags.make

CMakeFiles/EulerP106.dir/main.cpp.obj: CMakeFiles/EulerP106.dir/flags.make
CMakeFiles/EulerP106.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EulerP106.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EulerP106.dir\main.cpp.obj -c "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\main.cpp"

CMakeFiles/EulerP106.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EulerP106.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\main.cpp" > CMakeFiles\EulerP106.dir\main.cpp.i

CMakeFiles/EulerP106.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EulerP106.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\main.cpp" -o CMakeFiles\EulerP106.dir\main.cpp.s

CMakeFiles/EulerP106.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/EulerP106.dir/main.cpp.obj.requires

CMakeFiles/EulerP106.dir/main.cpp.obj.provides: CMakeFiles/EulerP106.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\EulerP106.dir\build.make CMakeFiles/EulerP106.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/EulerP106.dir/main.cpp.obj.provides

CMakeFiles/EulerP106.dir/main.cpp.obj.provides.build: CMakeFiles/EulerP106.dir/main.cpp.obj


# Object files for target EulerP106
EulerP106_OBJECTS = \
"CMakeFiles/EulerP106.dir/main.cpp.obj"

# External object files for target EulerP106
EulerP106_EXTERNAL_OBJECTS =

EulerP106.exe: CMakeFiles/EulerP106.dir/main.cpp.obj
EulerP106.exe: CMakeFiles/EulerP106.dir/build.make
EulerP106.exe: CMakeFiles/EulerP106.dir/linklibs.rsp
EulerP106.exe: CMakeFiles/EulerP106.dir/objects1.rsp
EulerP106.exe: CMakeFiles/EulerP106.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EulerP106.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EulerP106.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EulerP106.dir/build: EulerP106.exe

.PHONY : CMakeFiles/EulerP106.dir/build

CMakeFiles/EulerP106.dir/requires: CMakeFiles/EulerP106.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/EulerP106.dir/requires

CMakeFiles/EulerP106.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EulerP106.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EulerP106.dir/clean

CMakeFiles/EulerP106.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\s521059\CLionProjects\Euler Project\EulerP106" "C:\Users\s521059\CLionProjects\Euler Project\EulerP106" "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP106\cmake-build-debug\CMakeFiles\EulerP106.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EulerP106.dir/depend
