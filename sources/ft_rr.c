/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:12:37 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/30 11:38:24 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(t_db_list **lst, int i)
{
	t_db_list	*tmp;

	if (!(*lst) || (*lst)->next == NULL)
		return ;
	tmp = db_lstlast(*lst);
	(*lst)->prev = db_lstlast(*lst);
	db_lstlast(*lst)->prev->next = NULL;
	tmp->next = *lst;
	tmp->prev = NULL;
	*lst = tmp;
	if (i == 1)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_db_list **lst, int i)
{
	t_db_list	*tmp;

	if (!(*lst) || (*lst)->next == NULL)
		return ;
	tmp = db_lstlast(*lst);
	(*lst)->prev = db_lstlast(*lst);
	db_lstlast(*lst)->prev->next = NULL;
	tmp->next = *lst;
	tmp->prev = NULL;
	*lst = tmp;
	if (i == 1)
		write(1, "rrb\n", 4);
}

void	ft_rrr(t_db_list **lst_a, t_db_list **lst_b)
{
	ft_rra(lst_a, 0);
	ft_rrb(lst_b, 0);
	write(1, "rrr\n", 4);
}
