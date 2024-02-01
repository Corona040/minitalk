/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:02:24 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/20 13:54:51 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	argp;
	int		result;

	va_start(argp, format);
	result = ft_printf_fd(format, argp, 1);
	va_end(argp);
	return (result);
}

int	ft_printf_fd(const char *format, va_list argp, int fd)
{
	int	result;

	result = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			result += ft_call_print(&format, argp, fd);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			result += 1;
		}
		format++;
	}
	return (result);
}

int	ft_call_print(const char **format, va_list argp, int fd)
{
	if (**format == 'c')
		return (ft_printc_fd(argp, fd));
	else if (**format == 's')
		return (ft_prints_fd(argp, fd));
	else if (**format == 'p')
		return (ft_printp_fd(argp, fd));
	else if (**format == 'i' || **format == 'd')
		return (ft_printi_fd(argp, fd));
	else if (**format == 'u')
		return (ft_printu_fd(argp, fd));
	else if (**format == 'x')
		return (ft_printx_fd(argp, fd));
	else if (**format == 'X')
		return (ft_printbigx_fd(argp, fd));
	else if (**format == '%')
	{
		ft_putchar_fd(**format, 1);
		return (1);
	}
	else
	{
		(*format)--;
		return (0);
	}
	return (-1);
}
