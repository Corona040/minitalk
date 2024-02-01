/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:56:57 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:07:49 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man strncmp
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
