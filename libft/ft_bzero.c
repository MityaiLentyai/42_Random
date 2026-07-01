/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 18:49:53 by username          #+#    #+#             */
/*   Updated: 2026/06/29 19:33:40 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *) s;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = '\0';
		i++;
	}
}
/*
#include <string.h>

int	main()
{
//	char c = 129;
//	printf("%d",c);

char buffer[6]= "ABCDEF";
//	for (int i =0; i<3;i++)
//		buffer[i] = 'a';
ft_bzero(buffer,sizeof(char)*2);
ft_bzero(buffer+3,sizeof(char)*2);

for (int i =0; i<6;i++)
printf("%c", buffer[i]);
printf("\n%ld",sizeof(buffer));
}*/
