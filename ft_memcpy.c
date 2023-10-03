/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:37:22 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/08 10:45:02 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*temp;
	const char	*temp2;

	if (!dst && !src)
		return (NULL);
	i = 0;
	temp = dst;
	temp2 = src;
	while (i < n)
	{
		*temp++ = *temp2++;
		i++;
	}	
	return (dst);
}

/*int	main(void)
{
	const char	src[] = "A la larga te acostumbras, a la ancha nunca.";
	char		*dst;

	dst = (char *) malloc (sizeof(char) * strlen(src) + 1);
	printf("dst antes de memcpy: %s\n", dst);
	memcpy(dst, src, 11);
	ft_memcpy(dst, src, 11);
	printf("dst despues de ft_memcpy: %s\n", dst);
}*/
