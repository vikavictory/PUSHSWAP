/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/11 17:25:22 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sorting_algorithm_three(t_pushswap *head)
{
	int a;
	int b;
	int c;

	a = head->stack_a->cell;
	b = head->stack_a->next->cell;
	c = head->stack_a->next->next->cell;
	if (a < b && b < c)
		return ;
	else if (a > b && b > c)
	{
		ft_printf("sa\n");
		ft_printf("rra\n");
	}
	else if (a < b && a > c)
		ft_printf("rra\n");
	else if (a < b && b > c)
	{
		ft_printf("rra\n");
		ft_printf("sa\n");
	}
	else if (a > b && a > c)
		ft_printf("ra\n");
	else if (a > b && a < c)
		ft_printf("sa\n");
}

void		sorting_algorithm(t_pushswap *head)
{
	if (head->count_of_elements == 1)
		return ;
	if (head->count_of_elements == 2)
	{
		if (head->stack_a->cell > head->stack_a->next->cell)
		{
			ft_printf("sa\n");
			action_sa(head);
		}
	}
	if (head->count_of_elements == 3)
		sorting_algorithm_three(head);
}