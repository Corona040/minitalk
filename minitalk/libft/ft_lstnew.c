/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:00:30 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:48:46 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	content: The content to create the node with.
RETURN VALUE:
	 The new node.
DESC:
	Allocates (with malloc(3)) and returns a new node. The member variable \
	'content' is initialized with the value of the parameter 'content'. The \
	variable 'next' is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (!new)
		return (0);
	new->next = 0;
	new->content = content;
	return (new);
}
