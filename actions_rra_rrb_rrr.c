/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:09:18 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 19:44:18 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		action_rra(t_pushswap *head)
{
	t_stack		*transfer;

	while (head->stack_a->next->next)
		head->stack_a = head->stack_a->next;
	transfer = head->stack_a->next;
	head->stack_a->next = NULL;
	head->stack_a = head->begin_a;
	transfer->next = head->begin_a;
	head->begin_a = transfer;
	head->stack_a = head->begin_a;
}

void		action_rrb(t_pushswap *head)
{
	t_stack		*transfer;

	if (head->begin_b == NULL)
		return ;
	while (head->stack_b->next->next)
		head->stack_b = head->stack_b->next;
	transfer = head->stack_a->next;
	head->stack_b->next = NULL;
	head->stack_b = head->begin_b;
	transfer->next = head->begin_b;
	head->begin_b = transfer;
	head->stack_b = head->begin_b;
}

void		action_rrr(t_pushswap *head)
{
	action_rra(head);
	action_rrb(head);
}
