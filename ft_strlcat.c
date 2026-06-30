/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:33:15 by username          #+#    #+#             */
/*   Updated: 2026/06/30 02:04:32 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function appends the NUL-terminated
string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			i;
	const size_t	dest_len = ft_strlen(dest);
	const size_t	src_len = ft_strlen(src);

	if (size <= dest_len)
	{
		dest[dest_len] = '\0';
		return (src_len + size);
	}
        if (size == 0)
		return (dest_len+src_len);
	i = 0;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
		if (i >= size)
			return(dest_len) ;
	}
	if (size > 0)
		dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int	main(void)

// {
// 	char	dest[30];
// 	char	dest_lib[30];
// 	char	*src = (char *)"AAAAAAAAA";

// 	// --- Case 1 ---
// 	memset(dest, 0, 30); dest[0] = 'B';
// 	memset(dest_lib, 0, 30); dest_lib[0] = 'B';
// 	printf("Case 1 Return: %lu\n", (unsigned long)ft_strlcat(dest, src, 0));
// 	printf("Case 1 String: %s\n", dest);
// 	printf("Case 1 Lib Return: %lu\n", (unsigned long)strlcat(dest_lib, src, 0));
// 	printf("Case 1 Lib String: %s\n\n", dest_lib);
// 	memset(dest, 0, 30);
// 	dest[0] = 'B';
// 	memset(dest_lib, 0, 30);
// 	dest_lib[0] = 'B';
// 	printf("Case 2 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 1));
// 	printf("Case 2 String: %s\n", dest);
// 	printf("Case 2 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 1));
// 	printf("Case 2 Lib String: %s\n\n", dest_lib);
// 	// --- Case 3 ---
// 	memset(dest, 0, 30);
// 	memset(dest, 'B', 4);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, 'B', 4);
// 	printf("Case 3 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 3));
// 	printf("Case 3 String: %s\n", dest);
// 	printf("Case 3 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 3));
// 	printf("Case 3 Lib String: %s\n\n", dest_lib);
// 	// --- Case 4 ---
// 	memset(dest, 0, 30);
// 	memset(dest, 'B', 4);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, 'B', 4);
// 	printf("Case 4 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 6));
// 	printf("Case 4 String: %s\n", dest);
// 	printf("Case 4 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 6));
// 	printf("Case 4 Lib String: %s\n\n", dest_lib);
// 	// --- Case 5 ---
// 	memset(dest, 0, 30);
// 	memset(dest, 'C', 5);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, 'C', 5);
// 	printf("Case 5 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, -1));
// 	printf("Case 5 String: %s\n", dest);
// 	printf("Case 5 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, -1));
// 	printf("Case 5 Lib String: %s\n\n", dest_lib);
// 	// --- Case 6 ---
// 	memset(dest, 0, 30);
// 	memset(dest, 'C', 15);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, 'C', 15);
// 	printf("Case 6 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 17));
// 	printf("Case 6 String: %s\n", dest);
// 	printf("Case 6 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 17));
// 	printf("Case 6 Lib String: %s\n\n", dest_lib);
// 	// --- Case 7 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 7 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 1));
// 	printf("Case 7 String: %s\n", dest);
// 	printf("Case 7 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 1));
// 	printf("Case 7 Lib String: %s\n\n", dest_lib);
// 	// --- Case 8 ---
// 	memset(dest, 0, 30);
// 	memset(dest, '1', 10);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, '1', 10);
// 	printf("Case 8 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 5));
// 	printf("Case 8 String: %s\n", dest);
// 	printf("Case 8 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 5));
// 	printf("Case 8 Lib String: %s\n\n", dest_lib);
// 	// --- Case 9 ---
// 	memset(dest, 0, 30);
// 	memset(dest, '1', 10);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, '1', 10);
// 	printf("Case 9 Return: %lu\n", (unsigned long) ft_strlcat(dest, src, 5));
// 	printf("Case 9 String: %s\n", dest);
// 	printf("Case 9 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, src, 5));
// 	printf("Case 9 Lib String: %s\n\n", dest_lib);
// 	// --- Case 10 ---
// 	memset(dest, 0, 30);
// 	memset(dest, '1', 10);
// 	memset(dest_lib, 0, 30);
// 	memset(dest_lib, '1', 10);
// 	printf("Case 10 Return: %lu\n", (unsigned long) ft_strlcat(dest, "", 15));
// 	printf("Case 10 String: %s\n", dest);
// 	printf("Case 10 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "", 15));
// 	printf("Case 10 Lib String: %s\n\n", dest_lib);
// 	// --- Case 11 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 11 Return: %lu\n", (unsigned long) ft_strlcat(dest, "", 42));
// 	printf("Case 11 String: %s\n", dest);
// 	printf("Case 11 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "", 42));
// 	printf("Case 11 Lib String: %s\n\n", dest_lib);
// 	// --- Case 12 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 12 Return: %lu\n", (unsigned long) ft_strlcat(dest, "", 0));
// 	printf("Case 12 String: %s\n", dest);
// 	printf("Case 12 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "", 0));
// 	printf("Case 12 Lib String: %s\n\n", dest_lib);
// 	// --- Case 13 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 13 Return: %lu\n", (unsigned long) ft_strlcat(dest, "123", 1));
// 	printf("Case 13 String: %s\n", dest);
// 	printf("Case 13 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "123", 1));
// 	printf("Case 13 Lib String: %s\n\n", dest_lib);
// 	// --- Case 14 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 14 Return: %lu\n", (unsigned long) ft_strlcat(dest, "123", 2));
// 	printf("Case 14 String: %s\n", dest);
// 	printf("Case 14 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "123", 2));
// 	printf("Case 14 Lib String: %s\n\n", dest_lib);
// 	// --- Case 15 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 15 Return: %lu\n", (unsigned long) ft_strlcat(dest, "123", 3));
// 	printf("Case 15 String: %s\n", dest);
// 	printf("Case 15 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "123", 3));
// 	printf("Case 15 Lib String: %s\n\n", dest_lib);
// 	// --- Case 16 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 16 Return: %lu\n", (unsigned long) ft_strlcat(dest, "123", 4));
// 	printf("Case 16 String: %s\n", dest);
// 	printf("Case 16 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "123", 4));
// 	printf("Case 16 Lib String: %s\n\n", dest_lib);
// 	// --- Case 17 ---
// 	memset(dest, 0, 30);
// 	memset(dest_lib, 0, 30);
// 	printf("Case 17 Return: %lu\n", (unsigned long) ft_strlcat(dest, "123", 0));
// 	printf("Case 17 String: %s\n", dest);
// 	printf("Case 17 Lib Return: %lu\n", (unsigned long) strlcat(dest_lib, "123", 0));
// 	printf("Case 17 Lib String: %s\n\n", dest_lib);
// 	return (0);
// }
