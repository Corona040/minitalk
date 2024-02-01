/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:17:35 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:50:22 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man memcmp
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
