/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 22:06:46 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/24 22:12:22 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  0.1) Check if 1st char is a minus
//  0.2) if it is a minus, check if sec char is a digit
//  0.3) if it is not, or if 1st char is not a digit > instantly return (0)
//  1) Outer loop for all characters, if meets a number,
//     goes inside the inner loop.
//  2) Inner loop only for the string "numbers", writes them down
//      in a separate string until meets a non digit
//  3) Last loop iterates over the "Numbers" string to putnumbers 
//     in it via pow(10X) function.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
// int main(int argc, char **argv)
// {
//     if (argc!=2)
//     return 0;
//     printf("%d",ft_atoi(argv[1]));
// }
