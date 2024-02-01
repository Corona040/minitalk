/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:33:42 by ecorona-          #+#    #+#             */
/*   Updated: 2024/01/09 10:44:23 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ARGS:
	lst: The beginning of the list.
RETURN VALUE:
	Last node of the list.
DESC:
	Returns the last node of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (lst);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}
