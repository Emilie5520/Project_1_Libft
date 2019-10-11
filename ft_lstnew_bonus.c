/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:57:25 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/11 16:21:52 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	s_list* nouvelElement = malloc(sizeof(s_list));
	nouvelElement->content
	nouvelElement->nxt = NULL;

	return (nouvelElement);
}
