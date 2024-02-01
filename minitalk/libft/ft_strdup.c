/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:13:22 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:00:58 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Set errno??? man 3 errno
#include "libft.h"

// man strdup
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
