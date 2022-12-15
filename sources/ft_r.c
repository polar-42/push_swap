/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:07:15 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/30 11:39:10 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rb(t_db_list **lst, int i)
{
	t_db_list	*tmp;

	if (!(*lst) || (*lst)->next == NULL)
		return ;
	(*lst)->next->prev = NULL;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->prev = db_lstlast(*lst);
	db_lstlast(*lst)->next = tmp;
	tmp->next = NULL;
	if (i == 1)
		write(1, "rb\n", 3);
}

void	ft_ra(t_db_list **lst, int i)
{
	t_db_list	*tmp;

	if (!(*lst) || (*lst)->next == NULL)
		return ;
	(*lst)->next->prev = NULL;
	tmp = *lst;
	*lst = (*lst)->next;
	tmp->prev = db_lstlast(*lst);
	db_lstlast(*lst)->next = tmp;
	tmp->next = NULL;
	if (i == 1)
		write(1, "ra\n", 3);
}

void	ft_rr(t_db_list **lst_a, t_db_list **lst_b)
{
	ft_rb(lst_a, 0);
	ft_ra(lst_b, 0);
	write(1, "rr\n", 3);
}
