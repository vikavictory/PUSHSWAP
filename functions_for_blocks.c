/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/02 17:27:59 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_block			*new_block(void)
{
	t_block	*new;

	if (!(new = (t_block *)malloc(sizeof(t_block))))
		return (NULL);
	new->next = NULL;
	return (new);
}

t_block			*add_new_block(t_block *block, t_block *new)
{
	new->next = block;
	block = new;
	return (block);
}

t_block			*remove_ont_block(t_block *block)
{
	t_block *help;

	help = block->next;
	free(block);
	block = help;
	return (block);
}

void			fill_block(t_block *block, int start, int count, char place)
{
	block->place = place;
	block->where_to = 'u';
	block->start = start;
	block->end = start + count;
	block->count = count;
}



