/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:02:05 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/26 19:44:58 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define BUFFER_SIZE 5

# include "libft/libft.h"

/* push_swap_utils.c */
int		split_argv(char ***strs, char **argv, char *sep);
int		is_valid(char **strs);
int		is_sorted(t_list *stack);
int		is_valid_details(char **strs, int i, int j);

/* instructions.c */
void	run(char *str, t_list **stack_1, t_list **stack_2, int x);

/* sort.c */
void	sort(t_list **stack);

/* sort_utils.c */
int		stack_min(t_list *stack);
int		stack_max(t_list *stack);
int		min(int a, int b);

/* sort_big_utils.c */
int		stack_idx_minmax(t_list *stack, int num);
void	get_min_rotate(t_list *stack_a, t_list *stack_b, int *a, int *b);
void	rotate_same(t_list **stack_a, t_list **stack_b, int a, int b);
void	rotate_diff(t_list **stack_a, t_list **stack_b, int a, int b);

/* get_next_line.c */
char	*get_next_line(char **str);

#endif
