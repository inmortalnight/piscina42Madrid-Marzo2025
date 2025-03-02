/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:02:34 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/27 13:20:56 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 4;
	num2 = 2;
	ft_ultimate_div_mod(&num1, &num2);
	printf("Division: %d Module: %d\n", num1, num2);
}*/
