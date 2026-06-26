/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 20:33:16 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 02:40:36 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters s1: The string to be trimmed.
set: The string containing the set of characters
to be removed.
Return Value The trimmed string.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char	*substr;
	size_t	set_iterator;
	size_t	string_iterator;

	if ((!s1) || (!set))
		return (NULL);
	
	string_iterator = 0;
	while (s1[string_iterator] && ft_strchr(s1,(char)set[set_iterator]))
	{
		string_iterator++;
	}
	*(s1+string_iterator);
	string_iterator = ft_strlen(s1);
	while (string_iterator > 0 && ft_strchr(s1,(char)set[set_iterator]))
	{
		string_iterator++;
	}
	return (substr);
}

// #include <stdio.h>

// int main()
// {
// 	char *s1 = Alma materal;


// }
