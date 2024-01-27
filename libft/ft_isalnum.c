/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:51:49 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:08 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("they: %i\n", isalnum('a'));
	printf("mine: %i\n\n", ft_isalnum('a'));
	printf("they: %i\n", isalnum('A'));
	printf("mine: %i\n\n", ft_isalnum('A'));
	printf("they: %i\n", isalnum('1'));
	printf("mine: %i\n\n", ft_isalnum('1'));
	printf("they: %i\n", isalnum('!'));
	printf("mine: %i\n\n", ft_isalnum('!'));
}
*/
