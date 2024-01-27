/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:18 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 17:51:50 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == 0 && src == 0)
		return (dest);
	i = 0;
	while (i < n)
	{
		ft_memset(dest + i, *(char *)(src + i), 1);
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*src = 0;
	//char	*dest = 0;
	char	*dest1 = 0;
	size_t	n = 2;

	//printf("%s\n", (char *)memcpy(dest, src, n));
	printf("%s\n", (char *)ft_memcpy(dest1, src, n));
}
*/
