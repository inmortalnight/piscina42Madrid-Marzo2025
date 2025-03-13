/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:27:19 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/25 11:22:05 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number1;
	char	number2;
	char	number3;

	number1 = '0';
	while (number1 <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write(1, &number1, 1);
				write(1, &number2, 1);
				write(1, &number3, 1);
				write(1, ", ", 2);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
