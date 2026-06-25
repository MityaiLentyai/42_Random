/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 23:08:47 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/22 23:08:51 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// char s1[23] = "A0"; // edge cases
// char s2[55] = "A0001";
// printf("%d\n",strncmp(s2,s1,5));
// printf("%d\n",ft_strncmp(s2,s1,5));
// printf("SIZE OF S1: %lu\nSIZE OF S2: %lu\n",sizeof(s1),sizeof(s2));
// }
