/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:50:39 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/09/27 18:57:46 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>

void	ft_upper_pair(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
		*c = *c - 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f (i, &s[i]);
			i++;
		}
	}
}

int	main(void)
{
	char	s[] = "sacando patatas alau del rio salieron carramarros con alpargatas";

	ft_striteri(NULL, &ft_upper_pair);
	printf("\n%s\n\n", s);
	return (0);
}
