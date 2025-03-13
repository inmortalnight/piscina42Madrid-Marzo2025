/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:41:38 by yizhu             #+#    #+#             */
/*   Updated: 2025/02/23 16:15:38 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
		write(1, &positive, 1);
	else if (n < 0)
		write(1, &negative, 1);
}

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
