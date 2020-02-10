/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 20:51:47 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				fill_stack_2(t_pushswap *head, char **argv)
{
	t_stack		*help;
	int			i;

	i = 1;
	if (check_argv(argv[i]) == 0)
		return (0);
	head->stack_a = new_element(ft_atoi(argv[i]));
	head->begin_a = head->stack_a;
	while (++i <= head->count_of_elements)
	{
		if (check_argv(argv[i]) != 1)
			return (0);
		help = new_element(ft_atoi(argv[i]));
		head->stack_a->next = help;
		head->stack_a = head->stack_a->next;
	}
	head->stack_a = head->begin_a;
	return (1);
}

int				main(int argc, char **argv)
{
	t_pushswap		*head;

	if (argc > 1)
	{
		if (!(head = initialization()))
			return (0);
		head->count_of_elements = argc - 1;
		if (fill_stack_2(head, argv) == 0 || find_duplicates_and_min(head) == 0)
		{
			clean_up(head);
			free(head);
			return (0);
		}
		print_stack(head->stack_a);
		sorting_algorithm(head);
		print_stack(head->stack_a);
		clean_up(head);
	}
	return (0);
}
