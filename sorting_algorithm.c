/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/05 17:28:12 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
		if (head->first_a > head->last_a && head->second_a < head->last_a)
			action_ra(head);
		else if (head->first_a < head->second_a && head->first_a > head->last_a)
			action_rra(head);
		else
			action_sa(head);
		head->steps++;
	}
}

void		sorting_algorithm(t_pushswap *head)
{
	if (head->count_of_elements == 1 || check_stack(head->stack_a) == 1)
		return ;
	else if (head->count_of_elements <= 3)
		sorting_algorithm_three(head);
	else
	{
		if (head->count_of_elements < 400)
			from_stack_a_to_b(head);
		else
			from_stack_a_to_b_big(head);
		sorting_algorithm_three(head);
		from_b_to_a(head);
	}
}
