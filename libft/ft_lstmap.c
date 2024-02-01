/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:03:38 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:47:05 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.
	del: The address of the function used to delete the content of a node \
	if needed.
RETURN VALUE:
	The new list.
	NULL if the allocation fails.
DESC:
	Iterates the list 'lst' and applies the function 'f' on the content of \
	each node. Creates a new list resulting of the successive application of \
	the function 'f'. The 'del' function is used to delete the content of a \
	node if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*new_content;

	head = 0;
	while (lst != 0)
	{
		new_content = f((void *)(lst->content));
		new = ft_lstnew(new_content);
		if (!new)
		{
			del(new_content);
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
