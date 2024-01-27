/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 08:45:07 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/13 09:41:29 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (*s == 0 || start > s_len)
		len = 0;
	ss = ft_calloc(len + 1, sizeof(char));
	if (!ss)
		return (0);
	if (start > s_len)
		return (ss);
	ft_strlcpy(ss, s + start, len + 1);
	return (ss);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str = "mercurio, venus, terra, marte, jupiter, saturno, urano, netuno";
	char *sub;

	(void)str;
	sub = ft_substr("hola", 4294967295, 18446744073709551615);
	printf("%s\n", sub);
}
*/
