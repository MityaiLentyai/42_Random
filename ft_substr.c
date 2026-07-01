/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 18:18:20 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/01 22:08:13 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t real_len;
        char	*substr;

         real_len= ft_strlen(s);
	if (real_len - start > len)
		real_len = len;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(real_len + 1);
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, real_len + 1);
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
//      char   *str = ft_strdup("0123456789");
//        char  *s = ft_substr(str, 9, 10);
// 	printf("%s", s);
//         free(s);
//         free(str);
// }
