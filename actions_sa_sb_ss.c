/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:09:18 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 19:41:59 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		action_sa(t_pushswap *head)
{
	t_stack		*transfer;
	t_stack		*transfer_next;

	head->begin_a = head->stack_a->next;
	transfer = head->stack_a;
	head->stack_a = head->stack_a->next;
	transfer_next = head->stack_a->next;
	head->stack_a->next = transfer;
	transfer->next = transfer_next;
	head->stack_a = head->begin_a;
	if (head->program == PUSH_SWAP)
		ft_printf("sa\n");
}

void		action_sb(t_pushswap *head)
{
	t_stack		*transfer;
	t_stack		*transfer_next;

	if (head->begin_b == NULL)
		return ;
	head->begin_b = head->stack_b->next;
	transfer = head->stack_b;
	head->stack_b = head->stack_b->next;
	transfer_next = head->stack_b->next;
	head->stack_b->next = transfer;
	transfer->next = transfer_next;
	head->stack_b = head->begin_b;
	if (head->program == PUSH_SWAP)
		ft_printf("sb\n");
}

void		action_ss(t_pushswap *head)
{
	action_sa(head);
	action_sb(head);
	if (head->program == PUSH_SWAP)
		ft_printf("ss\n");
}
