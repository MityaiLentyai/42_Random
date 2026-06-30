/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 20:09:46 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/29 22:14:59 by dzzayats         ###   ########.fr       */
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
		if (ptr_s[i] == (unsigned char)c)
			return (ptr_s + i);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char str[] = "ABCDEFG";
//     int c = 'B'+256;
//         printf ("String:%p\n",ft_memchr(str, c, 3));
//     return 0;
// }
