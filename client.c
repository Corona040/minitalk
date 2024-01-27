/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:06:05 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/27 22:41:31 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sigchar(pid_t pid, char c);
void	sigstr(pid_t pid, char *str);
void	append(char c);
void	charhandler(char *c, int *i);
void	sighandler(int sig);

static volatile t_server_status	g_server = {.connect = 0, .idx = 0, .msg_status = 1, .msg = NULL, .ack_msg = NULL, .load = 0};

int	main(int argc, char **argv)
{
	sigset_t			sa_mask;
	struct sigaction	sa;

	sigemptyset(&sa_mask);
	sigaddset(&sa_mask, SIGUSR1);
	sigaddset(&sa_mask, SIGUSR2);
	sa.sa_mask = sa_mask;
	sa.sa_handler = sighandler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	if (argc == 3)
	{
		g_server.msg = argv[2];
		sigstr((pid_t) ft_atoi(argv[1]), argv[2]);
		ft_printf("ACKNO.  MESSAGE: %s\n", g_server.ack_msg);
		free(g_server.ack_msg);
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
	ft_printf("CONNECT REQUEST: ");
	kill(pid, SIGUSR1);
	pause();
	while (*str)
		sigchar(pid, *str++);
	sigchar(pid, *str);
}

void	append(char c)
{
	char	*temp;

	temp = g_server.ack_msg;
	g_server.ack_msg = ft_calloc(g_server.idx + 2, sizeof(char));
	if (!g_server.ack_msg)
	{
		free(temp);
		exit(EXIT_FAILURE);
	}
	if (temp)
	{
		ft_memcpy(g_server.ack_msg, temp, g_server.idx + 1);
		free(temp);
	}
	g_server.ack_msg[g_server.idx] = c;
}

void	charhandler(char *c, int *i)
{
	append(*c);
	if (!*c && g_server.msg_status)
		ft_printf("OK!\n");
	if (g_server.msg[g_server.idx] != g_server.ack_msg[g_server.idx])
	{
		ft_printf("KO! - ACKNO. MSG DIFFERENT!\n");
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
	
	if (!g_server.connect && sig == SIGUSR2)
	{
		ft_printf("KO - BUSY SERVER!\n");
		exit(EXIT_SUCCESS);
	}
	else if (!g_server.connect)
	{
		ft_printf("OK!\nSENDING MESSAGE: ");
		g_server.connect = 1;
	}
	else
	{
		if (sig == SIGUSR1)
			c |= (1 << i);
		i++;
		if (i % 8 == 0)
			charhandler(&c, &i);
	 }
}
