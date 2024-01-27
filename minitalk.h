/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:59:25 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/27 22:36:28 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_dynamic_array
{
	char	*msg;
	size_t	idx;
	pid_t	pid;
}	t_dynamic_array;

typedef struct s_server_status
{
	int		connect;
	size_t	idx;
	int		msg_status;
	char	*msg;
	char	*ack_msg;
	float	load;
}	t_server_status;

#endif
