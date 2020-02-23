/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/22 21:02:47 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack			*new_element(long long number)
{
	t_stack		*new;

	if (number < -2147483648 || number > 2147483647)
		return (NULL);
	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	new->cell = (int)number;
	new->next = NULL;
	return (new);
}

int				fill_stack(t_pushswap *head, char **argv)
{
	t_stack		*help;
	int			i;

	i = 1;
	if (check_argv(argv[i]) != 1)
		return (0);
	if (!(head->stack_a = new_element(ft_atoi_long_long(argv[i]))))
	{
		head->begin_a = head->stack_a;
		return (0);
	}
	head->begin_a = head->stack_a;
	while (++i <= head->count_of_elements)
	{
		if (check_argv(argv[i]) == -1)
			return (0);
		help = new_element(ft_atoi(argv[i]));
		head->stack_a->next = help;
		head->stack_a = head->stack_a->next;
	}
	head->stack_a = head->begin_a;
	if (find_duplicates_min_and_max(head) == 0)
		return (0);
	return (1);
}

int				fill_stack_2(t_pushswap *head, char **argv)
{
	t_stack		*help;
	int			i;

	i = 1;
	if (check_argv(argv[i]) == 0)
		return (0);
	head->stack_a = new_element(ft_atoi(argv[i]));
	head->help_array[i - 1] = ft_atoi(argv[i]);
	head->begin_a = head->stack_a;
	while (++i <= head->count_of_elements)
	{
		if (check_argv(argv[i]) != 1)
			return (0);
		help = new_element(ft_atoi(argv[i]));
		head->help_array[i - 1] = ft_atoi(argv[i]);
		head->stack_a->next = help;
		head->stack_a = head->stack_a->next;
	}
	head->stack_a = head->begin_a;
	return (1);
}
