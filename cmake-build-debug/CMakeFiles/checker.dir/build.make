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
CMAKE_SOURCE_DIR = /Users/hdeckard/pushswap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hdeckard/pushswap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/checker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checker.dir/flags.make

CMakeFiles/checker.dir/srcs/checker_main.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/checker_main.c.o: ../srcs/checker_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/checker.dir/srcs/checker_main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/checker_main.c.o   -c /Users/hdeckard/pushswap/srcs/checker_main.c

CMakeFiles/checker.dir/srcs/checker_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/checker_main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/checker_main.c > CMakeFiles/checker.dir/srcs/checker_main.c.i

CMakeFiles/checker.dir/srcs/checker_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/checker_main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/checker_main.c -o CMakeFiles/checker.dir/srcs/checker_main.c.s

CMakeFiles/checker.dir/srcs/validation_check.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/validation_check.c.o: ../srcs/validation_check.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/checker.dir/srcs/validation_check.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/validation_check.c.o   -c /Users/hdeckard/pushswap/srcs/validation_check.c

CMakeFiles/checker.dir/srcs/validation_check.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/validation_check.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/validation_check.c > CMakeFiles/checker.dir/srcs/validation_check.c.i

CMakeFiles/checker.dir/srcs/validation_check.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/validation_check.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/validation_check.c -o CMakeFiles/checker.dir/srcs/validation_check.c.s

CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o: ../srcs/actions_rra_rrb_rrr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o   -c /Users/hdeckard/pushswap/srcs/actions_rra_rrb_rrr.c

CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/actions_rra_rrb_rrr.c > CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.i

CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/actions_rra_rrb_rrr.c -o CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.s

CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o: ../srcs/actions_ra_rb_rr.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o   -c /Users/hdeckard/pushswap/srcs/actions_ra_rb_rr.c

CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/actions_ra_rb_rr.c > CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.i

CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/actions_ra_rb_rr.c -o CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.s

CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o: ../srcs/actions_sa_sb_ss.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o   -c /Users/hdeckard/pushswap/srcs/actions_sa_sb_ss.c

CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/actions_sa_sb_ss.c > CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.i

CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/actions_sa_sb_ss.c -o CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.s

CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o: ../srcs/actions_pa_pb.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o   -c /Users/hdeckard/pushswap/srcs/actions_pa_pb.c

CMakeFiles/checker.dir/srcs/actions_pa_pb.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/actions_pa_pb.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/actions_pa_pb.c > CMakeFiles/checker.dir/srcs/actions_pa_pb.c.i

CMakeFiles/checker.dir/srcs/actions_pa_pb.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/actions_pa_pb.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/actions_pa_pb.c -o CMakeFiles/checker.dir/srcs/actions_pa_pb.c.s

CMakeFiles/checker.dir/srcs/fill_stack.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/fill_stack.c.o: ../srcs/fill_stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/checker.dir/srcs/fill_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/fill_stack.c.o   -c /Users/hdeckard/pushswap/srcs/fill_stack.c

CMakeFiles/checker.dir/srcs/fill_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/fill_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/fill_stack.c > CMakeFiles/checker.dir/srcs/fill_stack.c.i

CMakeFiles/checker.dir/srcs/fill_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/fill_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/fill_stack.c -o CMakeFiles/checker.dir/srcs/fill_stack.c.s

CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o: ../srcs/find_duplicates_min_and_max.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o   -c /Users/hdeckard/pushswap/srcs/find_duplicates_min_and_max.c

CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/find_duplicates_min_and_max.c > CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.i

CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/find_duplicates_min_and_max.c -o CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.s

CMakeFiles/checker.dir/srcs/apply_actions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/apply_actions.c.o: ../srcs/apply_actions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/checker.dir/srcs/apply_actions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/apply_actions.c.o   -c /Users/hdeckard/pushswap/srcs/apply_actions.c

CMakeFiles/checker.dir/srcs/apply_actions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/apply_actions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/apply_actions.c > CMakeFiles/checker.dir/srcs/apply_actions.c.i

CMakeFiles/checker.dir/srcs/apply_actions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/apply_actions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/apply_actions.c -o CMakeFiles/checker.dir/srcs/apply_actions.c.s

CMakeFiles/checker.dir/srcs/help_functions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/help_functions.c.o: ../srcs/help_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/checker.dir/srcs/help_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/help_functions.c.o   -c /Users/hdeckard/pushswap/srcs/help_functions.c

CMakeFiles/checker.dir/srcs/help_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/help_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/help_functions.c > CMakeFiles/checker.dir/srcs/help_functions.c.i

CMakeFiles/checker.dir/srcs/help_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/help_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/help_functions.c -o CMakeFiles/checker.dir/srcs/help_functions.c.s

CMakeFiles/checker.dir/srcs/checker_functions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/checker_functions.c.o: ../srcs/checker_functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/checker.dir/srcs/checker_functions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/checker_functions.c.o   -c /Users/hdeckard/pushswap/srcs/checker_functions.c

CMakeFiles/checker.dir/srcs/checker_functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/checker_functions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/checker_functions.c > CMakeFiles/checker.dir/srcs/checker_functions.c.i

CMakeFiles/checker.dir/srcs/checker_functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/checker_functions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/checker_functions.c -o CMakeFiles/checker.dir/srcs/checker_functions.c.s

CMakeFiles/checker.dir/srcs/visualization.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/visualization.c.o: ../srcs/visualization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/checker.dir/srcs/visualization.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/visualization.c.o   -c /Users/hdeckard/pushswap/srcs/visualization.c

CMakeFiles/checker.dir/srcs/visualization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/visualization.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/visualization.c > CMakeFiles/checker.dir/srcs/visualization.c.i

CMakeFiles/checker.dir/srcs/visualization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/visualization.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/visualization.c -o CMakeFiles/checker.dir/srcs/visualization.c.s

CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o: ../libftprintf/srcs/libft/nummod.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o   -c /Users/hdeckard/pushswap/libftprintf/srcs/libft/nummod.c

CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/libftprintf/srcs/libft/nummod.c > CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.i

CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/libftprintf/srcs/libft/nummod.c -o CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.s

CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o: ../srcs/functions_for_help_array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o   -c /Users/hdeckard/pushswap/srcs/functions_for_help_array.c

CMakeFiles/checker.dir/srcs/functions_for_help_array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/functions_for_help_array.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/functions_for_help_array.c > CMakeFiles/checker.dir/srcs/functions_for_help_array.c.i

CMakeFiles/checker.dir/srcs/functions_for_help_array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/functions_for_help_array.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/functions_for_help_array.c -o CMakeFiles/checker.dir/srcs/functions_for_help_array.c.s

CMakeFiles/checker.dir/srcs/functions_for_image.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/functions_for_image.c.o: ../srcs/functions_for_image.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/checker.dir/srcs/functions_for_image.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/functions_for_image.c.o   -c /Users/hdeckard/pushswap/srcs/functions_for_image.c

CMakeFiles/checker.dir/srcs/functions_for_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/functions_for_image.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/functions_for_image.c > CMakeFiles/checker.dir/srcs/functions_for_image.c.i

CMakeFiles/checker.dir/srcs/functions_for_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/functions_for_image.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/functions_for_image.c -o CMakeFiles/checker.dir/srcs/functions_for_image.c.s

CMakeFiles/checker.dir/srcs/program_control.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/srcs/program_control.c.o: ../srcs/program_control.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/checker.dir/srcs/program_control.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/srcs/program_control.c.o   -c /Users/hdeckard/pushswap/srcs/program_control.c

CMakeFiles/checker.dir/srcs/program_control.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/srcs/program_control.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/srcs/program_control.c > CMakeFiles/checker.dir/srcs/program_control.c.i

CMakeFiles/checker.dir/srcs/program_control.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/srcs/program_control.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/srcs/program_control.c -o CMakeFiles/checker.dir/srcs/program_control.c.s

CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o: ../libftprintf/srcs/libft/ft_abs.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o   -c /Users/hdeckard/pushswap/libftprintf/srcs/libft/ft_abs.c

CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/hdeckard/pushswap/libftprintf/srcs/libft/ft_abs.c > CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.i

CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/hdeckard/pushswap/libftprintf/srcs/libft/ft_abs.c -o CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.s

# Object files for target checker
checker_OBJECTS = \
"CMakeFiles/checker.dir/srcs/checker_main.c.o" \
"CMakeFiles/checker.dir/srcs/validation_check.c.o" \
"CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o" \
"CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o" \
"CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o" \
"CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o" \
"CMakeFiles/checker.dir/srcs/fill_stack.c.o" \
"CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o" \
"CMakeFiles/checker.dir/srcs/apply_actions.c.o" \
"CMakeFiles/checker.dir/srcs/help_functions.c.o" \
"CMakeFiles/checker.dir/srcs/checker_functions.c.o" \
"CMakeFiles/checker.dir/srcs/visualization.c.o" \
"CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o" \
"CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o" \
"CMakeFiles/checker.dir/srcs/functions_for_image.c.o" \
"CMakeFiles/checker.dir/srcs/program_control.c.o" \
"CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o"

# External object files for target checker
checker_EXTERNAL_OBJECTS =

checker: CMakeFiles/checker.dir/srcs/checker_main.c.o
checker: CMakeFiles/checker.dir/srcs/validation_check.c.o
checker: CMakeFiles/checker.dir/srcs/actions_rra_rrb_rrr.c.o
checker: CMakeFiles/checker.dir/srcs/actions_ra_rb_rr.c.o
checker: CMakeFiles/checker.dir/srcs/actions_sa_sb_ss.c.o
checker: CMakeFiles/checker.dir/srcs/actions_pa_pb.c.o
checker: CMakeFiles/checker.dir/srcs/fill_stack.c.o
checker: CMakeFiles/checker.dir/srcs/find_duplicates_min_and_max.c.o
checker: CMakeFiles/checker.dir/srcs/apply_actions.c.o
checker: CMakeFiles/checker.dir/srcs/help_functions.c.o
checker: CMakeFiles/checker.dir/srcs/checker_functions.c.o
checker: CMakeFiles/checker.dir/srcs/visualization.c.o
checker: CMakeFiles/checker.dir/libftprintf/srcs/libft/nummod.c.o
checker: CMakeFiles/checker.dir/srcs/functions_for_help_array.c.o
checker: CMakeFiles/checker.dir/srcs/functions_for_image.c.o
checker: CMakeFiles/checker.dir/srcs/program_control.c.o
checker: CMakeFiles/checker.dir/libftprintf/srcs/libft/ft_abs.c.o
checker: CMakeFiles/checker.dir/build.make
checker: CMakeFiles/checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking C executable checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checker.dir/build: checker

.PHONY : CMakeFiles/checker.dir/build

CMakeFiles/checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checker.dir/clean

CMakeFiles/checker.dir/depend:
	cd /Users/hdeckard/pushswap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hdeckard/pushswap /Users/hdeckard/pushswap /Users/hdeckard/pushswap/cmake-build-debug /Users/hdeckard/pushswap/cmake-build-debug /Users/hdeckard/pushswap/cmake-build-debug/CMakeFiles/checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/checker.dir/depend

