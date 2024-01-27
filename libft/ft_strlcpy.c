/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:01:20 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 17:11:28 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	n = 0;
	while (n + 1 < size && *(src + n))
	{
		*(dst + n) = *(src + n);
		n++;
	}
	*(dst + n) = '\0';
	return (len_src);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst1[] = "";
	char	dst2[] = "";
	char	*src = "";
	size_t	n = 15;

	printf("%zu\n%s\n\n", strlcpy(dst1, src, n), dst1);
	printf("%zu\n%s\n\n", ft_strlcpy(dst2, src, n), dst2);
}
*/
