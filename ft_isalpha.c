/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 20:40:35 by username          #+#    #+#             */
/*   Updated: 2026/06/22 21:34:19 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
#define NUM -42430
//#define NUM 1

int main(void)
{
printf("My funcast_c:%d\n",ft_isalpha(NUM));
printf("Orig funcast_c:%d\n",isalpha(NUM));
return 0;
}*/
