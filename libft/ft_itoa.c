/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:39:36 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/11 11:24:55 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static int	add_digits(char *str, int n)
{
	size_t	i;

	i = 0;
	if (n / 10 != 0)
		i = add_digits(str, n / 10);
	if (n % 10 < 0)
	{
		if (i == 0)
			*(str + i++) = '-';
		n = -(n % 10);
	}
	else
		n = n % 10;
	*(str + i) = n + '0';
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*nmb;

	if (n < 0)
		nmb = ft_calloc(count_digits(n) + 2, sizeof(char));
	else
		nmb = ft_calloc(count_digits(n) + 1, sizeof(char));
	if (!nmb)
		return (0);
	add_digits(nmb, n);
	return (nmb);
}

/*
#include <stdio.h>

int	main(void)
{
	int	n = -102;

	printf("%s\n", ft_itoa(n));
}
*/
