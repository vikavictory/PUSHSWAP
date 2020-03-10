/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/10 20:46:48 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			how_to_sort_2(t_pushswap *head, int len, int i)
{
	if (ft_strncmp(head->actions + i, "rb\0", len) == 0)
		action_rb(head);
	else if (len == 2 && ft_strncmp(head->actions + i, "rr\0", len) == 0)
		action_rr(head);
	else if (ft_strncmp(head->actions + i, "rra\0", len) == 0)
		action_rra(head);
	else if (ft_strncmp(head->actions + i, "rrb\0", len) == 0)
		action_rrb(head);
	else if (ft_strncmp(head->actions + i, "rrr\0", len) == 0)
		action_rrr(head);
}

void			how_to_sort_1(t_pushswap *head)
{
	int len;

	len = ft_strlen_sym(head->actions + head->i_str, '\n');
	if (ft_strncmp(head->actions + head->i_str, "sa\0", len) == 0)
		action_sa(head);
	else if (ft_strncmp(head->actions + head->i_str, "sb\0", len) == 0)
		action_sb(head);
	else if (ft_strncmp(head->actions + head->i_str, "ss\0", len) == 0)
		action_ss(head);
	else if (ft_strncmp(head->actions + head->i_str, "pa\0", len) == 0)
		action_pa(head);
	else if (ft_strncmp(head->actions + head->i_str, "pb\0", len) == 0)
		action_pb(head);
	else if (ft_strncmp(head->actions + head->i_str, "ra\0", len) == 0)
		action_ra(head);
	else
		how_to_sort_2(head, len, head->i_str);
}

void			how_to_sort(t_pushswap *head)
{
	while (head->actions != NULL && head->actions[head->i_str] != '\0')
	{
		how_to_sort_1(head);
		while (head->actions[head->i_str] >= 'a'
		&& head->actions[head->i_str] <= 'z')
			head->i_str++;
		head->i_str++;
	}
	check_stack_print(head->stack_a, head->stack_b);
}

int				how_to_sort_mlxlh(t_pushswap *head)
{
	if (head->actions != NULL && head->actions[head->i_str] != '\0'
		&& head->play_pause == PLAY)
	{
		how_to_sort_1(head);
		image_creation(head);
		while (head->actions[head->i_str] >= 'a'
		&& head->actions[head->i_str] <= 'z')
			head->i_str++;
		if (head->actions[head->i_str] != '\0')
			head->i_str++;
	}
	return (1);
}
