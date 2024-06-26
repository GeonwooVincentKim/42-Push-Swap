/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:17:50 by hbaddrul          #+#    #+#             */
/*   Updated: 2024/06/26 15:43:50 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

static void	ps_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
}

int	main(int argc, char **argv)
{
	int		len;
	char	**strs;
	t_list	*stack;

	if (argc > 1)
	{
		strs = 0;
		len = split_argv(&strs, argv + 1, " ");
		if (!len || !is_valid(strs))
		{
			ps_free(strs);
			ft_putendl_fd("Error", 2);
			return (1);
		}
		stack = 0;
		while (len--)
			ft_lstadd_front(&stack, ft_lstnew(strs[len]));
		if (!is_sorted(stack))
			sort(&stack);
		ft_lstclear(&stack, free);
		free(strs);
	}
	return (0);
}
