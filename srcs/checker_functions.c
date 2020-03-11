/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:19:17 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/11 15:39:07 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_stack(t_stack *stack)
{
	int			i;
	t_stack		*help;

	help = stack;
	i = help->cell;
	while (help->next)
	{
		if (i > help->next->cell)
			return (0);
		i = help->next->cell;
		help = help->next;
	}
	return (1);
}

int			check_stack_common(t_stack *a, t_stack *b)
{
	if (check_stack(a) == 1 && b == NULL)
		return (1);
	return (0);
}

void		check_stack_print(t_stack *a, t_stack *b)
{
	if (check_stack_common(a, b) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}
