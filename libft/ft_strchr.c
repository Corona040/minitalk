/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:41:56 by ecorona-          #+#    #+#             */
/*   Updated: 2023/11/03 12:36:27 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char) c;
	while (*s != uc && *s)
		s++;
	if (*s == uc)
		return ((char *)s);
	else
		return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "teste";
	int		c = 'e';

	printf("they: %p\n", strchr(str, c));
	printf("mine: %p\n", ft_strchr(str, c));
}
*/
