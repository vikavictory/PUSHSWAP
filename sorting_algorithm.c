/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 20:56:26 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void		sorting_algorithm_three(t_pushswap *head)
//{
//	if ()
//
//}

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
//	if (head->count_of_elements == 3)
//		sorting_algorithm_three(head);
}