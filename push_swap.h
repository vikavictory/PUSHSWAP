/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:03:47 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 20:32:57 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"

typedef struct	s_stack
{
	int				cell;
	struct s_stack 	*next;
}				t_stack;

typedef struct	s_pushswap
{
	t_stack		*begin_a;
	t_stack		*begin_b;
	t_stack		*stack_a;
	t_stack		*stack_b;
	int 		min;
	int 		max;
	int 		i_action;
	t_stack		*link_to_min; // зачем??
	t_stack		*link_to_max; // зачем??
	int 		count_of_elements; // количество
	int 		c_flag;
	int			v_flag;
}				t_pushswap;

t_pushswap		*initialization(void);
void			clean_up(t_pushswap *head);
void			print_stack(t_stack *stack);
int 			check_flags(t_pushswap *head, int argc, char **argv);
int				check_actions(char *str);
int 			check_actions_all(t_pushswap *head, char **argv);
int 			check_argv(const char *str);
t_stack			*new_element(int number);
int				fill_stack(t_pushswap *head, char **argv);
int				find_duplicates_and_min(t_pushswap *head);
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
void			how_to_sort(t_pushswap *head, char **argv);
void			sorting_algorithm(t_pushswap *head);


#endif
