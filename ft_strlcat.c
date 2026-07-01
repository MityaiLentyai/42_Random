/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:33:15 by username          #+#    #+#             */
/*   Updated: 2026/07/01 05:21:23 by dzzayats         ###   ########.fr       */
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
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		dest[dest_len] = '\0';
		return (src_len + size);
	}
	if (size == 0)
		return (dest_len + src_len);
	i = 0;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
		if (i >= size)
			return (dest_len);
	}
	if (size > 0)
		dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>

void	ft_print_result(int n)
{
	char	c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, const char *argv[])
{
	char	*dest;
	char	*arr = "lorem ipsum dolor sit amet";

	dest = malloc(sizeof(char) * 15);
	ft_memset(dest, 0, 15);
	dest[10] = 'a';
	printf("%ld\n%s", ft_strlcat(dest, arr, 6), dest);
	// printf("%s", ft_strlcat(dest, arr, 5));
	return (0);
}
