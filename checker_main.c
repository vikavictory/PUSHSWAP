/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:19:17 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/11 16:31:30 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			check_stack(t_stack *stack)
{
	int			i;
	t_stack		*help;

	help = stack;
	i = help->cell;
	while (help->next)
	{
		if (i > help->next->cell)
		{
			ft_printf("KO\n");
			return ;
		}
		i = help->next->cell;
		help = help->next;
	}
	ft_printf("OK\n");
}

int				main(int argc, char **argv)
{
	t_pushswap		*head;

	if (argc > 1)
	{
		if (!(head = initialization()))
			return (0);
		check_flags(head, argc, argv);
		if (fill_stack(head, argv) == 0 || find_duplicates_and_min(head) == 0)
		{
			clean_up(head);
			free(head);
			return (0);
		}
		//print_stack(head->stack_a);
		how_to_sort(head, argv);
		check_stack(head->stack_a);
		//print_stack(head->stack_a);
		clean_up(head);
	}
	return (0);
}
