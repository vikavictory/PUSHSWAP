/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:24:15 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/06 17:38:31 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

//void			print_array(int *a, int len)
//{
//	int i = 0;
//
//	while (i < len)
//	{
//		ft_printf("%d = %d\n" , i, a[i]);
//		i++;
//	}
//}
//
//int 			check_argv(const char *str)
//{
//	int i;
//
//	i = 0;
//	while (str[i] != '\0')
//	{
//		if (str[i] > '9' || str[i] < '0')
//			return (-1);
//		i++;
//	}
//	return (1);
//}
//
//int 			check_flags(t_pushswap *head, int argc, char **argv)
//{
//	int i;
//
//	i = 1;
//	while (i < argc - 2)
//	{
//		if (ft_strcmp(argv[argc - i], "-vc\0") == 0 ||
//		ft_strcmp(argv[argc - i], "-cv\0") == 0)
//		{
//			head->c_flag = 1;
//			head->v_flag = 1;
//		}
//		else if (ft_strcmp(argv[argc - i], "-v\0") == 0)
//			head->v_flag = 1;
//		else if (ft_strcmp(argv[argc - i], "-c\0") == 0)
//			head->c_flag = 1;
//		else
//			break;
//		i++;
//	}
//	if ((head->count_of_elements = argc - 1 - i + 1) < 2)
//		return (-1);
//	return (1);
//}
//
//
//int				fill_array(t_pushswap *head, int argc, char **argv)
//{
//	int 	i;
//	int 	a[head->count_of_elements];
//
//	i = 0;
//	while (i < head->count_of_elements)
//	{
//		if (check_argv(argv[i + 1]) == -1)
//			return (-1);
//		a[i] = ft_atoi(argv[i + 1]);
//		i++;
//	}
//	head->a = a;
//	return (1);
//}
//
//int				main(int argc, char **argv)
//{
//	t_pushswap		*head;
//
//	if (argc > 1) // что делать с одним значением??
//	{
//		if (argc > 2)
//			{
//				if (!(head = (t_pushswap *)malloc(sizeof(t_pushswap))))
//					return (0);
//				if (check_flags(head, argc, argv) == -1)
//				{
//					free(head);
//					return (0);
//				}
//				if (fill_array(head, argc, argv) == -1)
//				{
//					free(head);
//					ft_printf("invalid\n");
//					return (0);
//				}
//				print_array(head->a, head->count_of_elements);
//				//print_stack(head->stack_a, argc);
//			}
//	}
//	return (0);
//}
