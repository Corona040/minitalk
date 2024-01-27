/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:56:57 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 17:15:29 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(s1 + i))
	{
		if (*(s1 + i) != *(s2 + i))
			return ((unsigned char) *(s1 + i) - (unsigned char) *(s2 + i));
		i++;
	}
	if (*(s1 + i) != *(s2 + i) && i != n)
		return (*(s1 + i) - *(s2 + i));
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s1 = "test\200";
	char	*s2 = "test\0";
	size_t	n = 6;

	printf("%i\n", strncmp(s1, s2, n));
	printf("%i\n", ft_strncmp(s1, s2, n));
}
*/
