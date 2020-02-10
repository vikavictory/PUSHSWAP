cmake_minimum_required(VERSION 3.14)
project(push_swap C)

set(CMAKE_C_STANDARD 99)
include_directories(libftprintf libftprintf/includes libftprintf/srcs libftprintf/srcs/libft libftprintf/srcs/libft/includes)
link_directories(libftprintf)

#add_executable(push_swap main.c push_swap.h)
#add_executable(push_swap push_swap.c push_swap.h reading_and_validation.c)
add_executable(push_swap checker_main.c push_swap.h validation_check.c actions_rra_rrb_rrr.c actions_ra_rb_rr.c actions_sa_sb_ss.c actions_pa_pb.c fill_stack.c find_duplicates_and_min.c apply_actions.c)

target_link_libraries(push_swap libftprintf.a)
#target_link_libraries(checker libftprintf.a)