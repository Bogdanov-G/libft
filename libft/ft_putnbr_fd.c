/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:07:58 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/26 13:32:37 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/* The abs_val() returns an absolute value of the integer n as an unsigned
integer. */
static unsigned int	abs_val(int n)
{
	if (n >= 0)
		return (n);
	return ((n ^ (n >> 31)) + 1);
}

/*
The recursion_putter() recursivly outputs every digit (as a ASCII ecvivalent)
from the given unsigned integer un in the reversed order to the given file
descriptor.
*/
static void	recursion_putter(unsigned int un, int fd)
{
	char	c;

	if (un == 0)
		return ;
	recursion_putter(un / 10, fd);
	c = un % 10 + '0';
	ft_putchar_fd(c, fd);
}

/*
The ft_putnbr_fd() outputs the integer ’n’ to the given file descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = abs_val(n);
	}
	else
	{
		un = n;
	}
	recursion_putter(un, fd);
}
