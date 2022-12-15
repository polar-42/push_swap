/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_r_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:07:11 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/13 11:36:40 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	to_ra(t_db_list **lst_a, int i)
{
	int		y;

	y = 0;
	while (y != i)
	{
		ft_ra(lst_a, 1);
		y++;
	}
}

void	to_rra(t_db_list **lst_a, int i)
{
	int		y;

	y = 0;
	while (y != i)
	{
		ft_rra(lst_a, 1);
		y++;
	}
}
