/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_and_validation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdeckard <hdeckard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:45:12 by hdeckard          #+#    #+#             */
/*   Updated: 2020/02/19 21:16:41 by hdeckard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_flags(t_pushswap *head, char **argv)
{
	int i;

	i = head->count_of_elements;
	while (i > 0)
	{
		if (ft_strcmp(argv[i], "-vc\0") == 0 ||
			ft_strcmp(argv[i], "-cv\0") == 0)
		{
			head->c_flag = 1;
			head->v_flag = 1;
		}
		else if (ft_strcmp(argv[i], "-v\0") == 0)
			head->v_flag = 1;
		else if (ft_strcmp(argv[i], "-c\0") == 0)
			head->c_flag = 1;
		else
			break ;
		i--;
	}
	if ((head->count_of_elements = i) == 0)
		return (0);
	return (1);
}

int			check_actions_str(char *str, int i)
{
	if (ft_strncmp(str + i, "sa\0", 2) == 0 ||
	ft_strncmp(str + i, "sb\0", 2) == 0 ||
	ft_strncmp(str + i, "ss\0", 2) == 0 ||
	ft_strncmp(str + i, "pa\0", 2) == 0 ||
	ft_strncmp(str + i, "pb\0", 2) == 0 ||
	ft_strncmp(str + i, "ra\0", 2) == 0 ||
	ft_strncmp(str + i, "rb\0", 2) == 0 ||
	ft_strncmp(str + i, "rr\0", 2) == 0 ||
	ft_strncmp(str + i, "rra\0", 3) == 0 ||
	ft_strncmp(str + i, "rrb\0", 3) == 0 ||
	ft_strncmp(str + i, "rrr\0", 3) == 0)
		return (0);
	return (-1);
}

char					*reading_file()
{
	int				readed;
	char			*buff;
	char			*tmp;
	char			*tmp2;

	tmp = NULL;
	if (!(buff = (char *)malloc(sizeof(char) * (BUFFER + 1)))
		|| read(0, buff, 0) < 0)
		return (NULL);
	while ((readed = read(0, buff, BUFFER)) > 0)
	{
		buff[readed] = '\0';
		if (tmp == NULL)
			tmp = ft_strdup(buff);
		else
		{
			tmp2 = ft_strdup(tmp);
			ft_strdel(&tmp);
			tmp = ft_strjoin(tmp2, buff);
			ft_strdel(&tmp2);
		}
	}
	ft_strdel(&buff);
	return (tmp);
}


int			check_actions(t_pushswap *head)
{
	int i;

	i = 0;
	if (!(head->actions = reading_file()))
		return (0);
	while (head->actions[i] != '\0')
	{
		if (check_actions_str(head->actions, i) == -1)
			return (0);
		while (head->actions[i] >= 'a' && head->actions[i] <= 'z')
			i++;
		if (head->actions[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int			check_argv(const char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			return (-1);
		i++;
	}
	return (1);
}
