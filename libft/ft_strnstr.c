/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 21:11:22 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/23 23:25:24 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t check_len)
{
	char	*big_ptr;
	size_t	i;
	size_t	j;

	big_ptr = (char *)big;
	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (big_ptr);
	while (big_ptr[i] != '\0' && i < check_len)
	{
		j = 0;
		while (big_ptr[i + j] == little[j] && (i + j) < check_len)
		{
			j++;
			if ((little[j]) == '\0')
				return (&big_ptr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
     const char	*largestring = "Hello\0World";
     const char	*smallstring = "World";
     char *ptr;

     ptr = ft_strnstr(largestring,	smallstring, 11);
     printf("%s",ptr);
}*/
