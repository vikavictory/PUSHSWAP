//
// Created by Harper Deckard on 28/02/2020.
//

#include "push_swap.h"

//void		from_the_top_a(t_pushswap *head, int count, int i_array) // скопировать в файл сорт_3
//{
//	int i;
//	int compared;
//	int compared_2;
//
//	i = 0;
//	compared = head->help_array[i_array];
//	compared_2 = head->help_array[i_array - count / 4];
//	while (i < count)
//	{
//		if (head->stack_a->cell >= compared)
//			action_ra(head);
//		else
//		{
//			action_pb(head);
//			if (head->stack_b->cell < compared_2 && count > 5)
//				action_rb(head);
//		}
//		i++;
//	}
//}
//
//void		from_the_top_of_b(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int compared;
//	int compared_2;
//
//	i = 0;
//	compared = head->help_array[i_array];
//	compared_2 = head->help_array[i_array + count / 2];
//	while (i < count && head->stack_b)
//	{
//		if (head->stack_b->cell >= compared || count <= 4)
//		{
//			action_pa(head);
//			if (head->stack_a->cell < compared_2 && count > 2)
//				action_ra(head);
//		}
//		else
//			action_rb(head);
//		i++;
//	}
//	common_print(head);
//	if (count <= 6 && head->stack_a->cell > head->stack_a->next->cell)
//		action_sa(head);
//	if (count <= 6 && count > 2)
//	{
//		from_the_end_of_a(head, count / 4, i_array);
//		common_print(head);
//	}
//	if (count > 4)
//		from_the_end_of_b(head, count / 4, i_array);
////	else if
////	{
////
////	}
//}
//
//void		from_the_end_of_a(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int compared;
//	int compared_2;
//
//	i = 0;
//	compared = head->help_array[i_array];
//	compared_2 = head->help_array[i_array + count / 4];
//	while (i < count)
//	{
//		action_rra(head);
//		if (head->stack_a->cell < compared && count > 2)
//		{
//			action_pb(head);
//			if (head->stack_a->cell < compared_2 && count > 4)
//				action_rb(head);
//		}
//		i++;
//	}
//	if (count == 2 && head->stack_a->cell > head->stack_a->next->cell)
//		action_sa(head);
//}
//
//void		from_the_end_of_b(t_pushswap *head, int count, int i_array)
//{
//	int i;
//	int compared;
//	int compared_2;
//
//	i = 0;
//	compared = head->help_array[i_array];
//	compared_2 = head->help_array[i_array + count / 4];
//	if (count == 1)
//	{
//		action_rra(head);
//		action_pa(head);
//		return ;
//	}
//	while (i < count)
//	{
//		action_rrb(head);
//		if (head->stack_a->cell >= compared || count <= 2)
//		{
//			action_pa(head);
//			if (head->stack_a->cell < compared_2 && count > 2)
//				action_ra(head);
//		}
//		i++;
//	}
//	if (count <= 4 && head->stack_a->cell > head->stack_a->next->cell)
//		action_sa(head);
//	if (count <= 4 && head->stack_b->cell < head->stack_b->next->cell)
//		action_sb(head);
//}
//
//void		from_stack_a_to_b(t_pushswap *head)
//{
//	int i;
//	int count;
//
//	i = head->count_of_elements / 2;
//	count = head->count_of_elements;
//	while (count > 3)
//	{
//		from_the_top_a(head, count, i);
//		head->power_of_two++;
//		i = i + (head->count_of_elements - i) / 2;
//		count = count / 2 + count % 2;
//		common_print(head);
//	}
//	head->power_of_two--;
//}
//
//void		return_to_stack_a(t_pushswap *head)
//{
//	int		i_array;
//	int		count_of_displaced;
//	int 	ost;
//
//	int 	i = 0;
//
//	i_array = head->count_of_elements - len_of_stack(head->stack_a);
//	while (head->power_of_two > 0)
//	{
//		count_of_displaced = head->count_of_elements /
//							 ft_number_in_degree(2, head->power_of_two);
//		ost = count_of_displaced % 2;
//		i_array = i_array - count_of_displaced;
//		if (count_of_displaced > 2 && head->power_of_two > 1)
//		{
//			from_the_top_of_b(head, count_of_displaced / 2, i_array + count_of_displaced / 2);
//			from_the_end_of_b(head, count_of_displaced / 2 + ost, i_array);
//		}
//		else if (count_of_displaced > 2 && head->power_of_two == 1)
//		{
//			from_the_top_of_b(head, count_of_displaced / 2, i_array + count_of_displaced / 2 + count_of_displaced / 2 / 4);
//			from_the_top_of_b(head, count_of_displaced / 2 + ost, i_array + count_of_displaced / 4 + ost);
//		}
//		else
//			from_the_top_of_b(head, count_of_displaced, i_array);
//		common_print(head);
//		head->power_of_two--;
//		i++;
//	}
//}

//void		main_sorting(t_pushswap *head)
//{
//	from_stack_a_to_b(head);
//	common_print(head);
//	sorting_algorithm_three(head);
//	common_print(head);
//	return_to_stack_a(head);
//	//common_print(head);
//}