/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/11 16:26:43 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_flags(t_pushswap *head, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 2)
	{
		if (ft_strcmp(argv[argc - i], "-vc\0") == 0 ||
			ft_strcmp(argv[argc - i], "-cv\0") == 0)
		{
			head->c_flag = 1;
			head->v_flag = 1;
		}
		else if (ft_strcmp(argv[argc - i], "-v\0") == 0)
			head->v_flag = 1;
		else if (ft_strcmp(argv[argc - i], "-c\0") == 0)
			head->c_flag = 1;
		else
			break ;
		i++;
	}
	if ((head->count_of_elements = argc - 1 - i + 1) < 2)
		return (-1);
	return (1);
}

int			check_actions(char *str)
{
	if (ft_strcmp(str, "sa\0") == 0 || ft_strcmp(str, "sb\0") == 0 ||
		ft_strcmp(str, "ss\0") == 0 || ft_strcmp(str, "pa\0") == 0 ||
		ft_strcmp(str, "pb\0") == 0 || ft_strcmp(str, "ra\0") == 0 ||
		ft_strcmp(str, "rb\0") == 0 || ft_strcmp(str, "rr\0") == 0 ||
		ft_strcmp(str, "rra\0") == 0 || ft_strcmp(str, "rrb\0") == 0 ||
		ft_strcmp(str, "rrr\0") == 0)
		return (0);
	return (1);
}

int			check_argv(const char *str)
{
	int i;

	i = 0;
	if (check_actions(str) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		i++;
	}
	return (1);
}

int			check_actions_all(t_pushswap *head, char **argv)
{
	int		i;

	i = head->i_action;
	while (i <= head->count_of_elements)
	{
		if (check_actions(argv[i]) != 0)
			return (-1);
		i++;
	}
	return (0);
}
