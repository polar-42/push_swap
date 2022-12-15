/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:51:14 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/01 16:52:06 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	algo5(t_db_list **lst_a)
{
	int			i;
	int			y;
	t_db_list	*lst_b;

	lst_b = NULL;
	if (db_lstsize(*lst_a) == 5)
		y = 5;
	else
		y = 4;
	while (y > 3)
	{
		i = ft_find_lowest(*lst_a);
		if (ft_find_lowest(*lst_a) < (db_lstsize(*lst_a) / 2))
			to_ra(lst_a, i);
		else
			to_rra(lst_a, (db_lstsize(*lst_a) - i));
		ft_pb(lst_a, &lst_b);
		y--;
	}
	algo3(lst_a);
	ft_pa(lst_a, &lst_b);
	ft_pa(lst_a, &lst_b);
}
