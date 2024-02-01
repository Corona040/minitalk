/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:48:00 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:41:54 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The node to free.
	del: The address of the function used to delete the content.
RETURN VALUE:
	None.
DESC:
	Takes as a parameter a node and frees the memory of the node's content \
	using the function 'del' given as a parameter and free the node. The \
	memory of 'next' is not freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((void *)(lst->content));
	free(lst);
}
