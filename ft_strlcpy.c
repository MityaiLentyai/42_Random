/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:37:34 by username          #+#    #+#             */
/*   Updated: 2026/06/29 19:48:54 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src,long unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while ((i < size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int main()
{
char c = 'a';
printf("Isascii:%d\nisdigit:%d\nisalnum:%d\nisalpha:%d\nISlower%d\n
IsPunct:%d",isascii(c),isdigit(c),isalnum(c),
isalpha(c),islower(c),ispunct(c));

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define SRC "ABCD"
#define DST "CC"
#define SIZE 55

int main()
{
char *src= SRC;
char dst[SIZE] = DST;
//printf("Orig func:CopyString%s to %s=%s\n",SRC,dst,dst);
printf("Copy to %s from %s ends up in:",dst,src);
size_t a = strlcpy(dst,src,SIZE);
printf("%s\nSize:%ld",dst,a);
//printf("My func:String%s+String%s=%s\n",DST,SRC,ft_strlcpy(DST,SRC,SIZE);
}*/
