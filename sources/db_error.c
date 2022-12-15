/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:22:57 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/15 16:58:24 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	check_one_digit(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i])
	{
		while (str[i] == ' ' && str[i])
			i++;
		if (ft_isdigit(str[i]) == 1)
			r = 0;
		if (ft_isdigit(str[i]) == 1 && (str[i + 1] == '-' || str[i + 1] == '+'))
			return (1);
		if ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-'
				|| str[i + 1] == '+'))
			return (1);
		i++;
	}
	return (r);
}

static	int	check_check(char *str)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 1)
			r = 0;
		i++;
	}
	return (r);
}

static	int	check_int(char *str)
{
	long int	li;

	li = ft_atoi_long(str);
	if (li > 2147483647 || li < -2147483648)
		return (1);
	return (0);
}

int	check_arg(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			return (1);
		else if (check_check(argv[1]) == 1)
			return (1);
		else if (check_one_digit(argv[i]) == 1)
			return (1);
		else if (check_int(argv[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

void	db_error(t_db_list **lst)
{
	db_lstclear(lst);
	write(2, "Error\n", 6);
	exit(0);
}
