/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/26 20:49:59 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void		ra_or_pb(t_pushswap *head, int compared, int stop)
//{
//	int i;
//
//	i = 0;
//	while (i <= stop)
//	{
//		if (head->stack_a->cell >= compared)
//			action_ra(head);
//		else
//			action_pb(head);
//		i++;
//	}
//}
//
//void		rra_or_with_pb(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int compared;
//
//	i = 0;
//	compared = head->help_array[i_array + count / 2];
//	while (i < count)
//	{
//		action_rra(head);
//		if (head->stack_a->cell <= compared && count > 2)
//			action_pb(head);
//		i++;
//	}
//}
//
//void		return_from_end_of_stack_b(t_pushswap *head, int count, int i_array)
//{
//	int i;
//
//	i = 0;
//	while (i < count)
//	{
//
//	}
//
//}
//
//void		rb_or_pa(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int compared;
//	int compared_2;
//	int help;
//
//	i = 0;
//	compared = head->help_array[i_array + count / 2];
//	compared_2 = head->help_array[i_array + count / 4 + count / 2];
//	help = count / 4;
//	while (i < count)
//	{
//		if (head->stack_b->cell >= compared)
//		{
//			action_pa(head);
//			if (count > 4 && head->stack_a->cell <= compared_2)
//				action_ra(head);
//		}
//		else
//			action_rb(head);
//		i++;
//	}
//	if (count <= 5)
//	{
//		if (head->stack_a->cell > head->stack_a->next->cell)
//			action_sa(head);
//	}
//	if (count - count / 2 > 2)
//		rra_or_with_pb(head, count - count / 2 - count / 4, i_array);
//	else
//	{
//		return_from_end_of_stack_b(head, count, i_array);
//	}
//}
//
//void		algorithm_for_block(t_pushswap *head, int count, int i)
//{
//	if (count == 1)
//		action_pa(head);
//	else if (count == 2)
//	{
//		if (head->stack_b->cell < head->stack_b->next->cell)
//			action_sb(head);
//		action_pa(head);
//		action_pa(head);
//	}
//	else
//	{
//		rb_or_pa(head, count, i);
//		//common_print(head);
//	}
//
//
//}
//
//void 		return_from_b_to_a(t_pushswap *head)
//{
//	int		count_of_displaced;
//	int 	i_array;
//	int		compared;
//	int i = 3;
//
//	i_array = head->count_of_elements - len_of_stack(head->stack_a);
//	while (head->power_of_two > 0 && i > 0)
//	{
//		count_of_displaced = (head->count_of_elements - 1)
//				/ ft_number_in_degree(2, head->power_of_two);
//		i_array = i_array - count_of_displaced;
//		compared = head->help_array[i_array];
//		algorithm_for_block(head, count_of_displaced, i_array);
//		common_print(head);
//		head->power_of_two--;
//		i--;
//	}
//}
//
//void		from_stack_a_to_b(t_pushswap *head)
//{
//	int compared;
//	int i;
//
//	i = (head->count_of_elements - 1) / 2;
//	compared = head->help_array[i];
//	while (i <= head->count_of_elements - 3)
//	{
//		ra_or_pb(head, compared, head->count_of_elements - 1);
//		head->power_of_two++;
//		i = i + (head->count_of_elements - 1 - i) / 2;
//		compared = head->help_array[i];
//	}
//	head->power_of_two--;
//}
//
//void		main_sorting(t_pushswap *head)
//{
//	from_stack_a_to_b(head);
//	sorting_algorithm_three(head);
//	common_print(head);
//	return_from_b_to_a(head);
//
//	//common_print(head);
//}