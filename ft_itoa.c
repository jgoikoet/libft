/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:36:10 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/05/03 16:51:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap(char *str)
{
	int		fin;
	int		size;
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
		i++;
	fin = i - 1;
	size = fin;
	i = 0;
	while (i <= size / 2)
	{
		c = str[fin];
		str[fin--] = str[i];
		str[i++] = c;
	}
	return (str);
}

static int	ft_nlen(int n)
{
	int	nlen;

	if (n == 0)
		return (2);
	nlen = 0;
	if (n < 0)
		nlen = 1;
	while (n)
	{
		n = n / 10;
		nlen++;
	}
	return (nlen + 1);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		sign;

	sign = 0;
	if (n < 0)
		sign = -1;
	num = (char *) malloc (sizeof(char) * ft_nlen(n));
	if (num == NULL)
		return (NULL);
	i = 0;
	if (n == 0)
		num[i++] = '0';
	while (n)
	{
		if (n % 10 < 0)
			num[i++] = ((n % 10) * -1) + '0';
		else
			num[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		num[i++] = '-';
	num[i] = '\0';
	return (ft_swap(num));
}

/*int	main(void)
{
	int	n;
	//char *c;

	n = -2147483648;
	//n = 0;
	//c = ft_itoa(-623);
	printf ("\nEr numero es: %s\n\n", ft_itoa(n));

	//system("leaks a.out");
	return (0);
}*/