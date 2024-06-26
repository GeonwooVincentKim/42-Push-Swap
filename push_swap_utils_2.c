/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:03:41 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/26 19:42:57 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include "libft/libft.h"

static int	is_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		++i;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	if (ft_atol(str) < INT_MIN || ft_atol(str) > INT_MAX)
		return (0);
	return (1);
}

int	is_valid_details(char **strs, int i, int j)
{
	while (strs[i])
	{
		if (!is_int(strs[i]))
			return (0);
		while (strs[i][j])
		{
			if (j == 0 && \
				(strs[i][j] == '-' || strs[i][j] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
