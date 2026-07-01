/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 17:07:36 by username          #+#    #+#             */
/*   Updated: 2026/06/29 17:15:48 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	byte;
	char	*ptr;

	byte = (char) c;
	ptr = (char *) s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = byte;
		i++;
	}
	return (s);
}

/*
#include <string.h>

int	main()
{
//	char c = 129;
//	printf("%d",c);

char buffer[6];
//	for (int i =0; i<3;i++)
//		buffer[i] = 'a';
ft_memset(buffer,'a',sizeof(char)*2);
ft_memset(buffer+3,'b',sizeof(char)*2);

for (int i =0; i<6;i++)
printf("%c", buffer[i]);
printf("\n%ld",sizeof(buffer));
}*/
