/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/05 17:38:14 by hdeckard         ###   ########.fr       */
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

int				fill_stack_argv(t_pushswap *head, char **argv)
{
	t_stack		*help;
	int			i;

	i = 1;
	if (check_argv(argv[i], '\0') != 1)
		return (0);
	if (!(head->stack_a = new_element(ft_atoi_long_long(argv[i]))))
		return (0);
	head->begin_a = head->stack_a;
	while (++i <= head->count_of_elements)
	{
		if (check_argv(argv[i], '\0') == -1)
			return (0);
		help = new_element(ft_atoi(argv[i]));
		head->stack_a->next = help;
		head->stack_a = head->stack_a->next;
	}
	head->stack_a = head->begin_a;
	return (1);
}

int				fill_stack_str(t_pushswap *head, char **argv)
{
	t_stack		*help;
	int			i;

	i = 0;
	if (check_argv(argv[1] + i, ' ') != 1)
		return (0);
	if (!(head->stack_a = new_element(
			ft_atoi_long_long(argv[1] + i))))
		return (0);
	i = i + ft_strlen_sym(argv[1], ' ') + 1;
	head->begin_a = head->stack_a;
	while (argv[1][i - 1] != '\0')
	{
		if (check_argv(argv[1] + i, ' ') == -1)
			return (0);
		help = new_element(ft_atoi(argv[1] + i));
		head->stack_a->next = help;
		head->stack_a = head->stack_a->next;
		i = i + ft_strlen_sym(argv[1] + i, ' ') + 1;
		head->count_of_elements++;
	}
	head->stack_a = head->begin_a;
	return (1);
}

int 			fill_stack(t_pushswap *head, char **argv)
{
	if (head->count_of_elements > 1 &&
	fill_stack_argv(head, argv) == 0)
		return (0);
	if (head->count_of_elements == 1 &&
	fill_stack_str(head, argv) == 0)
		return (0);
	if (find_duplicates_min_and_max(head) == 0)
		return (0);
//	if (head->program == PUSH_SWAP)
//	{
//		if (fill_array(head) == 0)
//			return (0);
//	}
	return (1);
}
