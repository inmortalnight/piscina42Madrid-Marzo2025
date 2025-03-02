/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:21:17 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/27 13:26:04 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str++, 1);
	}
}
/*
int	main(void)
{
	//char	*pointer;

	//pointer = "Hola";
	ft_putstr("he0llo");
	return (0);
}*/
