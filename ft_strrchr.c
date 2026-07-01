/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 23:11:26 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/01 23:16:15 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//       The strrchr() function returns a pointer to the last 
//		 occurrence of the character c in the string s.
// AAAAAAAAAAAAAAAAbbbbbbbAAAAAcAAAAA'\0'

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)(ft_strlen(s));
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if ((s[i]) == (char)(c))
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
if (argc !=3)
return 1;
printf("ST func:%p\nMy func:%p\n",strrchr(argv[1],argv[2][0]),
ft_strrchr(argv[1],argv[2][0]));
}*/
