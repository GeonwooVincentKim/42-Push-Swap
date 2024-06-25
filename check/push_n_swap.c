/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_n_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:47:05 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/25 14:48:18 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	swapa(t_check *checker)
{
	int	temp;

	if (checker->max_a < 2)
		return (0);
	temp = checker->a[0];
	checker->a[0] = checker->a[1];
	checker->a[1] = temp;
	return (0);
}

int	swapb(t_check *checker)
{
	int	temp;

	if (checker->max_b < 2)
		return (0);
	temp = checker->b[0];
	checker->b[0] = checker->b[1];
	checker->b[1] = temp;
	return (0);
}

int	pusha(t_check *checker)
{
	long int	index;

	index = checker->max_a - 1;
	if (checker->max_b < 1)
		return (0);
	while (index >= 0)
	{
		checker->a[index + 1] = checker->a[index];
		index--;
	}
	checker->a[0] = checker->b[0];
	index = 1;
	while ((unsigned)index < checker->max_b)
	{
		checker->b[index - 1] = checker->b[index];
		index++;
	}
	checker->max_b--;
	checker->max_a++;
	return (0);
}

int	pushb(t_check *checker)
{
	long int	index;

	index = checker->max_b - 1;
	if (checker->max_a < 1)
		return (0);
	while (index >= 0)
	{
		checker->b[index + 1] = checker->b[index];
		index--;
	}
	checker->b[0] = checker->a[0];
	index = 1;
	while ((unsigned)index < checker->max_a)
	{
		checker->a[index - 1] = checker->a[index];
		index++;
	}
	checker->max_a--;
	checker->max_b++;
	return (0);
}
