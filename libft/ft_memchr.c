/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:02:02 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:50:06 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man memchr
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*str;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n && *(str + i) != uc)
		i++;
	if (i == n)
		return (0);
	else
		return ((void *)s + i);
}
