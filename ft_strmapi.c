/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:48:55 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/07 12:28:05 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	ft_upper(unsigned int i, char c)
{
	(void)i;
	if (c == ' ')
		c = '-';
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	s2 = (char *) malloc (sizeof(char) * i + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int	main(void)
{
	const char	s[] = "Manue me cagon tus muelas";

	printf("\nOriginal: %s\n\n", s);
	printf("Cambiado: %s\n\n", ft_strmapi(s, &ft_upper));
	return (0);
}*/
