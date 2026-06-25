/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 23:13:01 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/18 09:16:11 by dzzayats         ###   ########.fr       */
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
int main(void)
{
	char *K_WORD = "jfeVZotSBxr4 TJ40jWuAfb snGJ8 473i1zOyRHfJT
	WJ3lqUmP1RYZB2 jNs9y1M3UCv OaqcGFNdD2HT4bCok";
	char *N_WORD = ft_strdup(K_WORD);
	printf("%s",N_WORD);
}*/
