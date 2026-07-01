/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 00:53:22 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/23 20:09:13 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_ptr;
	unsigned char		*dest_ptr;

	dest_ptr = dest;
	src_ptr = src;
	if (dest > src)
	{
		while (n > 0)
		{
			dest_ptr[n - 1] = src_ptr[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest_ptr);
}
/*
#include <string.h>

int main(void)
{       
    char test_memcpy[] = "ABCDE";
  //   Move "ABC" 1 slot to the right
    ft_memmove(test_memcpy + 1, test_memcpy, 3); 
    printf("memcpy result:  %s\n", test_memcpy);
 //    Expected: "AAAEE"

 //   char test_memmove[] = "ABCDE";
    // Move "ABC" 1 slot to the right
//	memmove(test_memmove+1, test_memmove, 3); 
//	printf("memmove result: %s\n", test_memmove);
    // Expected: "AABCE" 
	return 0;
}*/
