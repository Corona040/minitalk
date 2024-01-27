/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:16:18 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/14 08:27:07 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <unistd.h>

int	main(void)
{
	for (int i = 0; i < 0xFF; i++)
	{
		ft_putchar_fd(i, 2);
		//printf("\t%c\t%i\n", i, i);
	}
}
*/
