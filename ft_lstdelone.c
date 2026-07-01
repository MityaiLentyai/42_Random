/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 00:39:59 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 01:00:08 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*node;
// 	char	*str;

// 	str = ft_strdup("Trash");
// 	node = ft_lstnew(str);
// 	ft_lstdelone(node, free);
// 	return (0);
// }
