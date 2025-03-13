/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:58:12 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/13 17:13:56 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("     ---+--+1234ab567"));
	printf("%d\n", ft_atoi("     --+--+1234ab567"));
	printf("%d\n", ft_atoi("\t---+--+1234ab567"));
	printf("%d\n", ft_atoi("  t   ---+t--+1234ab567"));
	printf("%d\n", ft_atoi("     ---+--+1234ab567"));
	printf("%d\n", ft_atoi("     ---+--+1r234ab567"));
	printf("%d\n", ft_atoi("     ---+--+"));
	printf("%d\n", ft_atoi("---+--+"));
	printf("%d\n", ft_atoi("234ab567"));
	return (0);
}*/
