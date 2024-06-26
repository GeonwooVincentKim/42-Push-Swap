/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:02:14 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/26 19:12:08 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_min(t_list *stack)
{
	int		min;
	int		num;

	min = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (min > num)
			min = num;
		stack = stack->next;
	}
	return (min);
}

int	stack_max(t_list *stack)
{
	int		max;
	int		num;

	max = ft_atoi(stack->content);
	while (stack)
	{
		num = ft_atoi(stack->content);
		if (max < num)
			max = num;
		stack = stack->next;
	}
	return (max);
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}
