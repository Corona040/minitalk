/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:30:25 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/29 14:36:32 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <stdlib.h>

void	append(char c);
void	sigprocess(int sig, siginfo_t *info, char *c, int *i);
void	charhandler(char *c, int *i);
void	sighandler(int sig, siginfo_t *info, void *context);

static volatile t_client	g_client = {.msg_status = 1};

int	main(void)
{
	pid_t				pid;
	sigset_t			sa_mask;
	struct sigaction	sa;

	if (sigemptyset(&sa_mask) < 0 || sigaddset(&sa_mask, SIGUSR1) < 0 \
		|| sigaddset(&sa_mask, SIGUSR2) < 0)
	{
		ft_printf("SIGSET INIT FAILED!\n");
		return (0);
	}
	sa.sa_flags = SA_SIGINFO;
	sa.sa_mask = sa_mask;
	sa.sa_sigaction = sighandler;
	if (sigaction(SIGUSR1, &sa, NULL) < 0 || sigaction(SIGUSR2, &sa, NULL) < 0)
	{
		ft_printf("SIGACTION FAILED!\n");
		return (0);
	}
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
		g_client.msg_status = 0;
		free(temp);
		temp = 0;
	}
	else
	{
		if (temp)
		{
			ft_memcpy(g_client.msg, temp, g_client.idx + 1);
			free(temp);
		}
		g_client.msg[g_client.idx] = c;
	}
}

void	sigprocess(int sig, siginfo_t *info, char *c, int *i)
{
	if (sig == SIGUSR1)
		*c |= (1 << *i);
	if (sig == SIGUSR1 && g_client.msg_status)
		kill(info->si_pid, SIGUSR1);
	if (sig == SIGUSR2 || !g_client.msg_status)
		kill(info->si_pid, SIGUSR2);
	(*i)++;
	if (*i % 8 == 0)
	{
		if (g_client.msg_status)
			charhandler(c, i);
		else
		{
			g_client.pid = 0;
			if (g_client.msg)
				free(g_client.msg);
			g_client.msg = NULL;
			g_client.idx = 0;
			g_client.msg_status = 1;
			*c = 0;
			charhandler(c, i);
		}
	}
}

void	charhandler(char *c, int *i)
{
	if (g_client.msg_status)
		append(*c);
	g_client.idx++;
	if (!*c)
	{
		if (g_client.msg_status)
			ft_printf("%s\n", g_client.msg);
		g_client.pid = 0;
		if (g_client.msg)
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
		if (g_client.msg_status)
			g_client.pid = info->si_pid;
	}
	else
		sigprocess(sig, info, &c, &i);
}
