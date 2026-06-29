/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:24:33 by username          #+#    #+#             */
/*   Updated: 2026/06/29 01:44:07 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 		ft_strchr(set,)
//  The strchr() function returns a pointer to the first occurrence of the
//  character c in the string s.
//  The  strchr() and strrchr() functions return a pointer to the matched
//  character or NULL if the character is not found.  The terminating null
//  byte is considered part of the string, so that
//  if c is specified as '\0', these functions return
//  a pointer to the terminator.

char	*ft_strchr(const char *s, int c)
{
	const unsigned char	chara = (unsigned char)(c);
	int					i;

	i = 0;
	while (s[i])
	{
		if (s[i] == chara)
			return ((char *)(s + i));
		i++;
	}
	if (chara == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// #define STR "ABCD"
// #define LTR 'c'

// int main()
// {
// char * str = STR;
// printf("%p\n",strchr(str,LTR));
// printf("%p",ft_strchr(str,LTR));
// }
