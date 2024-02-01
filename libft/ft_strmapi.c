/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:32:26 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:07:33 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	s: The string on which to iterate.
	f: The function to apply to each character.
RETURN VALUE:
	The string created from the successive applications of 'f'.
	NULL if the allocation fails.
DESC:
	Applies the function 'f' to each character of the string 's', and passing \
	its index as first argument to create a new string (with malloc(3)) \
	resulting from successive applications of 'f'.
*/
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
