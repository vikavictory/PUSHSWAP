/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:09:18 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/01 14:07:54 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		action_ra(t_pushswap *head)
{
	t_stack		*transfer;

	if (head->begin_a == NULL || head->begin_a->next == NULL)
		return ;
	head->begin_a = head->stack_a->next;
	transfer = head->stack_a;
	while (head->stack_a->next)
		head->stack_a = head->stack_a->next;
	transfer->next = NULL;
	head->stack_a->next = transfer;
	head->stack_a = head->begin_a;
	head->opr++;
	if (head->program == PUSH_SWAP)
		ft_printf("ra\n");
}

void		action_rb(t_pushswap *head)
{
	t_stack		*transfer;

	if (head->begin_b == NULL || head->begin_b->next == NULL)
		return ;
	head->begin_b = head->stack_b->next;
	transfer = head->stack_b;
	while (head->stack_b->next)
		head->stack_b = head->stack_b->next;
	transfer->next = NULL;
	head->stack_b->next = transfer;
	head->stack_b = head->begin_b;
	head->opr++;
	if (head->program == PUSH_SWAP)
		ft_printf("rb\n");
}

void		action_rr(t_pushswap *head)
{
	action_rb(head);
	head->opr--;
	action_ra(head);
	if (head->program == PUSH_SWAP)
		ft_printf("rr\n");
}
