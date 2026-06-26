/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/25 20:33:16 by dzzayats         #+#    #+#              */
/*   Updated: 2026/06/26 21:52:46 by dzzayats        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters s1: The string to be trimmed.
set: The string containing the set of characters
to be removed.
Return Value The trimmed string.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	is_set(const char c, const char *set)
{
	int	i;
	int	is_set;

	is_set = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			is_set = 1;
		i++;
	}
	return (is_set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_set(s1[end - 1], set))
		end--;
	ret = malloc(end - start + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < (end - start))
	{
		ret[i] = s1[start + i];
		i++;
	}
	ret[end - start] = '\0';
	return (ret);
}

// static void print_trim_test(char const * s1,
// 	char const	*set, char const *expected)
// {
// 	char		*result;
// 	const char	*s1_text = s1 ? s1 : "(null)";
// 	const char	*set_text = set ? set : "(null)";
// 	const char	*expected_text = expected ? expected : "(null)";

// 	result = ft_strtrim(s1, set);
// 	if (result)
// 	{
// 		printf("s1=%s, set=%s => result=%s, expected=%s\n",
// 			s1_text, set_text, result, expected_text);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("s1=%s, set=%s => result=(null), expected=%s\n",
// 			s1_text, set_text, expected_text);
// 	}
// }

// int	main(void)
// {
// 	print_trim_test("abcba", "ca", "bcb");
// 	print_trim_test("   hello   ", " ", "hello");
// 	print_trim_test("xxxabcxxx", "x", "abc");
// 	print_trim_test("abc", "", "abc");
// 	print_trim_test("", "abc", "");
// 	print_trim_test("aaaa", "a", "");
// 	print_trim_test("abc", "xyz", "abc");
// 	print_trim_test("   abc   ", " abc", "");
// 	print_trim_test("abacaba", "ab", "c");
// 	print_trim_test("  \t  test\n  ", " \t\n", "test");
// 	print_trim_test(NULL, "abc", NULL);
// 	print_trim_test("abc", NULL, NULL);
// 	return (0);
// }
