/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:11:39 by ecorona-          #+#    #+#             */
/*   Updated: 2023/10/12 12:39:50 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != 0)
	{
		new->next = (*lst);
		*lst = new;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*lst;
	t_list	b;
	t_list	c;
	int		bv = 2;
	int		cv = 3;

	b.next = &c;
	b.content = &bv;
	c.next = 0;
	c.content = &cv;

	lst = &b;
	t_list	*i;
	i = lst;
	while (i->next != 0)
	{
		printf("%i\n", *((int *)(i->content)));
		i = i->next;
	}
	printf("%i\n\n", *((int *)(i->content)));

	t_list	a;
	int		av = 1;

	a.content = &av;
	ft_lstadd_front(&lst, &a);
	i = lst;
	while (i->next != 0)
	{
		printf("%i\n", *((int *)(i->content)));
		i = i->next;
	}
	printf("%i\n", *((int *)(i->content)));
}
*/
