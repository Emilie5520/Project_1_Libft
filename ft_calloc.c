/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:01:53 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/17 10:41:50 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	**pointeur;
	int		len;

	i = 0;
	len = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pointeur = (void **)malloc(sizeof(void *) * len);
	if (pointeur == NULL)
		return (NULL);
	while (i < nmemb)
	{
		pointeur[i] = 0;
		i++;
	}
	return (pointeur);
}
