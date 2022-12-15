/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:44:11 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/01 16:51:57 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo3(t_db_list **lst_a)
{
	int		i;
	int		j;
	int		y;

	i = (*lst_a)->content;
	j = (*lst_a)->next->content;
	y = (*lst_a)->next->next->content;
	if (i > j && i < y && y > i && y > j)
		ft_sa(*lst_a, 1);
	else if (i > j && j < y && i > y)
		ft_ra(lst_a, 1);
	else if (i < j && j > y && j > i && i > y)
		ft_rra(lst_a, 1);
	else if (i > j && j > y)
	{
		ft_sa(*lst_a, 1);
		ft_rra(lst_a, 1);
	}
	else if (i < j && i < y && j > i && j > y)
	{
		ft_rra(lst_a, 1);
		ft_sa(*lst_a, 1);
	}
}
