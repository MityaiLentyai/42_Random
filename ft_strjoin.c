/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 19:10:14 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 02:09:15 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Parameters 
// s1: The prefix string.
// s2: The suffix string.

// Return Value The new string.

// NULL if the allocation fails.

// External Function malloc
// Description Allocates memory (using malloc(3)) and returns a
// new string, which is the result of concatenating
// ’s1’ and ’s2’.

#include "libft.h"
#include <stdlib.h>

static char	*copy_suffix(char *dest, const char *src, size_t start)
{
	size_t	j;

	j = 0;
	while (src[j])
	{
		dest[start + j] = src[j];
		j++;
	}
	dest[start + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret_string;
	size_t	len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ret_string = malloc((len + 1) * sizeof(char));
	if (!ret_string)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ret_string[i] = s1[i];
		i++;
	}
	copy_suffix(ret_string, s2, i);
	return (ret_string);
}
// int main()
// {
// 	char * str1 = "";
// 	char * str2 = "NULL";
// 	printf("%s",ft_strjoin(str1,str2));
// 	// char * str3 = ft_strjoin(str1,str2);
// 	// printf("%s",str3);
// }