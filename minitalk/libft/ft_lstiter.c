/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:58:07 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:43:27 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.
RETURN VALUE:
	None.
DESC:
	Iterates the list 'lst' and applies the function 'f' on the content of \
	each node.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != 0)
	{
		f((void *)(lst->content));
		lst = lst->next;
	}
}
