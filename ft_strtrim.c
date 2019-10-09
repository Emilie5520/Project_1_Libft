/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:07:56 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/09 16:47:25 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <string.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int	j;
	int	l;
	char	*setnew;
	char	*s1new;
	
	i = 0;
	j = ft_strlen(s1) - 1;
	l = 0;
	setnew = (char *)set;
	s1new = (char *)s1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * ft_strlen(s1));
	if (str == NULL)
		return (NULL);
	while (is_charset(setnew, s1new[i]) && s1new[i] != '\0')
		i++;
	while (is_charset(setnew, s1new[j]) && j >= 0)
		j--;
	while (i <= j)
	{
		str[l] = s1new[i];
		l++;
		i++;
	}
	str[l] = '\0';
	return (str);
}

int	main()
{
	char str[] = "ouiouiouioui on va faire     le test       ouiouioui";
	char set[] = "oui";
	printf("%s", ft_strtrim(str, set));
	return (0);	
}
