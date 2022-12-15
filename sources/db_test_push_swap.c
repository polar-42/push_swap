/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_test_push_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:22:58 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/29 18:58:52 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	db_test_push_swap(t_db_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (0);
		if (lst->content > lst->next->content)
			return (1);
		lst = lst->next;
	}
	return (0);
}
