/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:18:20 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 02:02:52 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
	s: The original string from which to create the substring.
	start: The starting index of the substring within ’s’.
	len: The maximum length of the substring.
	
	Return Value The substring.
	NULL if the allocation fails.
*/
/*
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);	
	substr = malloc((len+1)*sizeof(char));
	if (!substr)
		return (NULL);
	i = len;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int main()
// {
// 	char *string = "ABCDE";
// 	unsigned int start = 0 ;
// 	size_t len = -2;	
// 	printf("%s", ft_substr(string, start, len));
// }
