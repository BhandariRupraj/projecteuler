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
CMAKE_SOURCE_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP103"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EulerP103.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EulerP103.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EulerP103.dir/flags.make

CMakeFiles/EulerP103.dir/main.cpp.obj: CMakeFiles/EulerP103.dir/flags.make
CMakeFiles/EulerP103.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EulerP103.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EulerP103.dir\main.cpp.obj -c "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\main.cpp"

CMakeFiles/EulerP103.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EulerP103.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\main.cpp" > CMakeFiles\EulerP103.dir\main.cpp.i

CMakeFiles/EulerP103.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EulerP103.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\main.cpp" -o CMakeFiles\EulerP103.dir\main.cpp.s

CMakeFiles/EulerP103.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/EulerP103.dir/main.cpp.obj.requires

CMakeFiles/EulerP103.dir/main.cpp.obj.provides: CMakeFiles/EulerP103.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\EulerP103.dir\build.make CMakeFiles/EulerP103.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/EulerP103.dir/main.cpp.obj.provides

CMakeFiles/EulerP103.dir/main.cpp.obj.provides.build: CMakeFiles/EulerP103.dir/main.cpp.obj


# Object files for target EulerP103
EulerP103_OBJECTS = \
"CMakeFiles/EulerP103.dir/main.cpp.obj"

# External object files for target EulerP103
EulerP103_EXTERNAL_OBJECTS =

EulerP103.exe: CMakeFiles/EulerP103.dir/main.cpp.obj
EulerP103.exe: CMakeFiles/EulerP103.dir/build.make
EulerP103.exe: CMakeFiles/EulerP103.dir/linklibs.rsp
EulerP103.exe: CMakeFiles/EulerP103.dir/objects1.rsp
EulerP103.exe: CMakeFiles/EulerP103.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EulerP103.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EulerP103.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EulerP103.dir/build: EulerP103.exe

.PHONY : CMakeFiles/EulerP103.dir/build

CMakeFiles/EulerP103.dir/requires: CMakeFiles/EulerP103.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/EulerP103.dir/requires

CMakeFiles/EulerP103.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EulerP103.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EulerP103.dir/clean

CMakeFiles/EulerP103.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\s521059\CLionProjects\Euler Project\EulerP103" "C:\Users\s521059\CLionProjects\Euler Project\EulerP103" "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP103\cmake-build-debug\CMakeFiles\EulerP103.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EulerP103.dir/depend

