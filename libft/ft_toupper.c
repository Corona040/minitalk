/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:25:30 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:37:13 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", toupper(1));
	printf("%c\n", ft_toupper(1));
	printf("%c\n", toupper('a'));
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('A'));
	printf("%c\n", ft_toupper('A'));
}
*/
