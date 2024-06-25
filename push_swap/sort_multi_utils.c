/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_multi_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:54:43 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/25 14:54:47 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push.h"

int	biggest_b(t_check *checker)
{
	unsigned long int	i;
	int					nb;

	i = 0;
	nb = checker->b[i];
	while (i < checker->max_b)
	{
		if (checker->b[i] > nb)
			nb = checker->b[i];
		i++;
	}
	return (nb);
}

int	biggest_a(t_check *checker)
{
	unsigned long int	i;
	int					nb;

	i = 0;
	nb = checker->a[i];
	while (i < checker->max_a)
	{
		if (checker->a[i] > nb)
			nb = checker->a[i];
		i++;
	}
	return (nb);
}

int	next_front(t_check *checker, int nb)
{
	unsigned long int	i;
	int					next_nb;

	next_nb = 2147483644;
	i = 0;
	while (i < checker->max_b)
	{
		if (checker->b[i] > nb)
		{
			if (checker->b[i] < next_nb)
				next_nb = checker->b[i];
		}
		i++;
	}
	return (next_nb);
}

int	next_back(t_check *checker, int nb)
{
	unsigned long int	i;
	int					next_nb;

	next_nb = -1;
	i = 0;
	while (i < checker->max_b)
	{
		if (checker->b[i] < nb)
			if (checker->b[i] > next_nb)
				next_nb = checker->b[i];
		i++;
	}
	return (next_nb);
}

int	checkifsort(t_check *checker)
{
	unsigned long int	index;

	index = 0;
	while (index < checker->max_a - 1)
	{
		if (checker->a[index] > checker->a[index + 1])
			return (1);
		index++;
	}
	return (0);
}
