# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = C:\Users\Cristian\Desktop\IEP\IEP_S6\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Cristian\Desktop\IEP\IEP_S6\out

# Include any dependencies generated for this target.
include CMakeFiles/IEP_S6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/IEP_S6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/IEP_S6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IEP_S6.dir/flags.make

CMakeFiles/IEP_S6.dir/main.cpp.obj: CMakeFiles/IEP_S6.dir/flags.make
CMakeFiles/IEP_S6.dir/main.cpp.obj: CMakeFiles/IEP_S6.dir/includes_CXX.rsp
CMakeFiles/IEP_S6.dir/main.cpp.obj: C:/Users/Cristian/Desktop/IEP/IEP_S6/src/main.cpp
CMakeFiles/IEP_S6.dir/main.cpp.obj: CMakeFiles/IEP_S6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Cristian\Desktop\IEP\IEP_S6\out\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IEP_S6.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/IEP_S6.dir/main.cpp.obj -MF CMakeFiles\IEP_S6.dir\main.cpp.obj.d -o CMakeFiles\IEP_S6.dir\main.cpp.obj -c C:\Users\Cristian\Desktop\IEP\IEP_S6\src\main.cpp

CMakeFiles/IEP_S6.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IEP_S6.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Cristian\Desktop\IEP\IEP_S6\src\main.cpp > CMakeFiles\IEP_S6.dir\main.cpp.i

CMakeFiles/IEP_S6.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IEP_S6.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Cristian\Desktop\IEP\IEP_S6\src\main.cpp -o CMakeFiles\IEP_S6.dir\main.cpp.s

# Object files for target IEP_S6
IEP_S6_OBJECTS = \
"CMakeFiles/IEP_S6.dir/main.cpp.obj"

# External object files for target IEP_S6
IEP_S6_EXTERNAL_OBJECTS =

IEP_S6.exe: CMakeFiles/IEP_S6.dir/main.cpp.obj
IEP_S6.exe: CMakeFiles/IEP_S6.dir/build.make
IEP_S6.exe: Corporation/libCorporation.a
IEP_S6.exe: Processor/libProcessor.a
IEP_S6.exe: ProcessorModelName/libProcessorModelName.a
IEP_S6.exe: HandCream/libHandCream.a
IEP_S6.exe: CMakeFiles/IEP_S6.dir/linklibs.rsp
IEP_S6.exe: CMakeFiles/IEP_S6.dir/objects1.rsp
IEP_S6.exe: CMakeFiles/IEP_S6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Cristian\Desktop\IEP\IEP_S6\out\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IEP_S6.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\IEP_S6.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IEP_S6.dir/build: IEP_S6.exe
.PHONY : CMakeFiles/IEP_S6.dir/build

CMakeFiles/IEP_S6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\IEP_S6.dir\cmake_clean.cmake
.PHONY : CMakeFiles/IEP_S6.dir/clean

CMakeFiles/IEP_S6.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Cristian\Desktop\IEP\IEP_S6\src C:\Users\Cristian\Desktop\IEP\IEP_S6\src C:\Users\Cristian\Desktop\IEP\IEP_S6\out C:\Users\Cristian\Desktop\IEP\IEP_S6\out C:\Users\Cristian\Desktop\IEP\IEP_S6\out\CMakeFiles\iep_s6.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IEP_S6.dir/depend

