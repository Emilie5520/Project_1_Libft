/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:54:07 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/11 12:34:51 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>

int	strlen_like(char *str, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (i - j);
}

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == c && str[i + 1] != c) || str[i + 1] == '\0')
			count += 1;
		i++;
	}
	return (count);
}

char	*strdup_like(char *src, char c)
{
	int	i;
	int	j;
	char	*dest;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * (strlen_like(src, c) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0' && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**res;
	int	words;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	if (s == NULL || c == 0)
		return (NULL);
	words = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * words + 1);
	if (res == NULL)
		return (NULL);
	while (i < words)
	{
		while (str[j] && str[j] == c)
			j++;
		res[i] = strdup_like(&str[j], c);
		while (str[j] && str[j] != c)
			j++;
		i++;
	}
	res[i] = 0;
	return (res);
		
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char *str = "0 1   2 3 4 5 6";
	//printf("%d", count_words(str, ' '));
	char **tab = ft_split(str, ' ');
	int	i;
	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}*/
