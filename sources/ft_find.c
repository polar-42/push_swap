/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:00:43 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/01 16:16:01 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_find_biggest(t_db_list *lst)
{
	int	i;
	int	y;
	int	tmp;

	i = 0;
	y = 0;
	tmp = -2147483648;
	while (lst)
	{
		if (lst->content > tmp)
		{
			y += i;
			tmp = lst->content;
		}
		lst = lst->next;
		i++;
	}
	if (y == 0)
		return (y);
	return (y);
}

int	ft_find_biggest_num(t_db_list *lst)
{
	int	tmp;

	tmp = -2147483648;
	while (lst)
	{
		if (lst->content > tmp)
			tmp = lst->content;
		lst = lst->next;
	}
	return (tmp);
}

int	ft_find_lowest_num(t_db_list *lst)
{
	int	tmp;

	tmp = 2147483647;
	while (lst)
	{
		if (lst->content < tmp)
			tmp = lst->content;
		lst = lst->next;
	}
	return (tmp);
}

int	ft_find_lowest(t_db_list *lst)
{
	int	i;
	int	y;
	int	z;
	int	tmp;

	i = 0;
	y = 0;
	z = 0;
	tmp = 2147483647;
	while (lst)
	{
		if (lst->content < tmp)
		{
			y += z;
			tmp = lst->content;
			z = 0;
		}
		lst = lst->next;
		i++;
		z++;
	}
	return (y);
}
