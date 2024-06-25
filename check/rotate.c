/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:47:13 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/25 14:48:18 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

int	rotatea(t_check *checker)
{
	int					temp;
	unsigned long int	index;

	index = 1;
	if (checker->max_a < 1)
		return (0);
	temp = checker->a[0];
	while (index < checker->max_a)
	{
		checker->a[index - 1] = checker->a[index];
		index++;
	}
	checker->a[index - 1] = temp;
	return (0);
}

int	reverserotatea(t_check *checker)
{
	int					temp;
	unsigned long int	index;

	index = checker->max_a - 1;
	if (checker->max_a < 1)
		return (0);
	temp = checker->a[index];
	while (index > 0)
	{
		checker->a[index] = checker->a[index - 1];
		index--;
	}
	checker->a[0] = temp;
	return (0);
}

int	reverserotateb(t_check *checker)
{
	int					temp;
	unsigned long int	index;

	index = checker->max_b - 1;
	if (checker->max_b < 1)
		return (0);
	temp = checker->b[index];
	while (index > 0)
	{
		checker->b[index] = checker->b[index - 1];
		index--;
	}
	checker->b[0] = temp;
	return (0);
}

int	rotateb(t_check *checker)
{
	int					temp;
	unsigned long int	index;

	index = 1;
	if (checker->max_b < 1)
		return (0);
	temp = checker->b[0];
	while (index < checker->max_b)ß
	{
		checker->b[index - 1] = checker->b[index];
		index++;
	}
	checker->b[index - 1] = temp;
	return (0);
}
