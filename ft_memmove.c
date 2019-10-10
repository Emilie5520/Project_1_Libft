/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:48:45 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/10 11:26:27 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	char		*src1;

	i = 0;
	dest1 = (char*)dest;
	src1 = (char*)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src1 < dest1)
	{
		while (n)
		{
			n--;
			dest1[n] = src1[n];
		}
	}
	else
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}

/*int	main()
{
	char src[] = {'0', '1', '2'};
	char dest[] = {'6', '7', '8', '9'};
	printf("%s\n", ft_memmove(dest, src, 3));
	printf("%s", memmove(dest, src, 3));
	return (0);
}*/
