/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 23:08:47 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/29 21:27:34 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// // 
// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// 	char	str1[] = "test";
//         char	str2[] = "test";
//         str1[3] = 0;
// 	str2[3] = SCHAR_MIN;
//         printf("MY:%d\n",ft_strncmp(str1,str2,4));
//         printf("LIB:%d\n",ft_strncmp(str1,str2,4));
// }
