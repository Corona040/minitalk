/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:13:22 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/11 09:00:42 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Set errno??? man 3 errno
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_s;
	char	*dup;

	size_s = ft_strlen(s) + 1;
	dup = ft_calloc(size_s, sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, s, size_s);
	return (dup);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *src = "banana!";

	printf("%s\n", strdup(src));
	printf("%s\n", ft_strdup(src));
}
*/
