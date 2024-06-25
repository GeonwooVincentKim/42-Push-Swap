/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:55:42 by geonwkim          #+#    #+#             */
/*   Updated: 2024/06/25 20:27:04 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push.h"

int	findargs(int argc, char **argv, t_check *checker)
{
	checker->pin = 0;
	checker->exit = 0;
	while (checker->index < argc)
	{
		checker->exit++;
		while (argv[checker->index][checker->pin])
		{
			if ((argv[checker->index][checker->pin] < '0'
				|| argv[checker->index][checker->pin] > '9')
			&& ((argv[checker->index][checker->pin] != ' ')
			&& (argv[checker->index][checker->pin] != '-')))
			{
				checker->falseargs = checker->index;
				return (-1);
			}
			if (argv[checker->index][checker->pin] == ' ' &&
			(argv[checker->index][checker->pin + 1] <= '9'
			&& argv[checker->index][checker->pin + 1] >= '0'))
				checker->exit++;
			checker->pin++;
		}
		checker->pin = 0;
		checker->index++;
	}
	return (checker->exit);
}

int	checkargs2(t_check *checker)
{
	if (checksamenum(checker) == -1)
	{
		write(2, "Error\n", 6);
		// my_putstr("Error\nArguments ");
		// ft_putnbr(checker->falseargs1 + 1);
		// my_putstr(" and ");
		// ft_putnbr(checker->falseargs2 + 1);
		// my_putstr(" or more are the same\n");
		return (0);
	}
	return (1);
}

/**
 * pin: -1
 * -> Arguments could not be integers
 * 
 * pin: -2
 * -> Arguments could be bigger than an integer
 * 
 * pin: -3
 * -> Malloc allocation error
*/
// typedef enum e_errornb {
// 	MALLOC_FAILUER,
// 	NOT_INTERGER,
// 	...
// } t_errornb
// int	checkargs(t_check *checker, t_errornb nb)


int	checkargs(t_check *checker, int pin)
{
	if (pin == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (pin == -2)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (pin == -3)
		write(2, "Error\n", 6);
	if (pin == -3)
		return (-1);
	if (checkargs2(checker) == 0)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar('0' + nb);
}
