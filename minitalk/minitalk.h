/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:59:25 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/28 21:39:56 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_client
{
	int		msg_status;
	char	*msg;
	size_t	idx;
	pid_t	pid;
}	t_client;

typedef struct s_server
{
	int		server_status;
	int		msg_status;
	int		ack_status;
	int		msg_size;
	char	*msg;
	char	*ack_msg;
	int		idx;
	pid_t	pid;
}	t_server;

#endif
