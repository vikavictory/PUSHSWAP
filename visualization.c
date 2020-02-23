/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/22 21:25:29 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <math.h>

// отрисовка
void		image_button_play(int *str)
{
	int i;
	int k;
	int znak;
	int count;

	i = 0;
	znak = 1;
	count = 0;
	while (i < BUTSIZE)
	{
		k = 0;
		while (5 + k <= count)
		{
			str[i * BUTSIZE + 5 + k] = 16777200;
			k++;
		}
		if (count == 15)
			znak = -1;
		count = count + znak;
			i++;
		}
}

void		image_button(int *str, int button)
{
	int i;
	int k;

	i = 0;
	if (button == PAUSE)
	{
		while (i < BUTSIZE)
		{
			k = 5;
			while (k <= 25)
			{
				if (k <= 11 || k >= 19)
					str[i * BUTSIZE + k] = 16777200;
				k++;
			}
			i++;
		}
	}
	if (button == PLAY)
		image_button_play(str);
}

void		background(int *str, int x, int y)
{
	int i;

	i = 0;
	while (i <= x * y)
	{
		str[i] = 0;
		i++;
	}
}

void		draw_stack_a(t_pushswap *head)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 1;
	while (head->stack_a)
	{
		while (x < head->column_width * i)
		{
			while (y < head->single_height * abs(head->stack_a->cell))
			{
				if (head->stack_a->cell < 0)
					head->data_img[WINDOW_X * (WINDOW_Y - y - 1) + x] = 255;
				else
					head->data_img[WINDOW_X * (WINDOW_Y - y - 1) + x] = 995632469995;
				y++;
			}
			y = 0;
			x++;
		}
		i++;
		head->stack_a = head->stack_a->next;
	}
}

void		draw_stack_b(t_pushswap *head)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 1;
	while (head->stack_a)
	{
		while (x < head->column_width * i)
		{
			while (y < head->single_height * abs(head->stack_a->cell))
			{
				if (head->stack_a->cell < 0)
					head->data_img[WINDOW_X * (31 + y - 1) + x] = 255;
				else
					head->data_img[WINDOW_X * (31 + y - 1) + x] = 995632469995;
				y++;
			}
			y = 0;
			x++;
		}
		i++;
		head->stack_a = head->stack_a->next;
	}
}

void		image_creation(t_pushswap *head)
{
	background(head->data_img, WINDOW_X, WINDOW_Y);
	background(head->data_img_button, 30, 30);
	draw_stack_a(head);
	draw_stack_b(head);
	image_button(head->data_img_button, head->play_pause);
	mlx_put_image_to_window(head->mlx, head->win, head->image, 0, 0);
	mlx_put_image_to_window(head->mlx, head->win, head->image_button, 0, 0);
}

int			key_press(int button, t_pushswap *head)
{
	if (button == ESC_EXIT)
	{
		mlx_destroy_image(head->mlx, head->image);
		mlx_destroy_image(head->mlx, head->image_button);
		mlx_destroy_window(head->mlx, head->win);
		clean_up(head);
		free(head);
		exit(0);
	}
	if (button == SPACE_BUTTON)
	{
		if (head->play_pause == PAUSE)
			head->play_pause = PLAY;
		else if (head->play_pause == PLAY)
			head->play_pause = PAUSE;
	}
	image_creation(head);
}

int		program_control(t_pushswap *head) // пробел и нажатие левой мышки будут работать одинаково
{
	mlx_hook(head->win, 2, 0, key_press, head);
	//mlx_hook(head->win, 4, 0, mouse_press, head);
}

void		required_values(t_pushswap *head)
{
	int stack_length;

	stack_length = (WINDOW_Y - BUTSIZE - 10) / 2;
	head->column_width = WINDOW_X / head->count_of_elements;
	head->single_height = stack_length / abs(head->max);
	if (stack_length / abs(head->min) < head->single_height)
		head->single_height = stack_length / abs(head->min);
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
	required_values(head); // прописать условия, при которых визуализация не работает!
	image_creation(head);
	program_control(head);
	mlx_loop(head->mlx);
}
