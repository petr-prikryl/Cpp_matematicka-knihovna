# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.30

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build"

# Include any dependencies generated for this target.
include lib/Math/CMakeFiles/Math.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/Math/CMakeFiles/Math.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/Math/CMakeFiles/Math.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Math/CMakeFiles/Math.dir/flags.make

lib/Math/CMakeFiles/Math.dir/Math.cpp.obj: lib/Math/CMakeFiles/Math.dir/flags.make
lib/Math/CMakeFiles/Math.dir/Math.cpp.obj: lib/Math/CMakeFiles/Math.dir/includes_CXX.rsp
lib/Math/CMakeFiles/Math.dir/Math.cpp.obj: C:/Users/petrp/ownCloud/Skola/5ap5pc/1sc\ reseni/cvikoprvni/Cpp_matematicka-knihovna/lib/Math/Math.cpp
lib/Math/CMakeFiles/Math.dir/Math.cpp.obj: lib/Math/CMakeFiles/Math.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Math/CMakeFiles/Math.dir/Math.cpp.obj"
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/Math/CMakeFiles/Math.dir/Math.cpp.obj -MF CMakeFiles\Math.dir\Math.cpp.obj.d -o CMakeFiles\Math.dir\Math.cpp.obj -c "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\lib\Math\Math.cpp"

lib/Math/CMakeFiles/Math.dir/Math.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Math.dir/Math.cpp.i"
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\lib\Math\Math.cpp" > CMakeFiles\Math.dir\Math.cpp.i

lib/Math/CMakeFiles/Math.dir/Math.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Math.dir/Math.cpp.s"
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\lib\Math\Math.cpp" -o CMakeFiles\Math.dir\Math.cpp.s

# Object files for target Math
Math_OBJECTS = \
"CMakeFiles/Math.dir/Math.cpp.obj"

# External object files for target Math
Math_EXTERNAL_OBJECTS =

lib/Math/libMath.a: lib/Math/CMakeFiles/Math.dir/Math.cpp.obj
lib/Math/libMath.a: lib/Math/CMakeFiles/Math.dir/build.make
lib/Math/libMath.a: lib/Math/CMakeFiles/Math.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMath.a"
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && $(CMAKE_COMMAND) -P CMakeFiles\Math.dir\cmake_clean_target.cmake
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Math.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Math/CMakeFiles/Math.dir/build: lib/Math/libMath.a
.PHONY : lib/Math/CMakeFiles/Math.dir/build

lib/Math/CMakeFiles/Math.dir/clean:
	cd /d C:\Users\petrp\ownCloud\Skola\5ap5pc\1SCRES~1\CVIKOP~1\CPP_MA~1\build\lib\Math && $(CMAKE_COMMAND) -P CMakeFiles\Math.dir\cmake_clean.cmake
.PHONY : lib/Math/CMakeFiles/Math.dir/clean

lib/Math/CMakeFiles/Math.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna" "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\lib\Math" "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build" "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build\lib\Math" "C:\Users\petrp\ownCloud\Skola\5ap5pc\1sc reseni\cvikoprvni\Cpp_matematicka-knihovna\build\lib\Math\CMakeFiles\Math.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : lib/Math/CMakeFiles/Math.dir/depend

