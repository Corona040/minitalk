/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:12:43 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 17:49:39 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		little_len;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (0);
	little_len = ft_strlen(little);
	len -= little_len - 1;
	i = 0;
	while (*(big + i) && i < len)
	{
		if (!ft_strncmp(big + i, little, little_len))
			return ((char *)(big + i));
		i++;
	}
	return (0);
}

/*
//cc -L/usr/lib/x86_64-linux-gnu -lbsd *.c
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*big = "";
	char	*little = "";
	size_t	n = 0;

	printf("%s\n", strnstr(big, little, n));
	printf("%s\n", ft_strnstr(big, little, n));
}
*/
