/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:49:19 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:56 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (0x800);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("they '1': %i\n", isdigit('1'));
	printf("mine '1': %i\n\n", ft_isdigit('1'));
	printf("they '9': %i\n", isdigit('9'));
	printf("mine '9': %i\n\n", ft_isdigit('9'));
	printf("they 'h: %i\n", isdigit('h'));
	printf("mine 'h': %i\n", ft_isdigit('h'));
}
*/
