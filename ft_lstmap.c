/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 02:40:45 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 01:00:28 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tmp_node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		tmp_node = ft_lstnew(new_content);
		if (!tmp_node)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, tmp_node);
		lst = lst->next;
	}
	return (result);
}
