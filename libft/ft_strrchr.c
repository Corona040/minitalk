/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:49:26 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/13 11:05:36 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;

	uc = (unsigned char) c;
	str = (char *) s;
	while (*str)
		str++;
	while (*str != uc && str != (char *) s)
		str--;
	if (*str == uc)
		return (str);
	else
		return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "banana";
	int		c = 'a';

	printf("they: %p\n", strrchr(str, c));
	printf("mine: %p\n", ft_strrchr(str, c));
}
*/
