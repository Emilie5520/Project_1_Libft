/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 15:17:22 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/21 14:01:17 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*start;
	t_list		*new;
	t_list		*last;

	start = NULL;
	last = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		if (!(new = malloc(sizeof(t_list))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		new->content = (*f)(new->content);
		new->next = NULL;
		if (!start)
			start = new;
		ft_lstadd_back(&last, new);
		last = new;
		lst = lst->next;
	}
	return (start);
}
