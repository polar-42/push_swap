/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:28:01 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/13 11:29:16 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	determine_chunck(t_db_list *lst, int min, int max)
{
	int		x;
	int		j;
	int		y;

	y = 0;
	if (lst->content >= min && lst->content <= max)
		return (2);
	j = get_r(lst, min, max);
	lst = db_lstlast(lst);
	x = 0;
	while (lst)
	{
		if (lst->content >= min && lst->content <= max)
		{
			y = x;
			break ;
		}
		x++;
		lst = lst->prev;
	}
	if (j < y)
		return (0);
	return (1);
}

int	is_still_chunck(t_db_list *lst, int min, int max)
{
	while (lst)
	{
		if (lst->content >= min && lst->content <= max)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	limit_chunck(t_db_list *lst, int *min, int *max)
{
	*min = 0;
	if (db_lstsize(lst) <= 100)
		*max = 19;
	else if (db_lstsize(lst) <= 400)
		*max = db_lstsize(lst) / 10;
	else
		*max = db_lstsize(lst) / 13;
}

void	pre_sort(t_db_list **lst_a, t_db_list **lst_b)
{
	int		min;
	int		max;
	int		size;
	int		i;

	limit_chunck(*lst_a, &min, &max);
	i = max;
	size = last_chunk(db_lstsize(*lst_a));
	while (*lst_a)
	{
		while (is_still_chunck(*lst_a, min, max))
		{
			if ((*lst_a)->content >= min && (*lst_a)->content <= max)
				i = (i + 0);
			else if (determine_chunck(*lst_a, min, max) == 1)
				use_ra_rra(lst_a, min, max, 0);
			else if (determine_chunck(*lst_a, min, max) == 0)
				use_ra_rra(lst_a, min, max, 1);
			ft_pb(lst_a, lst_b);
		}
		if (ft_find_lowest_num(*lst_a) >= size)
			break ;
		min = max;
		max += (i + 1);
	}
}

void	sort_last_chunk(t_db_list **lst_a, t_db_list **lst_b)
{
	int		i;
	int		size;

	size = db_lstsize(*lst_a);
	while (*lst_a || db_test_push_swap(*lst_a))
	{
		i = ft_find_lowest_num(*lst_a);
		while ((*lst_a)->content != i)
		{
			if (r_or_rr(*lst_a, i) == 1)
				while ((*lst_a)->content != i)
					ft_ra(lst_a, 1);
			else
				while ((*lst_a)->content != i)
					ft_rra(lst_a, 1);
		}
		ft_pb(lst_a, lst_b);
	}
	while (db_lstsize(*lst_a) != size)
		ft_pa(lst_a, lst_b);
}
