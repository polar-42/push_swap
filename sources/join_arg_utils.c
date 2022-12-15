/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_arg_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:26:09 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/13 10:58:17 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	total_char_params(char **str)
{
	int		i;
	int		s;

	i = 1;
	s = 0;
	while (str[i])
	{
		s += ft_strlen(str[i]);
		i++;
		s++;
	}
	return (s);
}

char	*cpy_all(char **str)
{
	char	*tmp;
	int		i;
	int		j;
	int		y;

	tmp = ft_calloc((total_char_params(str) + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (str[++i])
	{
		y = -1;
		while (str[i][++y])
		{
			tmp[j] = str[i][y];
			j++;
		}
		if (str[i + 1] != NULL)
		{
			tmp[j] = ' ';
			j++;
		}
	}
	return (tmp);
}

char	**join_split(char **str)
{
	char	*tmp;
	char	**s;

	tmp = cpy_all(str);
	s = ft_split(tmp, ' ');
	free(tmp);
	return (s);
}
