/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 21:35:46 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/01 22:07:05 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstnew
// Prototype t_list *ft_lstnew(void *content);
// Files to Submit -
// Parameters content: The content to store in the new node.
// Return Value A pointer to the new node
// External Function malloc
// Description Allocates memory (using malloc(3)) and returns
// a new node. The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = calloc(sizeof(t_list), 1);
	if (!head)
		return (NULL);
	head->content = content;
	return (head);
}

// int	main(void)
// {
// 	int		a = 5;
// 	t_list	*first = ft_lstnew(&a);

// 	printf("%p", first->content);
        
// }
