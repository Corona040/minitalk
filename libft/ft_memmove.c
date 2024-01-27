/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:13:32 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/14 16:38:22 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
		while (n--)
			d[n] = s[n];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*res;
	char	*my_res;
	//char	dest[] = "banana";
	//char	dest1[] = "banana";
	//char	*dest2 = 0;
	char	s[] = {65, 66, 67, 68, 69, 0, 45};
	char	s1[] = {65, 66, 67, 68, 69, 0, 45};
	char	s2[] = {65, 66, 67, 68, 69, 0, 45};
	//char	*dest3 = 0;
	size_t	n = 1028;

	//printf("%s\n", (char *)memcpy(dest + 2, dest, n));
	//printf("%s\n", (char *)ft_memcpy(dest1 + 2, dest1, n));
	(void)s;
	(void)s2;
	printf("memmove\n");
	res = (char *)memmove(s1, s1 + 2, n);
	printf("\nft_memmove\n");
	my_res = (char *)ft_memmove(s, s + 2, n);
	printf("\nres print\n");
	printf("%s\n", res + 4);
	printf("\nmy_res print\n");
	printf("%s\n", my_res + 4);
}
*/
