/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:56:58 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/12 12:03:24 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	(void)f;
	i = 0;
	while (*(s + i))
	{
		f((unsigned int) i, s + i);
		i++;
	}
}

/*
#include <stdio.h>

void    itolower(unsigned int i, char *c)
{
    (void) i;
    *c = ft_tolower(*c);
}

int main(void)
{
    char str[] = "BANANAS";

	ft_striteri(str, &itolower);
    printf("%s\n", str);
}
*/
