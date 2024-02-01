/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 23:18:42 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/26 12:47:29 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printf_fd(const char *format, va_list argp, int fd);
int		ft_call_print(const char **format, va_list argp, int fd);
size_t	ft_nbrlen(int n);
size_t	ft_unbrlen(unsigned int n);
size_t	ft_hexlen(unsigned int n);
size_t	ft_plen(long unsigned int n);
void	ft_putunbr_fd(unsigned int n, int fd);
int		ft_puthex_fd(int upper, unsigned int n, int fd);
int		ft_putp_fd(unsigned long int n, int fd);
int		ft_printc_fd(va_list argp, int fd);
int		ft_prints_fd(va_list argp, int fd);
int		ft_printp_fd(va_list argp, int fd);
int		ft_printi_fd(va_list argp, int fd);
int		ft_printu_fd(va_list argp, int fd);
int		ft_printx_fd(va_list argp, int fd);
int		ft_printbigx_fd(va_list argp, int fd);

#endif
