/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:41:57 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:35:41 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		*((char *)(s + i++)) = c;
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	int str1[] = {1, 1, 1, 1};
	int stt1[] = {1, 1, 1, 1};
	char str2[] = "banana";
	char stt2[] = "banana";
	char str3[10];
	char stt3[10];
	char str4[10] = "banana";
	char stt4[10] = "banana";

	memset(str1, 2, 2);
	ft_memset(stt1, 2, 2);
	memset(str2, 97, 1);
	ft_memset(stt2, 97, 1);
	memset(str3, 97, 1);
	ft_memset(stt3, 97, 1);
	memset(str4, 97, 1);
	ft_memset(stt4, 97, 1);

	for (int i = 0; i < 4; i++)
	{
		printf("%i : ", str1[i]);
		printf("%i\n", stt1[i]);
	}
	printf("%s\n", str2);
	printf("%s\n", stt2);
	printf("%s\n", str3);
	printf("%s\n", stt3);
	printf("%s\n", str4);
	printf("%s\n", stt4);
}
*/
