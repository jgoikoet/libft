/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:37:59 by manue             #+#    #+#             */
/*   Updated: 2023/05/07 12:02:26 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

static int	ft_xtracheck(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 1 && str[i] <= 32) && str[i] != '\e' && str[i] != '\0')
	{
		if ((str[i] >= '\001' && str[i] <= '\010') \
		|| (str[i] >= '\016' && str[i] <= '\037'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 0;
	if (!ft_xtracheck(str))
		return (0);
	while ((str[i] >= 1 && str[i] <= 32) && str[i] != '\e' && str[i] != '\0')
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - '0';
		i++;
	}
	if (str[sign] == '-')
		res = -res;
	return (res);
}

/*int	main(void)
{
	//const char	str[] = "     +2147483647";
	//const char	str[] = "   -78565h";
	//const char	str[] = "\t\n\ra\v\f  469 \n";
	//const char	str[] = "\e475";
	const char	str[] = "\006 20";
	printf("Funcion original = %i\n", atoi(str));
	printf("Funcion casera =   %i\n", ft_atoi(str));
	return (0);
}*/
