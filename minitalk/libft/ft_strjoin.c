/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:58:23 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:04:38 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	s1; The prefix string.
	s2: The suffix string.
RETURN VALUE:
	The new string.
	NULL if the allocation fails.
DESC;
	Allocates (with malloc(3)) and returns a new string, which is the result \
	of the concatenation of 's1' and 's2'.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!join)
		return (0);
	ft_strlcat(join, s1, len_s1 + 1);
	ft_strlcat(join, s2, len_s1 + len_s2 + 1);
	return (join);
}
