# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build"

# Include any dependencies generated for this target.
include CMakeFiles/Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project.dir/flags.make

CMakeFiles/Project.dir/main.cpp.obj: CMakeFiles/Project.dir/flags.make
CMakeFiles/Project.dir/main.cpp.obj: C:/Users/Ahmad\ Zani\ Syechkar/source/Workspace\ Source\ Code/Metaprogramming\ -\ Learning/02/main.cpp
CMakeFiles/Project.dir/main.cpp.obj: CMakeFiles/Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project.dir/main.cpp.obj"
	"C:/Program Files/LLVM/bin/clang++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project.dir/main.cpp.obj -MF CMakeFiles/Project.dir/main.cpp.obj.d -o CMakeFiles/Project.dir/main.cpp.obj -c "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/main.cpp"

CMakeFiles/Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Project.dir/main.cpp.i"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_PREPROCESSED_SOURCE

CMakeFiles/Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Project.dir/main.cpp.s"
	$(CMAKE_COMMAND) -E cmake_unimplemented_variable CMAKE_CXX_CREATE_ASSEMBLY_SOURCE

# Object files for target Project
Project_OBJECTS = \
"CMakeFiles/Project.dir/main.cpp.obj"

# External object files for target Project
Project_EXTERNAL_OBJECTS =

Project.exe: CMakeFiles/Project.dir/main.cpp.obj
Project.exe: CMakeFiles/Project.dir/build.make
Project.exe: CMakeFiles/Project.dir/linkLibs.rsp
Project.exe: CMakeFiles/Project.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project.exe"
	"C:/Program Files/LLVM/bin/clang++.exe" -nostartfiles -nostdlib -O0 -g -Xclang -gcodeview -D_DEBUG -D_DLL -D_MT -Xclang --dependent-lib=msvcrtd -Xlinker /subsystem:console -fuse-ld=lld-link @CMakeFiles/Project.dir/objects1.rsp -o Project.exe -Xlinker /MANIFEST:EMBED -Xlinker /implib:Project.lib -Xlinker /pdb:"C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build/Project.pdb" -Xlinker /version:0.0  @CMakeFiles/Project.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Project.dir/build: Project.exe
.PHONY : CMakeFiles/Project.dir/build

CMakeFiles/Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project.dir/clean

CMakeFiles/Project.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02" "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02" "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build" "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build" "C:/Users/Ahmad Zani Syechkar/source/Workspace Source Code/Metaprogramming - Learning/02/build/CMakeFiles/Project.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/Project.dir/depend

