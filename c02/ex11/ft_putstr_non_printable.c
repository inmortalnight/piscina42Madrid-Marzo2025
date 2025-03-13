/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <yizhu@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:01:22 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/06 18:26:09 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_printable(char c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

char	ft_dec_to_hex(char c)
{
	char	*hex;
	int	p1;
	int	p2;
	
	hex = "0123456789abcdef";
	p1 = (c - '0') / 16;
	p2 = (c - '0') % 16;
	printf("%d", p2);
	p2 = p2 / 16;
	printf("%d %d", p1, p2);
	str[0] = hex[p1]; 
	str[1] = hex[p2];
	printf("%s", str);

}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
			str[i] = "//" + ft_dec_to_hex(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	printf("%s", str);
}
