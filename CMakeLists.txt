cmake_minimum_required(VERSION 3.14)
project(push_swap C)

set(CMAKE_C_STANDARD 90)
include_directories(./includes ./src libftprintf libftprintf/includes libftprintf/srcs libftprintf/srcs/libft libftprintf/srcs/libft/includes)
link_directories(srcs includes libftprintf)

add_executable(checker srcs/checker_main.c includes/push_swap.h srcs/validation_check.c srcs/actions_rra_rrb_rrr.c srcs/actions_ra_rb_rr.c srcs/actions_sa_sb_ss.c srcs/actions_pa_pb.c srcs/fill_stack.c srcs/find_duplicates_min_and_max.c srcs/apply_actions.c srcs/help_functions.c srcs/checker_functions.c srcs/visualization.c libftprintf/srcs/libft/nummod.c srcs/functions_for_help_array.c srcs/functions_for_image.c srcs/program_control.c libftprintf/srcs/libft/ft_abs.c)
add_executable(push_swap srcs/push_swap.c includes/push_swap.h srcs/validation_check.c srcs/actions_rra_rrb_rrr.c srcs/actions_ra_rb_rr.c srcs/actions_sa_sb_ss.c srcs/actions_pa_pb.c srcs/fill_stack.c srcs/find_duplicates_min_and_max.c srcs/apply_actions.c srcs/help_functions.c srcs/sorting_algorithm.c srcs/checker_functions.c srcs/functions_for_help_array.c srcs/functions_for_blocks.c srcs/stack_a_functions.c srcs/stack_b_functions.c srcs/visualization.c srcs/functions_for_image.c srcs/program_control.c)

target_link_libraries(push_swap mlx libftprintf.a)
target_link_libraries(checker mlx libftprintf.a)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
target_link_libraries(checker ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(push_swap ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
