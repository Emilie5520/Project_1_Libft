/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:40:29 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/08 14:07:43 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	if (c == '\0')
	{
		while (*s != '\0')
			s++;
		return (s);
	}
	while (*s != '\0')
	{
		if (*s == c)
			tmp = s;
		s++;
	}
	if (tmp)
		return (tmp);
	return (NULL);
}
