/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 20:09:46 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/23 20:12:53 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	size_t			i;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == c)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char str[] = "ABCDEFG";
    const int chars[] = {'D', 'd'};
    for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
    {
        const int c = chars[i];
        const char *ps = ft_memchr(str,c, strlen(str));
        ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
           : printf ("character '%c'(%i) not found %s\n", c, c,ps);
    }
    return 0;
}*/
