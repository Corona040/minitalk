/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:30:25 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/27 21:52:32 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	append(char c);
void	charhandler(char *c, int *i);
void	sighandler(int sig, siginfo_t *info, void *context);

static volatile t_dynamic_array	g_client = {.pid = 0, .msg = NULL, .idx = 0};

int	main(void)
{
	pid_t				pid;
	sigset_t			sa_mask;
	struct sigaction	sa;

	sigemptyset(&sa_mask);
	sigaddset(&sa_mask, SIGUSR1);
	sigaddset(&sa_mask, SIGUSR2);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_mask = sa_mask;
	sa.sa_sigaction = sighandler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	pid = getpid();
	ft_printf("%u\n", (unsigned int) pid);
	while (1)
		pause();
}

void	append(char c)
{
	char	*temp;

	temp = g_client.msg;
	g_client.msg = ft_calloc(g_client.idx + 2, sizeof(char));
	if (!g_client.msg)
	{
		free(temp);
		exit(EXIT_FAILURE);
	}
	if (temp)
	{
		ft_memcpy(g_client.msg, temp, g_client.idx + 1);
		free(temp);
	}
	g_client.msg[g_client.idx] = c;
}

void	charhandler(char *c, int *i)
{
	append(*c);
	g_client.idx++;
	if (!*c)
	{
		ft_printf("%s\n", g_client.msg);
		g_client.pid = 0;
		free(g_client.msg);
		g_client.msg = NULL;
		g_client.idx = 0;
	}
	*c = 0;
	*i = 0;
}

void	sighandler(int sig, siginfo_t *info, void *context)
{
	static char	c;
	static int	i;

	usleep(1);
	(void) context;
	if (g_client.pid && g_client.pid != info->si_pid)
		kill(info->si_pid, SIGUSR2);
	else if (!g_client.pid)
	{
		kill(info->si_pid, SIGUSR1);
		g_client.pid = info->si_pid;
	}
	else
	{
		if (sig == SIGUSR1)
		{
			c |= (1 << i);
			kill(info->si_pid, SIGUSR1);
		}
		else
			kill(info->si_pid, SIGUSR2);
		i++;
		if (i % 8 == 0)
			charhandler(&c, &i);
	}
}
