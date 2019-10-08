/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:26:41 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/08 14:27:13 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	 *ft_strnstr(char *str, char *c, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (c[j] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == c[j] && i + j < n)
		{
			j++;
			if (c[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (NULL);
}
