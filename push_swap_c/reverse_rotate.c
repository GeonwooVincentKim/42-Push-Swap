/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:53:49 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/25 15:32:56 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push.h"

int	rr(t_check *checker)
{
	rotatea(checker, 0);
	rotateb(checker, 0);
	my_putstr("rr\n");
	return (0);
}

int	rrr(t_check *checker)
{
	reverserotatea(checker, 0);
	reverserotateb(checker, 0);
	my_putstr("rrr\n");
	return (0);
}
