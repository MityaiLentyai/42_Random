/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 01:50:48 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/26 01:50:48 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	i;
	void	*array;
	char	*ptr;

	if (nelem == 0 || elsize == 0)
		return (malloc(1));
	if ((nelem != 0) && (elsize > (size_t) - 1 / nelem))
		return (NULL);
	array = malloc(nelem * elsize);
	if (!array)
		return (NULL);
	ptr = (char *) array;
	i = 0;
	while (i < nelem * elsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (array);
}

// int	main(void)
// {
// 	int	*my_arr = ft_calloc(2150483666, sizeof(int));
// 	int	*lib_arr = calloc(2150483666, sizeof(int));
// 	int	i = 0;

// 	printf("My array:");
// 	while (i < 5)
// 	{
// 		printf("%d", my_arr[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("\nLib arry:");
// 	while (i < 5)
// 	{
// 		printf("%d", lib_arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
