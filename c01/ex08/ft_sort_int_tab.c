/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:29:43 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/27 13:48:44 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	y = 0;
	while (y < size - 1)
	{
		x = 0;
		while (x < size - 1 - y)
		{
			if (tab[x] > tab[x + 1])
				ft_swap(&tab[x], &tab[x + 1]);
			x++;
		}
		y++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	arr[9] = {52, 7, 59, 42, 1151, 28, 1, 17, 4};
	int	i;

	ft_sort_int_tab(arr, 9);
	i = 0;
	while (i < 9)
	{
		printf("%d", arr[i]);
		if(i < 8)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}*/
