/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/03/02 21:38:50 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void		from_the_top_a(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int i_for_compared; // потом удалить, вставить сразу в индекс массива
//	int i_for_compared_2; // потом удалить, вставить сразу в индекс массива
//	int compared;
//	int compared_2;
//
//	i = 0;
//	i_for_compared = i_array + count - 1;
//	i_for_compared_2 = i_array + count / 2 - 1;
//	compared = head->help_array[i_for_compared];
//	compared_2 = head->help_array[i_for_compared_2];
//	while (i < count)
//	{
//		if (head->stack_a->cell > compared)
//			action_ra(head);
//		else
//		{
//			i++;
//			action_pb(head);
//			if (head->stack_b->cell <= compared_2 && count > 4)
//			{
//				if (head->stack_a->cell > compared)
//					action_rr(head);
//				else
//					action_rb(head);
//			}
//		}
//	}
//}
//
//void		from_stack_a_to_b(t_pushswap *head)
//{
//	int i;
//	int count;
//	int count_2;
//
//	count = head->count_of_elements; // количество в стеке, который разбираем
//	count_2 = nummod(count); // сколько переложить всего
//	i = 0; // указатель на начало отсеченного участка
//	while (count > 3)
//	{
//		from_the_top_a(head, count_2, i);
//		i = i + count_2;
//		count = count - count_2;
//		count_2 = nummod(count);
//		common_print(head);
//	}
//}
//
////void		from_a_to_b(t_pushswap *head)
////{
////	int		i;
////	int 	stop;
////
////	i = 0;
////	stop = head->help_array[head->count_of_elements - 3];
////	while (i < head->count_of_elements - 3)
////	{
////		if (head->stack_a->cell < stop)
////		{
////			action_pb(head);
////			i++;
////		}
////		else
////			action_ra(head);
////	}
////}
//
//int 		get_place_of_number(t_pushswap *head, int num)
//{
//	int i;
//	t_stack *b;
//
//	i = 1;
//	b = head->stack_b;
//	while (b->cell != num)
//	{
//		b = b->next;
//		i++;
//	}
//	return (i);
//}
//
//void		case_from_head_b(t_pushswap *head, int count)
//{
//	int i;
//
//	i = 1;
//	head->head_a = 0;
//	head->end_a = 0;
//	while (i < count)
//	{
//		if (head->stack_b->cell == head->help_array[head->i_arr - 1])
//		{
//			action_pa(head);
//			head->head_a++;
//		}
//		else
//			action_rb(head);
//		i++;
//	}
//	action_pa(head);
//	if (head->head_a > 0)
//	{
//		head->i_arr--;
//		head->count_b--;
//		if (head->stack_a->cell > head->stack_a->next->cell)
//			action_sa(head);
//	}
//}
//
//void		case_from_end_b(t_pushswap *head, int count)
//{
//	int i;
//
//	i = 0;
//	head->head_a = 0;
//	head->end_a = 0;
//	while (i < count + 1)
//	{
//		action_rrb(head);
//		if (head->stack_b->cell == head->help_array[head->i_arr - 1])
//		{
//			action_pa(head);
//			head->head_a++;
//		}
//		i++;
//	}
//	action_pa(head);
//	if (head->head_a > 0)
//	{
//		head->i_arr--;
//		head->count_b--;
//		if (head->stack_a->cell > head->stack_a->next->cell)
//			action_sa(head);
//	}
//}
//
//void		from_b_to_a(t_pushswap *head)
//{
//	int		num;
//	int 	i;
//
//	head->i_arr = head->count_of_elements - len_of_stack(head->stack_a) - 1;
//	head->count_b = head->count_of_elements - len_of_stack(head->stack_a);
//	while (head->i_arr > 0)
//	{
//		num = head->help_array[head->i_arr];
//		i = get_place_of_number(head, num);
//		if (i <= head->count_b / 2)
//			case_from_head_b(head, i);
//		else
//			case_from_end_b(head, head->count_b - i);
//		head->i_arr--;
//		head->count_b--;
//		//common_print(head);
//	}
//	if (head->i_arr == 0)
//		action_pa(head);
//}
//
//
//void		main_sorting(t_pushswap *head)
//{
//	//from_a_to_b(head);
//	from_stack_a_to_b(head); // при 20 числах снизилось с 86 до 72 команд по сравнению с использованием функции выше
//	sorting_algorithm_three(head);
//	from_b_to_a(head);
//	ft_printf("\ncount = %d\n", head->opr);
//	common_print(head);
//}