/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:15:59 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:04:55 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man strlcat
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	n;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	n = 0;
	while (n + len_dst + 1 < size && *(src + n))
	{
		*(dst + len_dst + n) = *(src + n);
		n++;
	}
	*(dst + len_dst + n) = '\0';
	if (size < len_dst)
		return (len_src + size);
	else
		return (len_dst + len_src);
}
