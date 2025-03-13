/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:39:23 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/25 12:00:26 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = '0';
	while (number1 <= '9')
	{
		number2 = number1 + 1;
		while (number2 <= '9')
		{
			write(1, &number2, 1);
			write(1, &number1, 1);
			number2++;
		}
		number1++;
		write(1, ", ", 2);
	}
}

int	main(void)
{
	ft_print_comb2();
}

