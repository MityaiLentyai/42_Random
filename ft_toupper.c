/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 23:10:59 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/29 23:37:26 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  If c is a lowercase letter, toupper() returns its uppercase equivalent,
   if an uppercase representation exists in the current locale.  Otherwise, 
   it  returns c. The toupper_l()  function performs the same task, but
   uses the locale referred to by the locale handle locale.
*/

#include "libft.h"

int	ft_toupper(int c)
{
        c = (unsigned char)(c);
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
#define LTR 'a'

int main()
{
	printf("%c",toupper(LTR));
}*/
