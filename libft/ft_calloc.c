/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:37:38 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:23:44 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man calloc
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
