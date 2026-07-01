/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 03:41:20 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/27 15:12:41 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_striteri
// Prototype void ft_striteri(char * s, void(*f)(unsigned int,
// 		char *));
// Parameters	s : The string to iterate over.
// f : The function to apply to each character.
// Return Value None
// External Function None
// Description Applies the	function ’ f ’ to each character of the
// string passed as argument, passing its index as
// the first argument.Each character is passed by
// address to ’ f ’ so it can be modified if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			i;
	const size_t	len = ft_strlen(s);

	i = 0;
	while (i < len)
	{
		f((unsigned int) i, s);
		i++;
	}
}

// void	addOne(unsigned int count, char *c)
// {
// 	c[count] += 1;
// }
// #include <stdio.h>

// int	main(void)
// {
// 	char	string[] =
// 	{
// 		"ABCD"
// 	};
// 	ft_striteri(string, addOne);
// 	printf("%s", string);
// }
