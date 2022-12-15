/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:20:44 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/13 11:31:23 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_num_r(t_db_list *lst, int num)
{
	int		actions;

	actions = 0;
	while (lst)
	{
		if (lst->content == num)
			break ;
		actions++;
		lst = lst->next;
	}
	return (actions);
}

int	r_or_rr(t_db_list *lst, int num)
{
	int		num_r;
	int		num_rr;
	int		actions;

	actions = 0;
	if (lst->content == num)
		return (5);
	num_r = get_num_r(lst, num);
	lst = db_lstlast(lst);
	actions = 0;
	while (lst)
	{
		if (lst->content == num)
			break ;
		actions++;
		lst = lst->prev;
	}
	num_rr = actions;
	if (num_r < num_rr)
		return (1);
	return (0);
}

void	use_ra_rra(t_db_list **lst, int min, int max, int i)
{
	if (i == 0)
	{
		while ((*lst)->content < min || (*lst)->content > max)
			ft_rra(lst, 1);
	}
	else
	{
		while ((*lst)->content < min || (*lst)->content > max)
			ft_ra(lst, 1);
	}
}

void	sort_to_b(t_db_list **lst_a, t_db_list **lst_b)
{
	while (*lst_b)
	{
		if (r_or_rr(*lst_b, (db_lstsize(*lst_b) - 1)) == 1)
			while ((*lst_b)->content != ft_find_biggest_num(*lst_b))
				ft_rb(lst_b, 1);
		else
			while ((*lst_b)->content != ft_find_biggest_num(*lst_b))
				ft_rrb(lst_b, 1);
		ft_pa(lst_a, lst_b);
	}
}

void	sort(t_db_list **lst_a)
{
	t_db_list	*lst_b;

	lst_b = NULL;
	pre_sort(lst_a, &lst_b);
	sort_last_chunk(lst_a, &lst_b);
	sort_to_b(lst_a, &lst_b);
}
