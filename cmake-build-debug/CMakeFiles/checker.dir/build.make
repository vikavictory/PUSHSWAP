# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Users/hdeckard/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Users/hdeckard/Desktop/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hdeckard/PUSH_SWAP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hdeckard/PUSH_SWAP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/checker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checker.dir/flags.make

CMakeFiles/checker.dir/checker_main.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/checker_main.c.o: ../checker_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/checker.dir/checker_main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/checker_main.c.o   -c /Users/hdeckard/PUSH_SWAP/checker_main.c

CMakeFiles/checker.dir/checker_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/checker_main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/checker_main.c > CMakeFiles/checker.dir/checker_main.c.i

CMakeFiles/checker.dir/checker_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/checker_main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/checker_main.c -o CMakeFiles/checker.dir/checker_main.c.s

CMakeFiles/checker.dir/validation_check.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/validation_check.c.o: ../validation_check.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/checker.dir/validation_check.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/validation_check.c.o   -c /Users/hdeckard/PUSH_SWAP/validation_check.c

CMakeFiles/checker.dir/validation_check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/validation_check.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/validation_check.c > CMakeFiles/checker.dir/validation_check.c.i

CMakeFiles/checker.dir/validation_check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/validation_check.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/validation_check.c -o CMakeFiles/checker.dir/validation_check.c.s

CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o: ../actions_rra_rrb_rrr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o   -c /Users/hdeckard/PUSH_SWAP/actions_rra_rrb_rrr.c

CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/actions_rra_rrb_rrr.c > CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.i

CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/actions_rra_rrb_rrr.c -o CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.s

CMakeFiles/checker.dir/actions_ra_rb_rr.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/actions_ra_rb_rr.c.o: ../actions_ra_rb_rr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/checker.dir/actions_ra_rb_rr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/actions_ra_rb_rr.c.o   -c /Users/hdeckard/PUSH_SWAP/actions_ra_rb_rr.c

CMakeFiles/checker.dir/actions_ra_rb_rr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/actions_ra_rb_rr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/actions_ra_rb_rr.c > CMakeFiles/checker.dir/actions_ra_rb_rr.c.i

CMakeFiles/checker.dir/actions_ra_rb_rr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/actions_ra_rb_rr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/actions_ra_rb_rr.c -o CMakeFiles/checker.dir/actions_ra_rb_rr.c.s

CMakeFiles/checker.dir/actions_sa_sb_ss.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/actions_sa_sb_ss.c.o: ../actions_sa_sb_ss.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/checker.dir/actions_sa_sb_ss.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/actions_sa_sb_ss.c.o   -c /Users/hdeckard/PUSH_SWAP/actions_sa_sb_ss.c

CMakeFiles/checker.dir/actions_sa_sb_ss.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/actions_sa_sb_ss.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/actions_sa_sb_ss.c > CMakeFiles/checker.dir/actions_sa_sb_ss.c.i

CMakeFiles/checker.dir/actions_sa_sb_ss.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/actions_sa_sb_ss.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/actions_sa_sb_ss.c -o CMakeFiles/checker.dir/actions_sa_sb_ss.c.s

CMakeFiles/checker.dir/actions_pa_pb.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/actions_pa_pb.c.o: ../actions_pa_pb.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/checker.dir/actions_pa_pb.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/actions_pa_pb.c.o   -c /Users/hdeckard/PUSH_SWAP/actions_pa_pb.c

CMakeFiles/checker.dir/actions_pa_pb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/actions_pa_pb.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/actions_pa_pb.c > CMakeFiles/checker.dir/actions_pa_pb.c.i

CMakeFiles/checker.dir/actions_pa_pb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/actions_pa_pb.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/actions_pa_pb.c -o CMakeFiles/checker.dir/actions_pa_pb.c.s

CMakeFiles/checker.dir/fill_stack.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/fill_stack.c.o: ../fill_stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/checker.dir/fill_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/fill_stack.c.o   -c /Users/hdeckard/PUSH_SWAP/fill_stack.c

CMakeFiles/checker.dir/fill_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/fill_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/fill_stack.c > CMakeFiles/checker.dir/fill_stack.c.i

CMakeFiles/checker.dir/fill_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/fill_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/fill_stack.c -o CMakeFiles/checker.dir/fill_stack.c.s

CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o: ../find_duplicates_min_and_max.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o   -c /Users/hdeckard/PUSH_SWAP/find_duplicates_min_and_max.c

CMakeFiles/checker.dir/find_duplicates_min_and_max.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/find_duplicates_min_and_max.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/find_duplicates_min_and_max.c > CMakeFiles/checker.dir/find_duplicates_min_and_max.c.i

CMakeFiles/checker.dir/find_duplicates_min_and_max.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/find_duplicates_min_and_max.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/find_duplicates_min_and_max.c -o CMakeFiles/checker.dir/find_duplicates_min_and_max.c.s

CMakeFiles/checker.dir/apply_actions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/apply_actions.c.o: ../apply_actions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/checker.dir/apply_actions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/apply_actions.c.o   -c /Users/hdeckard/PUSH_SWAP/apply_actions.c

CMakeFiles/checker.dir/apply_actions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/apply_actions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/apply_actions.c > CMakeFiles/checker.dir/apply_actions.c.i

CMakeFiles/checker.dir/apply_actions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/apply_actions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/apply_actions.c -o CMakeFiles/checker.dir/apply_actions.c.s

CMakeFiles/checker.dir/help_functions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/help_functions.c.o: ../help_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/checker.dir/help_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/help_functions.c.o   -c /Users/hdeckard/PUSH_SWAP/help_functions.c

CMakeFiles/checker.dir/help_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/help_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/help_functions.c > CMakeFiles/checker.dir/help_functions.c.i

CMakeFiles/checker.dir/help_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/help_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/help_functions.c -o CMakeFiles/checker.dir/help_functions.c.s

CMakeFiles/checker.dir/checker_functions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/checker_functions.c.o: ../checker_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/checker.dir/checker_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/checker_functions.c.o   -c /Users/hdeckard/PUSH_SWAP/checker_functions.c

CMakeFiles/checker.dir/checker_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/checker_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/checker_functions.c > CMakeFiles/checker.dir/checker_functions.c.i

CMakeFiles/checker.dir/checker_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/checker_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/checker_functions.c -o CMakeFiles/checker.dir/checker_functions.c.s

CMakeFiles/checker.dir/visualization.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/visualization.c.o: ../visualization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/checker.dir/visualization.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/visualization.c.o   -c /Users/hdeckard/PUSH_SWAP/visualization.c

CMakeFiles/checker.dir/visualization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/visualization.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/PUSH_SWAP/visualization.c > CMakeFiles/checker.dir/visualization.c.i

CMakeFiles/checker.dir/visualization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/visualization.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/PUSH_SWAP/visualization.c -o CMakeFiles/checker.dir/visualization.c.s

# Object files for target checker
checker_OBJECTS = \
"CMakeFiles/checker.dir/checker_main.c.o" \
"CMakeFiles/checker.dir/validation_check.c.o" \
"CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o" \
"CMakeFiles/checker.dir/actions_ra_rb_rr.c.o" \
"CMakeFiles/checker.dir/actions_sa_sb_ss.c.o" \
"CMakeFiles/checker.dir/actions_pa_pb.c.o" \
"CMakeFiles/checker.dir/fill_stack.c.o" \
"CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o" \
"CMakeFiles/checker.dir/apply_actions.c.o" \
"CMakeFiles/checker.dir/help_functions.c.o" \
"CMakeFiles/checker.dir/checker_functions.c.o" \
"CMakeFiles/checker.dir/visualization.c.o"

# External object files for target checker
checker_EXTERNAL_OBJECTS =

checker: CMakeFiles/checker.dir/checker_main.c.o
checker: CMakeFiles/checker.dir/validation_check.c.o
checker: CMakeFiles/checker.dir/actions_rra_rrb_rrr.c.o
checker: CMakeFiles/checker.dir/actions_ra_rb_rr.c.o
checker: CMakeFiles/checker.dir/actions_sa_sb_ss.c.o
checker: CMakeFiles/checker.dir/actions_pa_pb.c.o
checker: CMakeFiles/checker.dir/fill_stack.c.o
checker: CMakeFiles/checker.dir/find_duplicates_min_and_max.c.o
checker: CMakeFiles/checker.dir/apply_actions.c.o
checker: CMakeFiles/checker.dir/help_functions.c.o
checker: CMakeFiles/checker.dir/checker_functions.c.o
checker: CMakeFiles/checker.dir/visualization.c.o
checker: CMakeFiles/checker.dir/build.make
checker: CMakeFiles/checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checker.dir/build: checker

.PHONY : CMakeFiles/checker.dir/build

CMakeFiles/checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checker.dir/clean

CMakeFiles/checker.dir/depend:
	cd /Users/hdeckard/PUSH_SWAP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hdeckard/PUSH_SWAP /Users/hdeckard/PUSH_SWAP /Users/hdeckard/PUSH_SWAP/cmake-build-debug /Users/hdeckard/PUSH_SWAP/cmake-build-debug /Users/hdeckard/PUSH_SWAP/cmake-build-debug/CMakeFiles/checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/checker.dir/depend

