/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:57:25 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/14 17:31:30 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list*		nouvelElement;
	
	t_list = malloc(sizeof(s_list));
	if (t_list == NULL)
		return (NULL);
	nouvelElement->content = content;
	nouvelElement->next = NULL;

	return (nouvelElement);
}
