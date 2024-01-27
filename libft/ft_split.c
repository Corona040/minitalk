/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:29:54 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/14 10:41:44 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strchrnul(const char *s, int c)
{
	while (*s != c && *s)
		s++;
	return ((char *)s);
}

static char	*ft_nstrchrnul(const char *s, int c)
{
	while (*s == c && *s)
		s++;
	return ((char *)s);
}

static size_t	get_nmemb(const char *s, char c)
{
	size_t	nmemb;

	nmemb = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			nmemb++;
			while (*(s + 1) == c)
				s++;
		}
		s++;
	}
	if (*(s - 1) == c)
		nmemb--;
	return (nmemb + 1);
}

static char	**split_clear(char **split)
{
	size_t	i;

	if (split)
	{
		i = 0;
		while (*(split + i))
			free(*(split + i++));
		free(split);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*next;
	size_t	nmemb;
	size_t	i;

	if (!s)
		return (0);
	s = ft_nstrchrnul(s, c);
	nmemb = get_nmemb(s, c);
	if (*s == 0)
		nmemb = 0;
	split = ft_calloc(nmemb + 1, sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	while (*s && i < nmemb)
	{
		next = ft_strchrnul(s, c);
		split[i] = ft_substr(s, 0, next - s);
		if (!split[i++])
			return (split_clear(split));
		s = ft_nstrchrnul(next, c);
	}
	split[nmemb] = 0;
	return (split);
}

/*
#include <stdio.h>

void	putnchar(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *(str + i))
	{
		if (ft_isprint(*(str + i)))
			ft_putchar_fd(*(str + i++), 1);
		else
		{
			ft_putchar_fd('.', 1);
			i++;
		}
	}
	while (i < n)
	{
		if (ft_isprint(*(str + i)))
			ft_putchar_fd(*(str + i++), 1);
		else
		{
			ft_putchar_fd('.', 1);
			i++;
		}
	}
}

int	main(void)
{
	char *str = "12a,3--h^^^^";
	char c = '^';
	char **split;

	split = ft_split(str, c);
	printf("%p\n", *split);
	while (*split)
	{
		putnchar(*split++, 10);
		ft_putchar_fd('\n', 1);
	}
	printf("%p\n", *split);
}
*/
