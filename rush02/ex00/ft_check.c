/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efunes-c <efunes-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:16:32 by efunes-c          #+#    #+#             */
/*   Updated: 2025/03/09 22:25:58 by efunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *value)
{
	int	i;

	i = 0;
	while (value[i] != '\0')
	{
		if (!('0' <= value[i] && value[i] <= '9'))
		{
			write(2, "Error\n", 7);
			return (1);
		}
		i++;
	}
	if (i != 1)
	{
		write(2, "Error\n", 7);
		return (1);
	}
	return (0);
}
