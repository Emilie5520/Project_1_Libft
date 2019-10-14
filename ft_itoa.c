/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:33:51 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/14 18:36:27 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdupl(const char *s)
{
	int	i;
	int	j;
	int	k;
	char		*dest;
	char		*src;

	i = 0;
	j = 0;
	k = 0;
	src = (char*)s;
	while (src[k] != '\0')
	{
		k++;
	}
	dest = (char *)malloc(sizeof(char) * (k + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		is_malloc(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int		count;
	long int	num;

	count = 0;
	num = n;
	if (num == -2147483648)
		return (ft_strdupl((const char*)"-2147483648"));
	if (num < 0)
	{
		num = -num;
		count++;
	}
	count = count + is_malloc(num);
	if (!(str = (char *)malloc(sizeof(char) * count + 1)))
		return (NULL);
	str[count] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[count - 1] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
	if (count == 1)
		str[0] = '-';
	return (str);
}
/*
int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);

	long int nb = atoi(av[1]);
	printf("%s\n", ft_itoa(nb));
	return (0);
}*/
