/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzzayats <dzzayats@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 07:54:56 by username          #+#    #+#             */
/*   Updated: 2026/06/22 21:34:28 by dzzayats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	is_printable;

	is_printable = 1;
	if (c < 32 || c > 126)
	{
		is_printable = 0;
	}
	return (is_printable);
}
