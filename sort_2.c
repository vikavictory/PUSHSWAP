/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/01 20:21:49 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		from_a_to_b(t_pushswap *head)
{
	int		i;
	int 	stop;

	i = 0;
	if (head->count_of_elements > 5)
		stop = head->help_array[head->count_of_elements - 3];
	else
		stop = head->help_array[2];
	while (i < head->count_of_elements)
	{
		if (head->stack_a->cell < stop)
			action_pb(head);
		else
			action_ra(head);
		i++;
	}
}

int 		get_place_of_number(t_pushswap *head, int num)
{
	int i;
	t_stack *b;

	i = 1;
	b = head->stack_b;
	while (b->cell != num)
	{
		b = b->next;
		i++;
	}
	return (i);
}

void		case_from_head_b(t_pushswap *head, int count)
{
	int i;

	i = 1;
	head->head_a = 0;
	head->end_a = 0;
	while (i < count)
	{
//		if (head->stack_b->cell == head->help_array[head->i_arr - 1])
//		{
//			action_pa(head);
//			head->head_a++;
//		}
	//	else
			action_rb(head);
		i++;
	}
	action_pa(head);
//	if (head->head_a > 0)
//	{
//		head->i_arr--;
//		head->count_b--;
//		if (head->stack_a->cell > head->stack_a->next->cell)
//			action_sa(head);
//	}
}

void		case_from_end_b(t_pushswap *head, int count)
{
	int i;

	i = 0;
	head->head_a = 0;
	head->end_a = 0;
	while (i < count + 1)
	{
		action_rrb(head);
		if (head->stack_b->cell == head->help_array[head->i_arr - 1])
		{
			action_pa(head);
			head->head_a++;
		}
		i++;
	}
	action_pa(head);
	if (head->head_a > 0)
	{
		head->i_arr--;
		head->count_b--;
		if (head->stack_a->cell > head->stack_a->next->cell)
			action_sa(head);
	}
}

void		from_b_to_a(t_pushswap *head)
{
	int		num;
	int 	i;

	head->i_arr = head->count_of_elements - 4;
	head->count_b = head->count_of_elements - 3;
	while (head->i_arr > 0)
	{
		num = head->help_array[head->i_arr];
		i = get_place_of_number(head, num);
		if (i <= head->count_b / 2)
			case_from_head_b(head, i);
		else
			case_from_end_b(head, head->count_b - i);
		head->i_arr--;
		head->count_b--;
		//common_print(head);
	}
	if (head->i_arr == 0)
		action_pa(head);
}


void		main_sorting(t_pushswap *head)
{
	from_a_to_b(head);
	sorting_algorithm_three(head);
	from_b_to_a(head);
	ft_printf("\ncount = %d\n", head->opr);
	common_print(head);
}