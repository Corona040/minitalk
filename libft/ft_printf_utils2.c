/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:44:18 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:56:24 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int	ft_puthex_fd(int upper, unsigned int n, int fd)
{
	unsigned int	base;
	char			*set;

	set = "0123456789abcdef";
	if (upper)
		set = "0123456789ABCDEF";
	base = (unsigned int) ft_strlen(set);
	if (n >= base)
	{
		ft_puthex_fd(upper, n / base, fd);
		ft_puthex_fd(upper, n % base, fd);
	}
	else
		ft_putchar_fd(set[n], fd);
	return ((int) ft_hexlen(n));
}

int	ft_putp_fd(unsigned long int n, int fd)
{
	unsigned long int	base;
	char				*set;

	set = "0123456789abcdef";
	base = (unsigned long int) ft_strlen(set);
	if (n >= base)
	{
		ft_putp_fd(n / base, fd);
		ft_putp_fd(n % base, fd);
	}
	else
		ft_putchar_fd(set[n], fd);
	return ((int) ft_plen(n) + 2);
}

int	ft_printc_fd(va_list argp, int fd)
{
	char	c;

	c = (char) va_arg(argp, int);
	ft_putchar_fd(c, fd);
	return (1);
}

int	ft_prints_fd(va_list argp, int fd)
{
	char	*str;

	str = va_arg(argp, char *);
	if (str == 0)
	{
		ft_putstr_fd("(null)", fd);
		return ((int) ft_strlen("(null)"));
	}
	ft_putstr_fd(str, fd);
	return ((int) ft_strlen(str));
}
