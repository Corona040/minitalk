/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:46:09 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:36:58 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	else
		return (c);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%c\n", tolower('^'));
	printf("%c\n", tolower('^'));
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('a'));
	printf("%c\n", tolower('A'));
	printf("%c\n", tolower('A'));
}
*/
