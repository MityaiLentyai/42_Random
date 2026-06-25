/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:33:15 by username          #+#    #+#             */
/*   Updated: 2026/06/22 21:34:47 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function appends the NUL-terminated
string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes,
NUL-terminating the result.
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < dest_len)
		return (src_len + size);
	i = 0;
	while (i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
char a[11] = "1337 42";
char b[] = "Born to kill";
printf("%d\n",ft_strlcat(a,b,22));
printf("End string is: %s\n",a);
}*/
