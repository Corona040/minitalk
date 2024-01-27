/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:33:42 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/12 12:25:00 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (lst);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

int main(void)
{
    t_list  b;
    t_list  c;
    int     bv = 2;
    int     cv = 3;

    b.next = &c;
    b.content = &bv;
    c.next = 0;
    c.content = &cv;

    printf("%i\n", *((int *)(ft_lstlast(&b)->content)));
}
*/
