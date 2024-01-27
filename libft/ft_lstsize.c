/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:24 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/12 12:02:51 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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

	printf("%i\n", ft_lstsize(&c));
}
*/
