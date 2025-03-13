/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:30:11 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/13 10:01:36 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*s1 || *s2))
	{
		if (!(*s1 == *s2))
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	i;

	i = ft_strncmp("NBC", "AB", 1);	
	printf("%d\n", i);
}*/
