/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/11 15:39:07 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		swap_numbers(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void			sort_array(int *arr, int start, int end)
{
	int compared;
	int i_end;
	int i_start;

	i_end = end;
	i_start = start;
	compared = arr[(start + end) / 2];
	while (i_start < i_end)
	{
		while (arr[i_start] < compared)
			i_start++;
		while (arr[i_end] > compared)
			i_end--;
		if (i_start < i_end)
		{
			swap_numbers(&arr[i_start], &arr[i_end]);
			i_start++;
			i_end--;
		}
	}
	if (start < i_end && !(i_end == end && i_start == end))
		sort_array(arr, start, i_end);
	if (end > i_start && !(i_end == start && i_start == start))
		sort_array(arr, i_start, end);
}

int				fill_array(t_pushswap *head)
{
	int i;

	i = 0;
	if (!(head->help_array = (int *)malloc(sizeof(int) *
			head->count_of_elements)))
		return (0);
	while (i < head->count_of_elements)
	{
		head->help_array[i] = head->stack_a->cell;
		head->stack_a = head->stack_a->next;
		i++;
	}
	head->stack_a = head->begin_a;
	return (1);
}
