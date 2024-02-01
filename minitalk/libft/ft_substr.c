/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:45:07 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:11:49 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	s: The string from which to create the substring.
	start: The start index of the subtring in the string 's'.
	len: The maximum length of the substring.
RETURN VALUE:
	The substring.
	NULL if the allocation fails.
DESC:
	Allocatess (with malloc(3)) and returns a substring from the string 's'.
	The substring begins at index 'start' and is of maximum size 'len'.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (*s == 0 || start > s_len)
		len = 0;
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (0);
	if (start > s_len)
		return (ss);
	ft_strlcpy(ss, s + start, len + 1);
	return (ss);
}
