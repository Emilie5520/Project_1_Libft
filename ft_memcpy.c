/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:36:19 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/10 11:26:41 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	char	src[] = { '0', '1', '2'};
	char 	dest[] = {'6', '7', '8', '9'};
	printf("%s\n", ft_memcpy(dest, src, 3));
	printf("%s", memcpy(dest, src, 3));
	return (0);
}*/
