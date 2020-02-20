/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/20 18:08:37 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		backgraund(int *str, int x, int y)
{
	int i;

	i = 0;
	while (i <= x * y)
	{
		str[i] = 0;
		i++;
	}
}

int		program_control(int button, int x, int y, t_pushswap *head)
{




}

void		image_button(int *str, int button)
{
	int i;

	i = 0;
	if (button == PAUSE)
	{
		i = 0;
		while (i < BUTSIZE)
		{
			str[i * BUTSIZE + ]

			i++;
		}

	}
	while (i < 400)
	{
		if ()
		i++;
	}
}

void		image_creation(t_pushswap *head)
{
	backgraund(head->data_img, WINDOW_X, WINDOW_Y);
	backgraund(head->data_img_button, 30, 30);

}

void		vis_initialization(t_pushswap *head)
{
	head->mlx = mlx_init();
	head->win = mlx_new_window(head->mlx, WINDOW_X, WINDOW_Y, "PUSH SWAP");
	head->image = mlx_new_image(head->mlx, WINDOW_X, WINDOW_Y);
	head->image_button = mlx_new_image(head->mlx, BUTSIZE, BUTSIZE);
	head->data_img = (int *)mlx_get_data_addr(head->image, &head->bpp,
			&head->size_line, &head->endian);
	head->data_img_button = (int *)mlx_get_data_addr(head->image_button,
			&head->bpp, &head->size_line, &head->endian);
	head->play_pause = PAUSE;
	image_creation(head);

	backgraund(head->data_img, WINDOW_X, WINDOW_Y);
	backgraund(head->data_img_button, BUTSIZE, BUTSIZE);

	mlx_hook(head->win, 4, 0, program_control, head);
}
