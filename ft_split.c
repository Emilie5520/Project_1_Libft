/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:54:07 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/09 16:59:06 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_split(char const *s, char c)
{

}

void	ft_putchar(char c)
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
	char *str = "   hello les gens";
	char **tab = ft_split(str, ' ');
	int	i;
	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}
