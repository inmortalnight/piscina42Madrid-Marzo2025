/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:21:09 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/02 23:18:21 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_table(int **table)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(table[i]);
		i++;
	}
}
