/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edouvier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:01:53 by edouvier          #+#    #+#             */
/*   Updated: 2019/10/09 18:23:05 by edouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

void 	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	**pointeur;
	int	len;
	
	i = 0;
	len = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	pointeur = (void **)malloc(sizeof(void *) * len);
	if (pointeur == NULL)
		return (NULL);
	while (i < nmemb)
	{
		pointeur[i] = 0;
		i++;
	}
	return (pointeur);
}

int		main()
{
	int i, n, o;
	int *a;
	int *b;

	printf("=== calloc ===\n");

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int*)calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ ) {
		scanf("%d",&a[i]);
	}

	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ ) {
		printf("%d ",a[i]);
	}
	free( a );


	printf("\n\n\n=== ft_calloc ===\n");
	printf("Number of elements to be entered:");
	scanf("%d",&o);

	b = (int*)ft_calloc(o, sizeof(int));
	printf("Enter %d numbers:\n",o);
	for( i=0 ; i < o ; i++ ) {
		scanf("%d",&b[i]);
	}

	printf("The numbers entered are: ");
	for( i=0 ; i < o ; i++ ) {
		printf("%d ",b[i]);
	}
	free( b );
}
