/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:37:38 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/11 09:05:14 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size > 0 && nmemb > ((size_t) -1) / size)
		return (0);
	array = malloc(nmemb * size);
	if (!array)
		return (0);
	ft_bzero(array, nmemb * size);
	return (array);
}

/*
#include <stdio.h>

int	main(void)
{
	size_t nmemb = 1;
	size_t size = max_size_t();

	//printf("%lu\n", sizeof(size_t));
	//printf("%zu\n", max_size_t());
	printf("%p\n", calloc(nmemb, size));
	printf("%p\n", ft_calloc(nmemb, size));
}
*/
