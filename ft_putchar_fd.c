/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:37:08 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/27 09:57:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	char	str[] = "Manue cuanto kiere...\npos ponme 100 duritos...";
	int		fd;
	int		i;

	i = 0;
	fd = open("putchar_fd.txt", 1);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	close(fd);
	return (0);
}*/
