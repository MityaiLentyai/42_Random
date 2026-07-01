/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 20:00:33 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 00:59:50 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstadd_front
// Prototype void	ft_lstadd_front(t_list **lst, t_list *new);
// Files to	Submit -
// Parameters	lst : The address of a pointer to the first node of
// a list.
// new : The address of a pointer to the node to be
// added.
// Return Value None
// External Function None
// Description Adds the	node ’ new ’ at the beginning of the list

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		new->next = lst.next;
	*lst = new;
}
