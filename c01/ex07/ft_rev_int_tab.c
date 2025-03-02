/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:51:59 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/01 10:24:21 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < size / 2)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	number[] = {1, 2, 3, 4, 5, 6, 7};
	//int	*pointer = number; 

	//pointer = number;
	ft_rev_int_tab(number, 7);
	int i = 0;
	while (i < 7)
	{
		printf("%d", number[i]);
		i++;
	}
	return (0);
}*/
