/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/02 21:31:52 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		from_the_top_a(t_pushswap *head, int count, int i_array)
{
	int i;
	int i_for_compared; // потом удалить, вставить сразу в индекс массива
	int i_for_compared_2; // потом удалить, вставить сразу в индекс массива
	int compared;
	int compared_2;

	i = 0;
	i_for_compared = i_array + count - 1;
	i_for_compared_2 = i_array + count / 2 - 1;
	compared = head->help_array[i_for_compared];
	compared_2 = head->help_array[i_for_compared_2];
	while (i < count)
	{
		if (head->stack_a->cell > compared)
			action_ra(head);
		else
		{
			i++;
			action_pb(head);
			if (head->stack_b->cell <= compared_2 && count > 2)
			{
				if (head->stack_a->cell > compared)
					action_rr(head);
				else
					action_rb(head);
			}
		}
	}
}

void		from_stack_a_to_b(t_pushswap *head)
{
	int i;
	int count;
	int count_2;

	count = head->count_of_elements; // количество в стеке, который разбираем
	count_2 = nummod(count); // сколько переложить всего
	i = 0; // указатель на начало отсеченного участка
	while (count > 3)
	{
		get_block(head, i, count_2 / 2, 'D');
		get_block(head, i + count_2 / 2, nummod(count_2), 'B');
		from_the_top_a(head, count_2, i);
		i = i + count_2;
		count = count - count_2;
		count_2 = nummod(count);
		common_print(head);
	}
}

directly_to_top_a(head); // здесь расписать функции, как работает в случае если нужно напрямую переложить в вверх а из


void		from_b_to_a(t_pushswap *head)
{
	if (head->block->count <= 2)
		directly_to_top_a(head);
	//
	// если 3-4
	//
	// если больше и нужно расскладывать
	// возможно сделать в цикле, что функция работает до тех пор, пока block не равен нулю
	//
	// 1) функции, когда кладем сразу на вершину стека А из остальных точек стека: для 2, 3, 4 и возможно 5 !
	// 2) функции, когда расскладываем в несколько мест до тех пор пока не появится случай, когда в block хранится 1 - 4 числа
	//


}

void		main_sorting(t_pushswap *head)
{
	t_block *block;

	from_stack_a_to_b(head);
	sorting_algorithm_three(head);
	from_b_to_a(head);
	ft_printf("\ncount = %d\n", head->opr);
	//common_print(head);
}
