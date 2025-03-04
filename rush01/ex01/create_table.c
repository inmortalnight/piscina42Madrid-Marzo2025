/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:14:04 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/02 21:03:06 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**create_table(void)
{
	int	**table;
	int	row;
	int	column;
	int	x;

	row = 4;
	column = 4;
	table = (int **)malloc(row * sizeof(int *));
	x = 0;
	while (x < row)
	{
		table[x] = (int *)malloc(column * sizeof(int));
		x++;
	}
	return (table);
}
