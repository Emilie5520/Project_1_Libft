/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:35:03 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/08 14:13:45 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*str2;
	size_t	i;

	str2 = str;
	i = 0;
	while (i < n)
	{
		str2[i] = c;
		i++;
	}
	return (str);
}
