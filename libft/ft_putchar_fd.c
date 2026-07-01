/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putchar_fd.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/27 13:12:05 by dzzayats         #+#    #+#              */
/*   Updated: 2026/06/27 13:13:27 by dzzayats        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_putchar_fd
// Prototype void	ft_putchar_fd(char c, int fd);
// Files to	Submit -
// Parameters	c : The character to output.
// fd : The file descriptor on which to write.
// Return Value None
// External Function write
// Description Outputs the	character ’ c ’ to the specified file
// descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
