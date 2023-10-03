/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:47:35 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/27 09:58:04 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <fcntl.h>*/

static void	ft_print(int nb, int fd)
{
	char	n[10];
	int		i;

	if (nb == 0)
		write (fd, "0", 1);
	i = 0;
	while (nb)
	{
		n[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i > 0)
	{
		write (fd, &n[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}		
	ft_print(n, fd);
}

/*int	main(void)
{
	int		fd;
	int		n;

	n = -2147483648;
	n = -57444;
	fd = open("putnbr_fd.txt", 1);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}*/
