/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:42:01 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:36:18 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.
RETURN VALUE:
	None.
DESC:
	Adds the node 'new' at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != 0)
	{
		last = ft_lstlast(*lst);
		if (last == 0)
			*lst = new;
		else
			last->next = new;
	}
}
