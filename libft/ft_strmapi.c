/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:32:26 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/13 09:43:18 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;

	mapi = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!mapi)
		return (0);
	i = 0;
	while (*(s + i))
	{
		*(mapi + i) = f((unsigned int) i, *(s + i));
		i++;
	}
	return (mapi);
}

/*
#include <stdio.h>

char	itolower(unsigned int i, char c)
{
	(void) i;
	return (ft_tolower(c));
}

int	main(void)
{
	char *str = "BANANAS";

	printf("%s\n", ft_strmapi(str, &itolower));
}
*/
