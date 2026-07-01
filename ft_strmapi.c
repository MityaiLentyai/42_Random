/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 23:21:53 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 01:16:48 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_strmapi
// Prototype char * ft_strmapi(char const * s, char(*f)(unsigned
// 		int, char));
// Parameters	s : The string to iterate over.
// f : The function to apply to each character.
// Return Value The string created from the successive applications
// of ’ f ’.
// Returns NULL if the allocation	fails.
// External Function malloc
// Description Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second.A new
// string is created(using malloc(3)) to store the
// results from the successive applications of f.

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	param;
	char			*str;
	size_t			i;

	i = 0;
	param = 0;
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i])
	{
		str[i] = f(param, s[i]);
		i++;
	}
	return (str);
}

char	addOne(unsigned int count, char c)
{
	return (c + 1);
}
#include <stdio.h>

int	main(void)
{
	char	*string = "1234";

	printf("%s", ft_strmapi(string, addOne));
}
