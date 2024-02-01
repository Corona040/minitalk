/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:08:13 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:10:04 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	s1: The string to be trimmed.
	set: The reference set of characters to trim.
RETURN VALUE:
	The trimmed string.
	NULL if the allocation fails.
DESC:
	Allocates (with malloc(3)) and returns a copy of 's1' with the characters \
	specified in 'set' removed from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	len;

	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	len = ft_strlen(s1) - start;
	while (len && ft_strrchr(set, s1[start + len]))
		len--;
	trim = ft_substr(s1, start, len + 1);
	if (!trim)
		return (0);
	return (trim);
}
