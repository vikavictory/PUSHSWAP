/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/11 16:30:12 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			required_values(t_pushswap *head)
{
	int stack_length;

	stack_length = WINDOW_Y - 1;
	head->single_height = 0;
	head->column_width = (WINDOW_X - 10) / head->count_of_elements;
	if (head->max != 0)
		head->single_height = stack_length / ft_abs(head->max);
	if (head->min != 0 && stack_length / abs(head->min) < head->single_height)
		head->single_height = stack_length / abs(head->min);
	if (head->single_height == 0 || head->count_of_elements > WINDOW_X - 10)
		return (0);
	return (1);
}

void				vis_initialization(t_pushswap *head)
{
	if (required_values(head) == 0)
	{
		ft_printf("The values are too large or there are too ");
		ft_printf("many elements to display them correctly.\n");
		head->v_flag = 0;
		return ;
	}
	head->mlx = mlx_init();
	head->win = mlx_new_window(head->mlx, WINDOW_X, WINDOW_Y, "PUSH SWAP");
	head->image = mlx_new_image(head->mlx, WINDOW_X, WINDOW_Y);
	head->data_img = (int *)mlx_get_data_addr(head->image, &head->bpp,
			&head->size_line, &head->endian);
	head->play_pause = PAUSE;
	image_creation(head);
	program_control(head);
	mlx_loop_hook(head->mlx, &how_to_sort_mlxlh, head);
	mlx_loop(head->mlx);
}
