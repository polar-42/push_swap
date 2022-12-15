/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:47:45 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/13 11:29:46 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_r(t_db_list *lst, int min, int max)
{
	int		x;

	x = 0;
	while (lst)
	{
		if (lst->content >= min && lst->content <= max)
			break ;
		x++;
		lst = lst->next;
	}
	return (x);
}

int	last_chunk(int size)
{
	if (size <= 100)
		return (80);
	else
		return (450);
}
