/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:29:12 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:37:43 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("they: %lu\n", strlen(""));
	printf("mine: %lu\n\n", ft_strlen(""));
	printf("they: %lu\n", strlen("a"));
	printf("mine: %lu\n\n", ft_strlen("a"));
	printf("they: %lu\n", strlen("banana"));
	printf("mine: %lu\n\n", ft_strlen("banana"));
	printf("they: %lu\n", strlen(" is al"));
	printf("mine: %lu\n\n", ft_strlen(" is al"));
}
*/
