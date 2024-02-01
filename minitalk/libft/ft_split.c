/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:29:54 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 11:15:38 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strchrnul(const char *s, int c);
static char		*ft_nstrchrnul(const char *s, int c);
static size_t	get_nmemb(const char *s, char c);
static char		**split_clear(char **split);

/*
ARGS:
	s: The string to be split.
	c: The delimiter character.
RETURN VALUE:
	The array of new strings resulting from the split.
	NULL if the allocation fails.
DESC:
	Allocates (with malloc(3)) and returns an array of strings obtained by \
	splitting 's' using the character 'c' as a delimiter. The array ends \
	with a NULL pointer.
*/
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
