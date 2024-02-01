/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:50:39 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:40:13 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The address of a pointer to a node.
	del: The address of the function used to delete the content of the node.
RETURN VALUE:
	None.
DESC:
	Deletes and frees the given node and every successor of that node, using \
	the function 'del' and free(3).
	Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != 0)
	{
		temp = (*lst);
		(*lst) = (*lst)->next;
		ft_lstdelone(temp, del);
	}
}
