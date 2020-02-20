/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/18 17:17:03 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		get_first_second_last(t_pushswap *head)
{
	t_stack *help;

	help = head->stack_a;
	head->first_a = help->cell;
	head->second_a = help->next->cell;
	while(help->next)
		help = help->next;
	head->last_a = help->cell;
}

void		sorting_algorithm_three(t_pushswap *head)
{
	while (check_stack(head->stack_a) == 0)
	{
		get_first_second_last(head);
		if (head->first_a > head->last_a && head->second_a < head->last_a)
			action_ra(head);
		else if (head->first_a < head->second_a && head->first_a > head->last_a)
			action_rra(head);
		else
			action_sa(head);
		head->steps++;
	}
}

void		sorting_for_b(t_pushswap *head)
{
	if (check_stack_minus(head->stack_b) == 0)
	{
		if (head->stack_b->cell < head->stack_b->next->cell)
			action_sb(head);
	}
}

//void		main_sorting(t_pushswap *head)
//{
//	int i;
//
//	i = 0;
//	while (check_stack_common(head->stack_a, head->stack_b) == 0)
//	{
//		i = 0;
//		while (i < head->count_of_elements - 3)
//		{
//			ft_printf("pb\n");
//			action_pb(head);
//			if (head->stack_b->next != NULL)
//				sorting_for_b(head);
//			head->steps++;
//			i++;
//		}
//		sorting_algorithm_three(head);
//		action_pa(head);
//		if (check_stack(head->stack_a) == 0)
//
//			ft_printf("pa\n");
//		head->steps++;
//	}
//}


void		main_sorting(t_pushswap *head)
{
	while (check_stack_common(head->stack_a, head->stack_b) == 0)
	{
		get_first_second_last(head);
		if (head->first_a > head->second_a)
			action_sa(head);
		else
		{
			action_pb(head);
			if (head->stack_b->next != NULL)
				sorting_for_b(head);
		}
		sorting_algorithm_three(head);
		action_pa(head);
		head->steps++;
	}
}

void		sorting_algorithm(t_pushswap *head)
{
	if (head->count_of_elements == 1 || check_stack(head->stack_a) == 1)
		return ;
	else if (head->count_of_elements == 2)
	{
		if (head->stack_a->cell > head->stack_a->next->cell)
			action_sa(head);
	}
	else if (head->count_of_elements == 3)
		sorting_algorithm_three(head);
	else
		main_sorting(head);
}
