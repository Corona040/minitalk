/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:42:01 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/13 10:20:21 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
#include <stdio.h>

int main(void)
{
    t_list  *lst;
    t_list  b;
    t_list  c;
    int     bv = 2;
    int     cv = 3;

    b.next = &c;
    b.content = &bv;
    c.next = 0;
    c.content = &cv;

    lst = &b;
    t_list  *i;
    i = lst;
    while (i->next != 0)
    {
        printf("%i\n", *((int *)(i->content)));
        i = i->next;
    }
    printf("%i\n\n", *((int *)(i->content)));

    t_list  a;
    int     av = 1;

	a.next = 0;
    a.content = &av;
    ft_lstadd_back(&lst, &a);
    i = lst;
    while (i->next != 0)
    {
        printf("%i\n", *((int *)(i->content)));
        i = i->next;
    }
    printf("%i\n", *((int *)(i->content)));
}
*/
