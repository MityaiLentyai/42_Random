/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 00:18:59 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 02:57:34 by dzzayats         ###   ########.fr       */
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

int	less_than_zero(int n)
{
	int	len;

	n *= -1;
	len = 1;
	while ((n) > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	more_than_zero(int n)
{
	int	len;

	len = 0;
	while ((n) > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*toa(char *string, int n, int len, int is_minus)
{
	char	number;

	if (is_minus)
	{
		string[0] = '-';
		n *= -1;
		if (n == -2147483648)
		{
			string = ft_strdup("-2147483648\0");
			return (string);
		}
	}
	string[len] = '\0';
	while (len > 0 && n > 0)
	{
		len--;
		number = (char)((n % 10) + '0');
		(string[len]) = number;
		n /= 10;
	}
	return (string);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*string;

	if (n < 0)
	{
		len = less_than_zero(n);
		string = malloc((len + 1) * sizeof(char));
		string = toa(string, n, len, 1);
	}
	else if (n > 0)
	{
		len = more_than_zero(n);
		string = malloc((len + 1) * sizeof(char));
		string = toa(string, n, len, 0);
	}
	else if (n == 0)
	{
		string = malloc(2 * sizeof(char));
		string[0] = '0';
		string[1] = '\0';
	}
	return (string);
}

// #include <stdio.h>

//  int main()
// {
//       int a = 2147483648;
//       int n = ;
//     char * string = ft_itoa(a);
//     printf("%s",string);
// }