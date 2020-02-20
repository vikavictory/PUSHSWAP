/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/19 17:02:50 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack			*new_element(int number)
{
	t_stack		*new;

	if (!(new = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	new->cell = number;
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
	head->stack_a = new_element(ft_atoi(argv[i]));
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
