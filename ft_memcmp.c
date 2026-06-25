/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 18:15:38 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/23 20:07:29 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ptr_s1;
	unsigned char		*ptr_s2;
	size_t				i;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>


int main(void)
{
    char a1[] = {'a','b','X'};
    char a2[sizeof a1] = {'a','b','G'};

   printf("My func: %d\n", ft_memcmp(a1, a2, 4));
   printf("Lib func: %d", memcmp(a1, a2, 4));
}*/
