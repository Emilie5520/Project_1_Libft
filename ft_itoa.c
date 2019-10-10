/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:33:51 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/10 14:49:51 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	is_malloc(int n)
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
	if (num < 0)
	{
		num = -num;
		count++;	
	}
	count = count + is_malloc(num);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (str == NULL)
		return (NULL);
	str[count] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[count - 1] = (num % 10)  + '0';
		num = num / 10;
		count--;
	}
	if (count == 1)
		str[0] = '-';
	return (str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("%s\n", ft_itoa(atoi(av[1])));
//	printf("%d", itoa(n));
	return (0);
}
