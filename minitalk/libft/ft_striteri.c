/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:56:58 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:03:07 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	s: The string on which to iterate.
	f: The function to apply to each character.
RETURN VALUE:
	None.
DESC:
	Applies the function 'f' on each character of the string passed as \
	argument, passing its index as first argument. Each character is passed by \
	address to 'f' to be modified if necessary.
*/
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
