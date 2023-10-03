/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:34:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/04/21 13:41:24 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		*str++ = 0;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Aaay Macarena, como me pica!";
	int		i;

	i = 0;
	printf("Antes de bzero: %s\n", str);
	printf("Longitud str: %lu\n", strlen(str));
	ft_bzero(str, 3);
	//bzero(str, 3);
	printf("Despues de ft_bzero: %s\n", str);
	printf("Longitud str: %lu\n", strlen(str));
	while (str[i] != '!')
		write (1, &str[i++], 1);
	write (1, "\n", 1);
	return (0);
}*/
