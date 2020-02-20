/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/19 21:31:40 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			how_to_sort(t_pushswap *head)
{
	int i;

	i = 0;
	while (head->actions[i] != '\0')
	{
		if (ft_strncmp(head->actions + i, "sa\0", 2) == 0)
			action_sa(head);
		if (ft_strncmp(head->actions + i, "sb\0", 2) == 0)
			action_sb(head);
		if (ft_strncmp(head->actions + i, "ss\0", 2) == 0)
			action_ss(head);
		if (ft_strncmp(head->actions + i, "pa\0", 2) == 0)
			action_pa(head);
		if (ft_strncmp(head->actions + i, "pb\0", 2) == 0)
			action_pb(head);
		if (ft_strncmp(head->actions + i, "ra\0", 2) == 0)
			action_ra(head);
		if (ft_strncmp(head->actions + i, "rb\0", 2) == 0)
			action_rb(head);
		if (ft_strncmp(head->actions + i, "rr\0", 2) == 0)
			action_rr(head);
		if (ft_strncmp(head->actions + i, "rra\0", 3) == 0)
			action_rra(head);
		if (ft_strncmp(head->actions + i, "rrb\0", 3) == 0)
			action_rrb(head);
		if (ft_strncmp(head->actions + i, "rrr\0", 3) == 0)
			action_rrr(head);
		while (head->actions[i] >= 'a' && head->actions[i] <= 'z')
			i++;
		i++;
	}
}
