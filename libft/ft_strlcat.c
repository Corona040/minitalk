/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:15:59 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:37:26 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	n;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	n = 0;
	while (n + len_dst + 1 < size && *(src + n))
	{
		*(dst + len_dst + n) = *(src + n);
		n++;
	}
	*(dst + len_dst + n) = '\0';
	if (size < len_dst)
		return (len_src + size);
	else
		return (len_dst + len_src);
}

/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putchar(int c)
{
	if (ft_isprint(c) || c == '\n' || c == '\t')
		write(1, &c, 1);
	else if (c == '\0')
		write(1, ".", 1);
	else
		write(1, "@", 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putnstr(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(*(str + i++));
	}
}

//  To test:
//  print dst1, dst2 and src
//  strlcat, print dst
//  ft_strlcat, print dst
//  print dst for strlcat again
//
//   do the same but run ft_strlcat first
int	main(void)
{
	char	dst1[] = "ftpqrstuvwxyz";
	char	dst2[] = "ogpqrstuvwxyz";
	char	*src = "abcd";
	size_t	n = 20;
	size_t	p = 40;

	ft_putnstr(src, p);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnstr(dst1, p);
	ft_putchar('\n');
	ft_putnstr(dst2, p);
	ft_putchar('\n');
	ft_putchar('\n');
	strlcat(dst2, src, n);
	ft_putnstr(dst2, p);
	ft_putchar('\n');
	ft_strlcat(dst1, src, n);
	ft_putnstr(dst1, p);
	ft_putchar('\n');
	ft_putnstr(dst2, p);
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putnstr(src, p);
}
*/
