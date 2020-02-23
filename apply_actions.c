/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/22 21:14:38 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			how_to_sort_2(t_pushswap *head, int len, int i)
{
	if (ft_strncmp(head->actions + i, "rb\0", len) == 0)
		action_rb(head);
	else if (ft_strncmp(head->actions + i, "rr\0", len) == 0)
		action_rr(head);
	else if (ft_strncmp(head->actions + i, "rra\0", len) == 0)
		action_rra(head);
	else if (ft_strncmp(head->actions + i, "rrb\0", len) == 0)
		action_rrb(head);
	else if (ft_strncmp(head->actions + i, "rrr\0", len) == 0)
		action_rrr(head);
}

void			how_to_sort(t_pushswap *head)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen_sym(head->actions + i, '\n');
	while (head->actions != NULL && head->actions[i] != '\0')
	{
		if (ft_strncmp(head->actions + i, "sa\0", len) == 0)
			action_sa(head);
		else if (ft_strncmp(head->actions + i, "sb\0", len) == 0)
			action_sb(head);
		else if (ft_strncmp(head->actions + i, "ss\0", len) == 0)
			action_ss(head);
		else if (ft_strncmp(head->actions + i, "pa\0", len) == 0)
			action_pa(head);
		else if (ft_strncmp(head->actions + i, "pb\0", len) == 0)
			action_pb(head);
		else if (ft_strncmp(head->actions + i, "ra\0", len) == 0)
			action_ra(head);
		else
			how_to_sort_2(head, len, i);
		while (head->actions[i] >= 'a' && head->actions[i] <= 'z')
			i++;
		i++;
	}
}
