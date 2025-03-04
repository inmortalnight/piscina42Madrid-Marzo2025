/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yizhu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 16:24:03 by yizhu             #+#    #+#             */
/*   Updated: 2025/03/02 23:38:31 by yizhu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		error_check(char *arg);
int		**create_table(void);
void	fill_table(int **table);
void	print_table(int **table);
void	free_table(int **table);

int	main(int argc, char **argv)
{
	char	*arg;
	int		**table;

	arg = argv[1];
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (error_check(arg) == 1)
		return (1);
	table = create_table();
	fill_table(table);
	print_table(table);
	free_table(table);
	return (0);
}

int	error_check(char *arg)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] < '1' || arg[i] > '4')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		len++;
		i++;
	}
	if (len != 16)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
