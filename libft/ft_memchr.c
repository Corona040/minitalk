/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:02:02 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/14 09:50:40 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*str;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n && *(str + i) != uc)
		i++;
	if (i == n)
		return (0);
	else
		return ((void *)s + i);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		c = '\xde';
	size_t	n = 15;
	char	*res;
	char	*my_res;

	str = malloc(n * sizeof(char));
	strcpy(str, ":(){ :|: & };:");
	(void)res;
	(void)my_res;
	res = (char *)memchr(str, c, n);
	//my_res = (char *)ft_memchr(str, c, n);
	//printf("%s\n", res);
	//printf("%s\n", my_res);
}
*/
