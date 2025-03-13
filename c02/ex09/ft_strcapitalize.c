/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:52:52 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/06 12:50:11 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_alpha(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] != '\0' && ft_is_lowercase(str[i]))
	{
		str[i] -= 32;
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!(ft_is_alpha(str[i - 1]) || ft_is_number(str[i - 1])))
		{
			if (ft_is_lowercase(str[i]))
				str[i] -= 32;
		}
		else if (ft_is_uppercase(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut! 42mots quaranTe-deux; cinquante+et+un";
	char	*print;

	print = ft_strcapitalize(str);
	printf("%s", print);
	return (0);
}*/
