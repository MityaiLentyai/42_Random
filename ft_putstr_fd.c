/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:14:25 by dzzayats          #+#    #+#             */
/*   Updated: 2026/07/01 04:17:07 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		write(fd, s + i, 1);
		i++;
	}
}

// int     main()
// {
//         char *a = "abcd";
//         ft_putstr_fd(a,1);
// }
