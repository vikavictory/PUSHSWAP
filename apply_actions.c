/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/11 16:11:55 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			how_to_sort(t_pushswap *head, char **argv)
{
	int i;

	i = head->i_action;
	while (i <= head->count_of_elements)
	{
		if (ft_strcmp(argv[i], "sa\0") == 0)
		{
			action_sa(head);
//			ft_printf("\nACTION sa\n");
//			print_stack(head->stack_a);
		}
		if (ft_strcmp(argv[i], "sb\0") == 0)
		{
			action_sa(head);
//			ft_printf("\nACTION sb\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "ss\0") == 0)
		{
			action_ss(head);
//			ft_printf("\nACTION ss\n");
//			ft_printf("\nstack_a\n");
//			print_stack(head->stack_a);
//			ft_printf("\nstack_b\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "pa\0") == 0)
		{
			action_pa(head);
//			ft_printf("\nACTION pa\n");
//			ft_printf("\nstack_a\n");
//			print_stack(head->stack_a);
//			ft_printf("\nstack_b\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "pb\0") == 0)
		{
			action_pb(head);
//			ft_printf("\nACTION pb\n");
//			ft_printf("\nstack_a\n");
//			print_stack(head->stack_a);
//			ft_printf("\nstack_b\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "ra\0") == 0)
		{
			action_ra(head);
//			ft_printf("\nACTION ra\n");
//			print_stack(head->stack_a);
		}
		if (ft_strcmp(argv[i], "rb\0") == 0)
		{
			action_rb(head);
//			ft_printf("\nACTION rb\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "rr\0") == 0)
		{
			action_rr(head);
//			ft_printf("\nACTION rr\n");
//			ft_printf("\nstack_a\n");
//			print_stack(head->stack_a);
//			ft_printf("\nstack_b\n");
//			print_stack(head->stack_b);
		}
		if (ft_strcmp(argv[i], "rra\0") == 0)
		{
			action_rra(head);
//			ft_printf("\nACTION rra\n");
//			print_stack(head->stack_a);
		}
		if (ft_strcmp(argv[i], "rrb\0") == 0)
		{
			action_rrb(head);
//			ft_printf("\nACTION rrb\n");
//			print_stack(head->stack_a);
		}
		if (ft_strcmp(argv[i], "rrr\0") == 0)
		{
			action_rrr(head);
//			ft_printf("\nACTION rrr\n");
//			ft_printf("\nstack_a\n");
//			print_stack(head->stack_a);
//			ft_printf("\nstack_b\n");
//			print_stack(head->stack_b);
		}
		i++;
	}
}
