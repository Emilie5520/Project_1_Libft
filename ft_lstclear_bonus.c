/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:08:10 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/18 12:28:41 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*tmp;
	t_list		*add;

	if (lst && del)
	{
		add = *lst;
		tmp = NULL;
		while (add)
		{
			del(add->content);
			tmp = add->next;
			free(add);
			add = tmp;
		}
		*lst = NULL;
	}
}
