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

int				main(int argc, char **argv)
{
	t_pushswap		*head;

	if (argc > 1)
	{
		if (!(head = initialization(CHECKER, argc)))
			return (0);
		if (check_flags(head, argv) == 0 || fill_stack(head, argv) == 0
		|| check_actions(head) == 0)
		{
			clean_up(head);
			free(head);
			ft_printf("Error\n");
			return (0);
		}
		if (head->v_flag == 1)
			vis_initialization(head);
		if (head->v_flag == 0)
		{
			how_to_sort(head);
			clean_up(head);
			free(head);
		}
	}
	return (0);
}
