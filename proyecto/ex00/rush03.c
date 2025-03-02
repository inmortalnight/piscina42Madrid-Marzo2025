/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoria <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:51:56 by asoria            #+#    #+#             */
/*   Updated: 2025/02/23 14:59:18 by asoria           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_check_valid(int x, int y)
{
	if (x == 0 || y == 0)
	{
		write (1, "Error: Neither X or Y can be null. ", 36);
		return (-1);
	}
	if (x < 0 || y < 0)
	{
		write (1, "Error: Negative number input is not valid. ", 44);
		return (-1);
	}
	if (x > 2147483647 || y > 2147483647)
	{
		write (1, "Error: Number out of bounds. ", 29);
		return (-1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	c;
	int	r;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if ((c == 0 && r == 0) || (c == 0 && r == (y - 1)))
				ft_putchar('A');
			else if ((c == (x - 1) && r == 0) || (c == (x - 1) && r == (y - 1)))
				ft_putchar('C');
			else if (c == 0 || r == 0 || c == (x - 1) || r == (y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
