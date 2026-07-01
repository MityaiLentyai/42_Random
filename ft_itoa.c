/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:18:59 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/02 00:50:45 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//     Function Name
//        ft_itoa
//      Prototype
//   char *ft_itoa(int n);
//       Parameters
// n: The integer to convert.
//      Return Value
// The string representing the integer.
// NULL if the allocation fails.
// External Function
//malloc
// Description Allocates memory (using malloc(3)) and returns
// a string representing the integer received as an
// argument. Negative numbers must be handled.

#include <stdlib.h>
#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)

{
	char	*ascii;
	long	number;
	int		len;

	len = get_len(n);
	number = (long)(n);
	ascii = malloc(sizeof(char) * (len + 1));
	ascii[len] = '\0';
	if (number == 0)
		ascii[0] = '0';
	if (number < 0)
	{
		ascii[0] = '-';
		number *= -1;
	}
	while (number > 0)
	{
		ascii[--len] = (number % 10) + '0';
		number /= 10;
	}
	return (ascii);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		a = 1357;
// 	char	*string = ft_itoa(a);

// 	printf("%s", string);
// }
