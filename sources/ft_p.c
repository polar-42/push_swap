/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:55:49 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/30 10:38:03 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_db_list **lst_a, t_db_list **lst_b)
{
	t_db_list	*tmp;

	if (!(*lst_b))
		return ;
	tmp = *lst_b;
	*lst_b = (*lst_b)->next;
	if (*lst_b != NULL)
		(*lst_b)->prev = NULL;
	if (!(*lst_a))
	{
		*lst_a = tmp;
		(*lst_a)->next = NULL;
		(*lst_a)->prev = NULL;
	}
	else
		db_lstadd_front(lst_a, tmp);
	write(1, "pa\n", 3);
}

void	ft_pb(t_db_list **lst_a, t_db_list **lst_b)
{
	t_db_list	*tmp;

	if (!(*lst_a))
		return ;
	tmp = *lst_a;
	*lst_a = (*lst_a)->next;
	if ((*lst_a) != NULL)
		(*lst_a)->prev = NULL;
	if (!(*lst_b))
	{
		*lst_b = tmp;
		(*lst_b)->next = NULL;
		(*lst_b)->prev = NULL;
	}
	else
		db_lstadd_front(lst_b, tmp);
	write(1, "pb\n", 3);
}
