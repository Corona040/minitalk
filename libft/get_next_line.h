/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:26:53 by ecorona-          #+#    #+#             */
/*   Updated: 2023/12/19 19:59:51 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		ft_strchr(char *str, int c);
int		ft_strcpy(char *dest, char *src, int start, int size);
char	*read_buf(char *buf, int *loop);
void	write_buf(char *buf, int start, int end);
char	*read_fd(int fd, char *buf, char *line, int *loop);
char	*ft_strjoin(char *str1, char *str2);
void	*ft_free(void *ptr);
void	*ft_calloc(int size);
int		end_of_file(int read_size, int *loop, char *line);

#endif
