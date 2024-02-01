/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:49:26 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:08:24 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// man strrchr
char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	uc;

	uc = (unsigned char) c;
	str = (char *) s;
	while (*str)
		str++;
	while (*str != uc && str != (char *) s)
		str--;
	if (*str == uc)
		return (str);
	else
		return (0);
}
