/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:49:00 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:56:34 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp_fd(va_list argp, int fd)
{
	void				*p;
	long unsigned int	nbr;

	p = va_arg(argp, void *);
	nbr = (long unsigned int) p;
	if (nbr == 0)
	{
		ft_putstr_fd("(nil)", fd);
		return ((int) ft_strlen("(nil)"));
	}
	ft_putstr_fd("0x", fd);
	ft_putp_fd(nbr, fd);
	return ((int) ft_plen(nbr) + 2);
}

int	ft_printi_fd(va_list argp, int fd)
{
	int	nbr;

	nbr = va_arg(argp, int);
	ft_putnbr_fd(nbr, fd);
	return ((int) ft_nbrlen(nbr));
}

int	ft_printu_fd(va_list argp, int fd)
{
	int	nbr;

	nbr = va_arg(argp, int);
	ft_putunbr_fd(nbr, fd);
	return ((int) ft_unbrlen(nbr));
}

int	ft_printx_fd(va_list argp, int fd)
{
	int	nbr;

	nbr = va_arg(argp, int);
	ft_puthex_fd(0, nbr, fd);
	return ((int) ft_hexlen(nbr));
}

int	ft_printbigx_fd(va_list argp, int fd)
{
	int	nbr;

	nbr = va_arg(argp, int);
	ft_puthex_fd(1, nbr, fd);
	return ((int) ft_hexlen(nbr));
}
