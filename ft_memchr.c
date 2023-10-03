/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:51:30 by manue             #+#    #+#             */
/*   Updated: 2023/05/08 10:21:49 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *) &((unsigned char *)s)[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	s[] = "caballo loco troton";
	//char s[] = {0, 1, 2 ,3 ,4 ,5};
	int			c;
	size_t		n;

	c = 'o';
	n = 8;
	printf("Funcion original:     %s\n", memchr(s, c, n));
	printf("Funcion propio vasco: %s\n", ft_memchr(s, c, n));
	return (0);
}*/
