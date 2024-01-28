/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:06:05 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/28 21:37:47 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdlib.h>

void	sigchar(pid_t pid, char c);
void	sigstr(pid_t pid, char *str);
void	charhandler(char *c, int *i);
void	sighandler(int sig);

static volatile t_server	g_server = {.msg_status = 1, .ack_status = 1};

int	main(int argc, char **argv)
{
	sigset_t			sa_mask;
	struct sigaction	sa;

	if (sigemptyset(&sa_mask) < 0 || sigaddset(&sa_mask, SIGUSR1) < 0 \
		|| sigaddset(&sa_mask, SIGUSR2) < 0)
	{
		ft_printf("SIGSET INIT FAILED!\n");
		return (0);
	}
	sa.sa_mask = sa_mask;
	sa.sa_handler = sighandler;
	if (sigaction(SIGUSR1, &sa, NULL) < 0 || sigaction(SIGUSR2, &sa, NULL) < 0)
	{
		ft_printf("SIGACTION FAILED!\n");
		return (0);
	}
	if (argc == 3)
	{
		g_server.msg = argv[2];
		g_server.msg_size = ft_strlen(g_server.msg);
		sigstr((pid_t) ft_atoi(argv[1]), argv[2]);
		free(g_server.ack_msg);
		if (g_server.msg_status)
			ft_printf("SUCCESS!\n");
	}
}

void	sigchar(pid_t pid, char c)
{
	int	i;

	i = 0;
	while ((unsigned int) i < sizeof(c) * 8)
	{
		if (c & (1 << i))
		{
			kill(pid, SIGUSR1);
			pause();
		}
		else
		{
			kill(pid, SIGUSR2);
			pause();
		}
		i++;
	}
}

void	sigstr(pid_t pid, char *str)
{
	g_server.pid = pid;
	kill(pid, SIGUSR1);
	pause();
	while (*str)
	{
		sigchar(pid, *str++);
	}
	sigchar(pid, *str);
	if (!g_server.msg_status && g_server.ack_status)
		ft_printf("ACK. MESSAGE: %s\n", g_server.ack_msg);
}

void	charhandler(char *c, int *i)
{
	if (!*c && g_server.idx != g_server.msg_size)
		exit(EXIT_SUCCESS);
	if (g_server.ack_status)
	{
		if (!g_server.ack_msg)
			g_server.ack_msg = ft_calloc(g_server.msg_size + 1, sizeof(char));
		if (!g_server.ack_msg)
			g_server.ack_status = 0;
		else
			g_server.ack_msg[g_server.idx] = *c;
	}
	if (g_server.msg[g_server.idx] != *c && g_server.msg_status)
	{
		ft_printf("ACK. MSG FAILED! (%i bit differ)\n", g_server.idx * 8 + *i);
		g_server.msg_status = 0;
	}
	g_server.idx++;
	*c = 0;
	*i = 0;
}

void	sighandler(int sig)
{
	static char	c;
	static int	i;

	if (!g_server.server_status && sig == SIGUSR2)
	{
		ft_printf("SERVER REQUEST FAILED!\n");
		exit(EXIT_SUCCESS);
	}
	else if (!g_server.server_status)
		g_server.server_status = 1;
	else
	{
		if (sig == SIGUSR1)
			c |= (1 << i);
		i++;
		if (i % 8 == 0)
		{
			if (!c && g_server.idx != g_server.msg_size)
			{
				ft_printf("SERVER_FAILED!\n");
				free(g_server.ack_msg);
			}
			charhandler(&c, &i);
		}
	}
}
