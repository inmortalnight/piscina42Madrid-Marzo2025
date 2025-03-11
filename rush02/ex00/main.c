/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efunes-c <efunes-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:40:38 by efunes-c          #+#    #+#             */
/*   Updated: 2025/03/09 22:42:22 by efunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	manual_dict(char *value);

int		ft_check(char *value);

//int		ft_dict_file(char *dict);

int		ft_argc_error(int argc);

int		ft_error(char *value);

int	main(int argc, char **argv)
{
	char	*dict;
	char	*value;
	int		error;

	error = ft_argc_error(argc);
	if (error != 0)
		return (1);
	if (argc == 2)
	{
		dict = NULL;
		value = argv[1];
	}
	else
	{
		dict = argv[1];
		value = argv[2];
	}
	error = ft_error(value);
	if (error != 0)
		return (1);
	manual_dict(value);
	return (0);
}

int	ft_argc_error(int argc)
{
	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 7);
		return (1);
	}
	return (0);
}

int	ft_error(char *value)
{
	int	error;

	error = ft_check(value);
	if (error != 0)
		return (1);
	return (0);
}

void	manual_dict(char *value)
{
	int		i;
	int		val;
	char	*dic[10];
	char	print;

	val = value[0] - '0';
	dic[0] = "zero";
	dic[1] = "one";
	dic[2] = "two";
	dic[3] = "three";
	dic[4] = "four";
	dic[5] = "five";
	dic[6] = "six";
	dic[7] = "seven";
	dic[8] = "eight";
	dic[9] = "nine";
	i = 0;
	while (dic[val][i])
	{
		print = dic[val][i];
		write(1, &print, 1);
		i++;
	}
	write(1, "\n", 1);
}
