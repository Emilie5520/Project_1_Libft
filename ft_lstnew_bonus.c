/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:57:25 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/15 13:15:11 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nouvelElement;
	
	nouvelElement = malloc(sizeof(content));
	if (nouvelElement == NULL)
		return (NULL);
	nouvelElement->content = content;
	nouvelElement->next = NULL;

	return (nouvelElement);
}
