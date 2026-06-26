/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 23:13:01 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 02:25:50 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[len] != 0)
		len++;
	dst = malloc((len + 1) * (sizeof(char)));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char *K_WORD = "-2147483648";
	char *N_WORD = ft_strdup(K_WORD);
	printf("%s",N_WORD);
}
*/