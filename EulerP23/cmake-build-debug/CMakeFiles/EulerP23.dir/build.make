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
CMAKE_SOURCE_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP23"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EulerP23.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EulerP23.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EulerP23.dir/flags.make

CMakeFiles/EulerP23.dir/main.cpp.obj: CMakeFiles/EulerP23.dir/flags.make
CMakeFiles/EulerP23.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EulerP23.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EulerP23.dir\main.cpp.obj -c "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\main.cpp"

CMakeFiles/EulerP23.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EulerP23.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\main.cpp" > CMakeFiles\EulerP23.dir\main.cpp.i

CMakeFiles/EulerP23.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EulerP23.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\main.cpp" -o CMakeFiles\EulerP23.dir\main.cpp.s

CMakeFiles/EulerP23.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/EulerP23.dir/main.cpp.obj.requires

CMakeFiles/EulerP23.dir/main.cpp.obj.provides: CMakeFiles/EulerP23.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\EulerP23.dir\build.make CMakeFiles/EulerP23.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/EulerP23.dir/main.cpp.obj.provides

CMakeFiles/EulerP23.dir/main.cpp.obj.provides.build: CMakeFiles/EulerP23.dir/main.cpp.obj


# Object files for target EulerP23
EulerP23_OBJECTS = \
"CMakeFiles/EulerP23.dir/main.cpp.obj"

# External object files for target EulerP23
EulerP23_EXTERNAL_OBJECTS =

EulerP23.exe: CMakeFiles/EulerP23.dir/main.cpp.obj
EulerP23.exe: CMakeFiles/EulerP23.dir/build.make
EulerP23.exe: CMakeFiles/EulerP23.dir/linklibs.rsp
EulerP23.exe: CMakeFiles/EulerP23.dir/objects1.rsp
EulerP23.exe: CMakeFiles/EulerP23.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EulerP23.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EulerP23.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EulerP23.dir/build: EulerP23.exe

.PHONY : CMakeFiles/EulerP23.dir/build

CMakeFiles/EulerP23.dir/requires: CMakeFiles/EulerP23.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/EulerP23.dir/requires

CMakeFiles/EulerP23.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EulerP23.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EulerP23.dir/clean

CMakeFiles/EulerP23.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\s521059\CLionProjects\Euler Project\EulerP23" "C:\Users\s521059\CLionProjects\Euler Project\EulerP23" "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP23\cmake-build-debug\CMakeFiles\EulerP23.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EulerP23.dir/depend

