# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_SOURCE_DIR = C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build

# Include any dependencies generated for this target.
include CMakeFiles/data_structures_c.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/data_structures_c.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/data_structures_c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/data_structures_c.dir/flags.make

CMakeFiles/data_structures_c.dir/src/principal.c.obj: CMakeFiles/data_structures_c.dir/flags.make
CMakeFiles/data_structures_c.dir/src/principal.c.obj: CMakeFiles/data_structures_c.dir/includes_C.rsp
CMakeFiles/data_structures_c.dir/src/principal.c.obj: C:/Users/raistlin/Documents/DOcencia/EstucturaDatos/src/MemoriaDinamica/Cola/src/principal.c
CMakeFiles/data_structures_c.dir/src/principal.c.obj: CMakeFiles/data_structures_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/data_structures_c.dir/src/principal.c.obj"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/data_structures_c.dir/src/principal.c.obj -MF CMakeFiles\data_structures_c.dir\src\principal.c.obj.d -o CMakeFiles\data_structures_c.dir\src\principal.c.obj -c C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\principal.c

CMakeFiles/data_structures_c.dir/src/principal.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/data_structures_c.dir/src/principal.c.i"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\principal.c > CMakeFiles\data_structures_c.dir\src\principal.c.i

CMakeFiles/data_structures_c.dir/src/principal.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/data_structures_c.dir/src/principal.c.s"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\principal.c -o CMakeFiles\data_structures_c.dir\src\principal.c.s

CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj: CMakeFiles/data_structures_c.dir/flags.make
CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj: CMakeFiles/data_structures_c.dir/includes_C.rsp
CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj: C:/Users/raistlin/Documents/DOcencia/EstucturaDatos/src/MemoriaDinamica/Cola/src/ColaL/cola.c
CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj: CMakeFiles/data_structures_c.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj -MF CMakeFiles\data_structures_c.dir\src\ColaL\cola.c.obj.d -o CMakeFiles\data_structures_c.dir\src\ColaL\cola.c.obj -c C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\ColaL\cola.c

CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.i"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\ColaL\cola.c > CMakeFiles\data_structures_c.dir\src\ColaL\cola.c.i

CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.s"
	C:\msys64\ucrt64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\src\ColaL\cola.c -o CMakeFiles\data_structures_c.dir\src\ColaL\cola.c.s

# Object files for target data_structures_c
data_structures_c_OBJECTS = \
"CMakeFiles/data_structures_c.dir/src/principal.c.obj" \
"CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj"

# External object files for target data_structures_c
data_structures_c_EXTERNAL_OBJECTS =

data_structures_c.exe: CMakeFiles/data_structures_c.dir/src/principal.c.obj
data_structures_c.exe: CMakeFiles/data_structures_c.dir/src/ColaL/cola.c.obj
data_structures_c.exe: CMakeFiles/data_structures_c.dir/build.make
data_structures_c.exe: CMakeFiles/data_structures_c.dir/linkLibs.rsp
data_structures_c.exe: CMakeFiles/data_structures_c.dir/objects1.rsp
data_structures_c.exe: CMakeFiles/data_structures_c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable data_structures_c.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\data_structures_c.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/data_structures_c.dir/build: data_structures_c.exe
.PHONY : CMakeFiles/data_structures_c.dir/build

CMakeFiles/data_structures_c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\data_structures_c.dir\cmake_clean.cmake
.PHONY : CMakeFiles/data_structures_c.dir/clean

CMakeFiles/data_structures_c.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build C:\Users\raistlin\Documents\DOcencia\EstucturaDatos\src\MemoriaDinamica\Cola\build\CMakeFiles\data_structures_c.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/data_structures_c.dir/depend

