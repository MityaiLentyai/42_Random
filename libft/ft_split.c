/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 00:28:16 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/29 18:07:46 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	string_counter(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*substr_alloc(char const *s, size_t len)
{
	char	*dst;

	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (len--)
		dst[len] = s[len];
	return (dst);
}

char	*get_string(char const *s, char c, size_t id)
{
	size_t	len;

	while (*s && id--)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
			s++;
	}
	while (*s && *s == c)
		s++;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (substr_alloc(s, len));
}

static int	freeman(char **r, char const *s, char c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		r[i] = get_string(s, c, i);
		if (!r[i])
		{
			while (i > 0)
			{
				i--;
				free(r[i]);
			}
			return (-1);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	size_t	count;

	if (!s)
		return (NULL);
	count = string_counter(s, c);
	r = malloc((count + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	if (freeman(r, s, c, count) == -1)
	{
		free(r);
		return (NULL);
	}
	r[count] = NULL;
	return (r);
}

// int	main(void)
// {
// 	char	**ab = ft_split("B;;;::B", ';');

// 	(void) ab;
// 	return (0);
// }
