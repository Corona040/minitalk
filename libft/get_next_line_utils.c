/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:28:07 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/19 19:33:53 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (c != 0 && str[i] == 0)
		i = -1;
	else if (c != 0 && str[i] == c)
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src, int start, int size)
{
	int	n;
	int	len_src;
	int	len_dest;

	len_src = ft_strchr(src, 0);
	len_dest = ft_strchr(dest, 0);
	if (size == 0 || start > len_dest)
		return (len_src);
	n = 0;
	while (n < size && *(src + n))
	{
		*(dest + start + n) = *(src + n);
		n++;
	}
	*(dest + start + n) = '\0';
	return (len_src);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		str1_len;
	int		str2_len;
	char	*join;

	str1_len = ft_strchr(str1, 0);
	str2_len = ft_strchr(str2, 0);
	join = ft_calloc(str1_len + str2_len + 1);
	ft_strcpy(join, str1, 0, str1_len);
	ft_strcpy(join, str2, str1_len, str2_len);
	return (join);
}

void	*ft_free(void *ptr)
{
	if (ptr)
		free(ptr);
	return (NULL);
}

void	*ft_calloc(int size)
{
	int		i;
	char	*ptr;

	ptr = malloc(size * sizeof(char));
	if (!ptr)
		return (ft_free(ptr));
	i = 0;
	while (i < size)
		ptr[i++] = '\0';
	return (ptr);
}
