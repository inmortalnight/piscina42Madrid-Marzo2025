/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:00:38 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/11 16:23:43 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (size + j);
	while (src[k] && (i + k) < size - 1)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
int	main(void)
{
	char	x[] = "im";
	char	y[] = "hi";

	printf("%u\n", ft_strlcat(x, y, 3));
	printf("%s\n", x);
}*/
