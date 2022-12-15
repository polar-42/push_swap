/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:02:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/15 15:51:48 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_zero(t_db_list *lst)
{
	while (lst)
	{
		lst->content += 2147483647;
		lst->content++;
		lst = lst->next;
	}
}

void	sort_id(t_db_list *lst)
{
	t_db_list	*tmp;
	t_db_list	*tmp2;
	int			i;
	int			j;
	int			y;

	i = 0;
	j = -2147483648;
	tmp2 = lst;
	while (i < db_lstsize(tmp2))
	{
		y = 2147483647;
		while (lst)
		{
			if (lst->content >= j && lst->content <= y)
			{
				tmp = lst;
				y = lst->content;
			}
			lst = lst->next;
		}
		tmp->content = j++;
		i++;
		lst = tmp2;
	}
}

int	push_swap(t_db_list *lst_a)
{
	sort_id(lst_a);
	get_zero(lst_a);
	if (db_test_push_swap(lst_a) != 1)
		return (0);
	else if (db_lstsize(lst_a) == 2)
		ft_sa(lst_a, 1);
	else if (db_lstsize(lst_a) == 3)
		algo3(&lst_a);
	else if (db_lstsize(lst_a) >= 4 && db_lstsize(lst_a) <= 5)
		algo5(&lst_a);
	else
		sort(&lst_a);
	return (0);
}
