/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 03:41:20 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/01 16:24:34 by dzzayats         ###   ########.fr       */
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
	size_t	i;
	const size_t	len = ft_strlen(s);

	i = 0;
	while (i < len)
	{
		f((unsigned int) i, s + i);
		i++;
	}
}
/*
void	compare(unsigned int count, char *c)
{
*c += count;
}
#include <stdio.h>

int	main(void)
{
char	string[] = "0000000000";

ft_striteri(string, compare);
printf("%s", string);
}*/
