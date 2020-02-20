/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:03:47 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/20 18:00:19 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include "mlx.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define CHECKER 1
# define PUSH_SWAP 2
# define WINDOW_X 1000
# define WINDOW_Y 1000
# define BUTSIZE 30
# define BUFFER 10
# define PLAY 1
# define PAUSE 2

typedef struct	s_stack
{
	int				cell;
	struct s_stack 	*next;
}				t_stack;

typedef struct	s_pushswap
{
	void		*mlx;
	void		*win;
	void		*image;
	void		*image_button;
	int 		*data_img_button;
	int 		*data_img;
	int			bpp;
	int			size_line;
	int			endian;
	t_stack		*begin_a;
	t_stack		*begin_b;
	t_stack		*stack_a;
	t_stack		*stack_b;
	int 		min;
	int 		max;
	int 		i_action; // индекс, с которого начинаются команды // не нужен ??
	//t_stack		*link_to_min; // зачем??
	//t_stack		*link_to_max; // зачем??
	int 		count_of_elements;// количество
	int 		steps; //
	int 		c_flag;
	int			v_flag; // визуализация
	int 		first_a;
	int 		second_a;
	int			last_a;
	int 		program;
	int			play_pause;
	char 		*actions;
}				t_pushswap;

t_pushswap		*initialization(int program, int argc);
void			clean_up(t_pushswap *head);
void			print_stack(t_stack *stack);
int 			check_flags(t_pushswap *head, char **argv);
int				check_actions(t_pushswap *head);
int 			check_actions_all(t_pushswap *head, char **argv);
int 			check_argv(const char *str);
int				check_stack(t_stack *stack);
int				check_stack_minus(t_stack *stack);
void			check_stack_print(t_stack *stack, t_stack *b);
int				check_stack_common(t_stack *stack, t_stack *b);
t_stack			*new_element(int number);
int				fill_stack(t_pushswap *head, char **argv);
int				find_duplicates_min_and_max(t_pushswap *head);
void			action_ra(t_pushswap *head);
void			action_rb(t_pushswap *head);
void			action_rr(t_pushswap *head);
void			action_sa(t_pushswap *head);
void			action_sb(t_pushswap *head);
void			action_ss(t_pushswap *head);
void			action_pa(t_pushswap *head);
void			action_pb(t_pushswap *head);
void			action_rra(t_pushswap *head);
void			action_rrb(t_pushswap *head);
void			action_rrr(t_pushswap *head);
void			how_to_sort(t_pushswap *head);
void			sorting_algorithm(t_pushswap *head);
void			vis_initialization(t_pushswap *head);

#endif
