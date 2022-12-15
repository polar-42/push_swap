/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:44:08 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/10/31 14:54:18 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long int	ft_atoi_long(const char *str)
{
	long int	i;
	long int	y;
	long int	s;

	i = 0;
	s = 0;
	y = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		y *= -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		s = (s * 10) + (str[i] - '0');
		i++;
	}
	return (s * y);
}
