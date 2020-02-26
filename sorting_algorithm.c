/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/26 15:50:06 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		get_first_second_last(t_pushswap *head)
{
	t_stack *help;

	help = head->stack_a;
	head->first_a = help->cell;
	head->second_a = help->next->cell;
	while(help->next)
		help = help->next;
	head->last_a = help->cell;
}

void		common_print(t_pushswap *head)
{
	print_stack(head->stack_a);
	ft_printf("\n");
	print_stack(head->stack_b);
	ft_printf("\n");
}

void		sorting_algorithm_three(t_pushswap *head)
{
	while (check_stack(head->stack_a) == 0)
	{
		get_first_second_last(head);
		if (head->first_a > head->last_a && head->second_a < head->last_a)
			action_ra(head);
		else if (head->first_a < head->second_a && head->first_a > head->last_a)
			action_rra(head);
		else
			action_sa(head);
		head->steps++;
	}
}
//*****//

void		apply_array(t_pushswap *head, int compared, int a)
{
	int i;

	i = 0;
	head->i_array = a;
	while(i < head->count_of_elements)
	{
		if (head->stack_a->cell >= compared)
			action_ra(head);
		else
			action_pb(head);
		i++;
	}
}

void		apply_array_2(t_pushswap *head, int compared, int count)
{
	int i;

	i = 0;
	while(i < count)
	{
		if (head->stack_b->cell >= compared)
			action_pa(head);
		else
		{
			action_rb(head);
			head->back_b++;
		}
		i++;
	}
	if (head->stack_b->cell < head->stack_b->next->cell)
		action_sb(head);
}

void 		return_from_back_b(t_pushswap *head)
{
	int i;
	int back;

	i = 0;
	back = head->back_b;
	while (i < back)
	{
		action_rrb(head);
		i++;
	}
}

void 		return_from_b_to_a(t_pushswap *head)
{
	int i;
	int back;

	i = 0;
	back = head->back_b;
	while (i < back)
	{
		action_pa(head);
		i++;
	}
	if (head->stack_b->cell < head->stack_b->next->cell)
		action_sb(head);
}


void		what_to_do(t_pushswap *head)
{
	int i;
	int count;
	int	com;

	if (head->count_of_displaced == 1)
		action_pa(head);
	if (head->count_of_displaced == 2)
	{
		if (head->stack_b->cell < head->stack_b->next->cell)
			action_sb(head);
		action_pa(head);
		action_pa(head);
	}
	if (head->count_of_displaced == 4)
	{
		count = head->count_of_displaced;
		i = head->i_array + head->count_of_displaced;
		while (count > 3)
		{
			com = head->help_array[(i + head->i_array) / 2];
			apply_array_2(head, com, head->count_of_displaced);
			count = 2;
			return_from_back_b(head);
			return_from_b_to_a(head);
		}
		//common_print(head);
	}
}

void		return_to_stack_a(t_pushswap *head)
{
	int i;

	i = 0;
	while (i < 3)
	{
		head->power_of_two--;
		head->count_of_displaced = (head->count_of_elements - 1)
				/ ft_number_in_degree(2, head->power_of_two);
		head->i_array = head->i_array - head->count_of_displaced;
		what_to_do(head);
		i++;
	}

}

void		main_sorting(t_pushswap *head)
{
	int compared;
	int i;

	head->i_array =
	i = (head->count_of_elements - 1) / 2;
	compared = head->help_array[i];
	while (i <= head->count_of_elements - 3)
	{
		apply_array(head, compared, i);
		//common_print(head);
		head->power_of_two++;
		i = i + (head->count_of_elements - 1 - i) / 2;
		compared = head->help_array[i];
	}
	sorting_algorithm_three(head);

	//common_print(head);

	return_to_stack_a(head);

	common_print(head);

}

//*****//

void		sorting_algorithm(t_pushswap *head)
{
	if (head->count_of_elements == 1 || check_stack(head->stack_a) == 1)
		return ;
	else if (head->count_of_elements <= 3)
		sorting_algorithm_three(head);
	else
		main_sorting(head);
}
