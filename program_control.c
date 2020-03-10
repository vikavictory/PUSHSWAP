/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/10 20:45:19 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			key_press(int button, t_pushswap *head)
{
	if (button == ESC_EXIT)
	{
		mlx_destroy_image(head->mlx, head->image);
		mlx_destroy_window(head->mlx, head->win);
		common_print(head);
		clean_up(head);
		free(head);
		exit(0);
	}
	if (button == SPACE_BUTTON)
	{
		if (head->play_pause == PLAY)
			head->play_pause = PAUSE;
		else if (head->play_pause == PAUSE)
			head->play_pause = PLAY;
	}
	return (1);
}

int					program_control(t_pushswap *head)
{
	mlx_hook(head->win, 2, 0, key_press, head);
	return (1);
}
