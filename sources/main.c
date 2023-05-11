/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg  <fle-tolg@student.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:02:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2023/05/11 14:52:15 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_str(char *str)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != ' ' && str[i] != '-'
			&& str[i] != '+')
		{
			return (1);
		}
		if (ft_isdigit(str[i]) == 1)
			y = 0;
		i++;
	}
	return (y);
}

int	check_double(t_db_list *lst, int i)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->content == i)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	check_params(char *str, t_db_list *lst)
{
	long int	y;

	if (check_str(str) == 1)
		return (1);
	y = ft_atoi_long(str);
	if (y < -2147483648 || y > 2147483647)
		return (1);
	if (check_double(lst, y) == 1)
		return (1);
	return (0);
}

t_db_list	*splitted_arg(char **argv, int argc, int num)
{
	t_db_list	*lst;
	t_db_list	*new;

	lst = NULL;
	while (num < argc)
	{
		if (check_params(argv[num], lst) != 0 || ft_strlen(argv[num]) > 60)
		{
			free_split(argv);
			db_error(&lst);
		}
		new = db_lstnew(ft_atoi(argv[num]));
		if (!new)
		{
			free_split(argv);
			db_error(&lst);
		}
		if (!lst)
			lst = new;
		else
			db_lstadd_back(&lst, new);
		num++;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	int			i;
	char		**splitted;
	t_db_list	*lst;

	if (argc <= 1)
		return (1);
	if (check_arg(argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	splitted = join_split(argv);
	i = ft_count_arg(splitted);
	lst = splitted_arg(splitted, i, 0);
	free_split(splitted);
	if (lst)
		push_swap(lst);
	db_lstclear(&lst);
	return (0);
}
