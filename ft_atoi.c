/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:26:05 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/08 14:26:23 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	min;
	int	max;

	i = 0;
	sign = 1;
	result = 0;
	min = -2147483648;
	max = 2147483647;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f'|| str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		if (result >= max)
			return (max);
		if (result <= min)
			return (min);
		i++;
	}
	return (result * sign);
}
