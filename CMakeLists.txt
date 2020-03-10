cmake_minimum_required(VERSION 3.14)
project(push_swap C)

set(CMAKE_C_STANDARD 90)
include_directories(libftprintf libftprintf/includes libftprintf/srcs libftprintf/srcs/libft libftprintf/srcs/libft/includes)
link_directories(libftprintf)


add_executable(checker checker_main.c push_swap.h validation_check.c actions_rra_rrb_rrr.c actions_ra_rb_rr.c actions_sa_sb_ss.c actions_pa_pb.c fill_stack.c find_duplicates_min_and_max.c apply_actions.c help_functions.c checker_functions.c visualization.c libftprintf/srcs/libft/nummod.c functions_for_help_array.c functions_for_image.c program_control.c libftprintf/srcs/libft/ft_abs.c)
add_executable(push_swap push_swap.c push_swap.h validation_check.c actions_rra_rrb_rrr.c actions_ra_rb_rr.c actions_sa_sb_ss.c actions_pa_pb.c fill_stack.c find_duplicates_min_and_max.c apply_actions.c help_functions.c sorting_algorithm.c checker_functions.c functions_for_help_array.c functions_for_blocks.c stack_a_functions.c stack_b_functions.c visualization.c functions_for_image.c program_control.c)

target_link_libraries(push_swap mlx libftprintf.a)
target_link_libraries(checker mlx libftprintf.a)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
target_link_libraries(checker ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
target_link_libraries(push_swap ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
