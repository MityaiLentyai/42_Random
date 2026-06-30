/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 13:14:25 by dzzayats          #+#    #+#             */
/*   Updated: 2026/06/29 23:29:43 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	const size_t len = ft_strlen(s);
        size_t  i = 0;
        
        while (i < len)
        {
                write(fd, s+i, 1);
                i++;
        }
}

// int     main()
// {
//         char *a = "abcd";
//         ft_putstr_fd(a,1);
// }
