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
CMAKE_SOURCE_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP41"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EulerP41.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EulerP41.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EulerP41.dir/flags.make

CMakeFiles/EulerP41.dir/main.cpp.obj: CMakeFiles/EulerP41.dir/flags.make
CMakeFiles/EulerP41.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EulerP41.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EulerP41.dir\main.cpp.obj -c "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\main.cpp"

CMakeFiles/EulerP41.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EulerP41.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\main.cpp" > CMakeFiles\EulerP41.dir\main.cpp.i

CMakeFiles/EulerP41.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EulerP41.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\main.cpp" -o CMakeFiles\EulerP41.dir\main.cpp.s

CMakeFiles/EulerP41.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/EulerP41.dir/main.cpp.obj.requires

CMakeFiles/EulerP41.dir/main.cpp.obj.provides: CMakeFiles/EulerP41.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\EulerP41.dir\build.make CMakeFiles/EulerP41.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/EulerP41.dir/main.cpp.obj.provides

CMakeFiles/EulerP41.dir/main.cpp.obj.provides.build: CMakeFiles/EulerP41.dir/main.cpp.obj


# Object files for target EulerP41
EulerP41_OBJECTS = \
"CMakeFiles/EulerP41.dir/main.cpp.obj"

# External object files for target EulerP41
EulerP41_EXTERNAL_OBJECTS =

EulerP41.exe: CMakeFiles/EulerP41.dir/main.cpp.obj
EulerP41.exe: CMakeFiles/EulerP41.dir/build.make
EulerP41.exe: CMakeFiles/EulerP41.dir/linklibs.rsp
EulerP41.exe: CMakeFiles/EulerP41.dir/objects1.rsp
EulerP41.exe: CMakeFiles/EulerP41.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EulerP41.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EulerP41.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EulerP41.dir/build: EulerP41.exe

.PHONY : CMakeFiles/EulerP41.dir/build

CMakeFiles/EulerP41.dir/requires: CMakeFiles/EulerP41.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/EulerP41.dir/requires

CMakeFiles/EulerP41.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EulerP41.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EulerP41.dir/clean

CMakeFiles/EulerP41.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\s521059\CLionProjects\Euler Project\EulerP41" "C:\Users\s521059\CLionProjects\Euler Project\EulerP41" "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug" "C:\Users\s521059\CLionProjects\Euler Project\EulerP41\cmake-build-debug\CMakeFiles\EulerP41.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EulerP41.dir/depend

