/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:02:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/30 11:39:41 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sa(t_db_list *lst, int i)
{
	int	tmp;

	if (!lst || !lst->next)
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (i == 1)
		write(1, "sa\n", 3);
}

void	ft_sb(t_db_list *lst, int i)
{
	int	tmp;

	if (!lst || !lst->next)
		return ;
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
	if (i == 1)
		write(1, "sb\n", 3);
}

void	ft_ss(t_db_list *lst_a, t_db_list *lst_b)
{
	ft_sa(lst_a, 0);
	ft_sb(lst_b, 0);
	write(1, "ss\n", 3);
}
