/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:19:17 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/10 20:11:46 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			clean_up(t_pushswap *head)
{
	t_stack *help;

	while (head->begin_a)
	{
		help = head->begin_a->next;
		free(head->begin_a);
		head->begin_a = help;
	}
	if (head->begin_b != NULL)
	{
		while (head->begin_b)
		{
			help = head->begin_b->next;
			free(head->begin_b);
			head->begin_b = help;
		}
	}
}

void			print_stack(t_stack *stack)
{
	int			i;
	t_stack		*help;

	i = 0;
	help = stack;
	while (help)
	{
		ft_printf("%i = %i\n", i, help->cell);
		help = help->next;
		i++;
	}
}

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

t_pushswap		*initialization(void)
{
	t_pushswap		*head;

	if (!(head = (t_pushswap *)malloc(sizeof(t_pushswap))))
		return (NULL);
	head->begin_a = NULL;
	head->stack_a = NULL;
	head->stack_b = NULL;
	head->begin_b = NULL;
	return (head);
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
		print_stack(head->stack_a);
		how_to_sort(head, argv);
		check_stack(head->stack_a);
		clean_up(head);
	}
	return (0);
}
