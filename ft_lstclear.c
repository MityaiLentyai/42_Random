/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 01:13:35 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 00:59:47 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del || !*lst)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;

// 	node1 = ft_lstnew(ft_strdup("hi"));
// 	node2 = ft_lstnew(ft_strdup("world"));
// 	node3 = ft_lstnew(ft_strdup("aga"));
// 	node1->next = node2;
// 	node2->next = node3;
// 	ft_lstclear(&node1, free);
// 	printf("%p\n", (void *)node1);
// 	return (0);
// }
