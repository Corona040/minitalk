/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:17:35 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 17:16:48 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s1 + i) != *(char *)(s2 + i))
			return ((int) *(unsigned char *)(s1 + i)
					- *(unsigned char *)(s2 + i));
		i ++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int		s1[] = {0x0100};
	int		s2[] = {0x0000};
	size_t	n = 2;

	printf("%x\n", memcmp(s1, s2, n));
	printf("%x\n", ft_memcmp(s1, s2, n));
	printf("%i\n", memcmp(s1, s2, n));
	printf("%i\n", ft_memcmp(s1, s2, n));
}
*/
