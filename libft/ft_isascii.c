/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:01:04 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:40 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0x7f)
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

//is alpha doesn't seem to check if c is a 7-bit unsigned char
//is man lying?
int	main(void)
{
	unsigned char	c;

	c = (unsigned char) 0xf000007e;
	printf("they: %i\n", isascii(-1));
	printf("mine: %i\n\n", ft_isascii(-1));
	printf("they: %i\n", isascii(0));
	printf("mine: %i\n\n", ft_isascii(0));
	printf("they: %i\n", isascii(1));
	printf("mine: %i\n\n", ft_isascii(1));
	printf("they: %i\n", isascii(127));
	printf("mine: %i\n\n", ft_isascii(127));
	printf("they: %i\n", isascii(128));
	printf("mine: %i\n\n", ft_isascii(128));
	printf(" int: %i\n", 0xf000007e);
	printf("uint: %u\n", c);
	printf("they: %i\n", isascii(0xf000007e));
	printf("mine: %i\n\n", ft_isascii(0xf000007e));
	printf("they: %i\n", isascii(c));
	printf("mine: %i\n\n", ft_isascii(c));
}
*/
