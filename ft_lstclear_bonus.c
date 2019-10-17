/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 12:08:10 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/17 17:23:27 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*add;
	t_list	*tmp;

	add = (*lst);
	if (add == NULL)
		return ;
	while (add->next != NULL)
	{
		tmp = add;
		(*del)(add->content);
		free(tmp);
		add = add->next;
	}
	add = NULL;
}
