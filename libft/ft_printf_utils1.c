/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:44:42 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:57:26 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_nbrlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

size_t	ft_unbrlen(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

size_t	ft_hexlen(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n / 16 != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

size_t	ft_plen(unsigned long int n)
{
	size_t	i;

	i = 1;
	while (n / 16 != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
