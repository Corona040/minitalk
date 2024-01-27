/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:08:13 by ecorona-          #+#    #+#             */
/*   Updated: 2023/11/04 16:21:48 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "aaaaa";
	char	*set = "a";

	printf(".%s.\n", ft_strtrim(s1, set));
}
*/
