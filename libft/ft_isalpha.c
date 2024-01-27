/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:32:58 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:26 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0x400);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("they 'a': %i\n", isalpha('b'));
	printf("mine 'a': %i\n\n", ft_isalpha('b'));
	printf("they 'A': %i\n", isalpha('X'));
	printf("mine 'A': %i\n\n", ft_isalpha('X'));
	printf("they '1': %i\n", isalpha('1'));
	printf("mine '1': %i\n", ft_isalpha('1'));
}
*/
