/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 23:20:06 by username          #+#    #+#             */
/*   Updated: 2026/06/29 19:02:02 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
