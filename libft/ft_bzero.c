/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:14:37 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/09 10:34:04 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s += i++;
		*((char *) s) = 0;
	}
}
*/

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    int str1[] = {1, 0x7fffffff, 1, 1};
    int stt1[] = {1, 0x7fffffff, 1, 1};
    char str2[] = "banana";
    char stt2[] = "banana";
    char str3[10];
    char stt3[10];
    char str4[10] = "banana";
    char stt4[10] = "banana";

    bzero(str1 + 1, 2);
    ft_bzero(stt1 + 1, 2);
    bzero(str2 + 3, 2);
    ft_bzero(stt2 + 3, 2);
    bzero(str3 + 3, 2);
    ft_bzero(stt3 + 3, 2);
    bzero(str4 + 3, 2);
    ft_bzero(stt4 + 3, 2);

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
