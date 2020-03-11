
PUSH_SWAP = push_swap
CHECKER = checker

#sources and objects
COMMON_SRC =        actions_pa_pb.c \
                    actions_ra_rb_rr.c \
                    actions_rra_rrb_rrr.c \
                    actions_sa_sb_ss.c \
                    fill_stack.c \
                    find_duplicates_min_and_max.c \
                    validation_check.c \
                    functions_for_help_array.c \
                    help_functions.c

PUSH_SWAP_SRC =     push_swap.c \
                    functions_for_blocks.c \
                    sorting_algorithm.c \
                    stack_a_functions.c \
                    stack_b_functions.c

CHECKER_SRC =       checker_main.c \
                    apply_actions.c \
                    checker_functions.c \
                    visualization.c \
                    functions_for_image.c \
                    program_control.c

#COMMON_OBJ = $(COMMON_SRC:.c=.o)
#PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:.c=.o)
#CHECKER_OBJ = $(CHECKER_SRC:.c=.o)

#COMMON_OBJ = $(addprefix $(OBJDIR),$(COMMON_SRC:.c=.o))
#PUSH_SWAP_OBJ = $(addprefix $(OBJDIR),$(PUSH_SWAP_SRC:.c=.o))
#CHECKER_OBJ = $(addprefix $(OBJDIR),$(CHECKER_SRC:.c=.o))

COMMON_OBJ = $(addprefix $(SRCDIR),$(COMMON_SRC:.c=.o))
PUSH_SWAP_OBJ = $(addprefix $(SRCDIR),$(PUSH_SWAP_SRC:.c=.o))
CHECKER_OBJ = $(addprefix $(SRCDIR),$(CHECKER_SRC:.c=.o))

#directories
SRCDIR	= ./srcs/
INCDIR	= ./includes/
OBJDIR	= ./obj/

#includes
INCLUDES = -I./includes

#library
LIB = ./libftprintf/libftprintf.a
LIB_DIR = ./libftprintf/
LIB_INC = -I ./libftprintf/includes -I ./libftprintf/srcs/libft/includes/

#flags
FLAGS = -Wall -Wextra -Werror
MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit

#compilation
all: $(PUSH_SWAP) $(CHECKER)

$(PUSH_SWAP): $(PUSH_SWAP_OBJ) $(COMMON_OBJ)
	make -C $(LIB_DIR)
	gcc -o $(PUSH_SWAP) $(FLAGS) $(INCLUDES) $(PUSH_SWAP_OBJ) $(COMMON_OBJ) $(LIB_INC) $(LIB)

$(CHECKER): $(CHECKER_OBJ) $(COMMON_OBJ)
	make -C $(LIB_DIR)
	gcc -o $(CHECKER) $(FLAGS) $(CHECKER_OBJ) $(COMMON_OBJ) $(MLX_FLAGS) $(INCLUDES) $(LIB_INC) $(LIB)

clean:
	make clean -C $(LIB_DIR)
	rm -f $(COMMON_OBJ) $(CHECKER_OBJ) $(PUSH_SWAP_OBJ)

fclean: clean
	make fclean -C $(LIB_DIR)
	rm -f $(PUSH_SWAP) $(CHECKER)

re: fclean all
