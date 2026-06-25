/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:20:06 by username          #+#    #+#             */
/*   Updated: 2026/06/22 21:34:15 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_alpha;

	is_alpha = 1;
	if (c >= 0 && c < 65)
	{
		is_alpha = 0;
	}
	if (c > 90 && c < 97)
	{
		is_alpha = 0;
	}
	if (c > 122)
	{
		is_alpha = 0;
	}
	return (is_alpha);
}

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (ft_isalpha(c)))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
#define NUM 121

int main()
{
printf("Lib func:%d\n",isalnum(NUM));
printf("Lib func:%d\n",ft_isalnum(NUM));
}*/
