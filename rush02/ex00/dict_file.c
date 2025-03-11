/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efunes-c <efunes-c@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 10:18:41 by efunes-c          #+#    #+#             */
/*   Updated: 2025/03/09 21:45:26 by efunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_char_read(char *c);

int	ft_dict_file(char *dict)
{
	int	i;
	int	fd;
	char	buffer[1];
	ssize_t	bytes;

	if (dict != NULL)
		fd = open(dict, O_RDONLY);
	else
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Dict Error\n", 12);	
		return (1);
	}
	bytes = read(fd, buffer, sizeof(buffer) - 1);
	i = 0;
	while (bytes)
	{	
		ft_char_read(bytes[i]);
		i++;
	}
	if (bytes == -1)
	{
		write(2, "Dict Error\n", 12);
		close(fd);
		return (1);
	}
	close(fd);
	buffer[bytes] = '\0';
	printf("Contenido del archivo:\n%s\n", buffer);
	return (0);	
}
*/
