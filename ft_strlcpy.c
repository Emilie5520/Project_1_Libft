/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:30:25 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/08 14:47:29 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (i < n)
	{
		if ((i < n - 1) && (src[i] != '\0'))
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			return (j);
		}
		i++;
	}
	return (j);
}

/*int main()
{
        char dest[20];
        char src[] = "ontestontestontest";
        int size = sizeof(dest);

        printf("%d\n",ft_strlcpy(dest,src,size));
        printf("%s\n",dest);

}*/