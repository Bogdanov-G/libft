/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:25:58 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/23 08:31:32 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/* The dig_counter() returns the number of digits in the given integer n. In
case of negative n unary minus counts as additional digit. */
static int	dig_counter(int n)
{
	int	c;

	c = n <= 0;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

/* The abs_val() returns an absolute value of the integer n as an unsigned
integer. */
static unsigned int	abs_val(int n)
{
	if (n >= 0)
		return (n);
	return ((n ^ (n >> 31)) + 1);
}

/*
The ft_itoa() allocates (with malloc(3)) and returns a string representing
the integer received as an argument. Negative numbers will be handled as well.
*/
char	*ft_itoa(int n)
{
	char			*strn;
	int				dignum;
	unsigned int	un;

	dignum = dig_counter(n);
	strn = malloc(sizeof(char) * (dignum + 1));
	if (!strn)
		return (NULL);
	strn[0] = '-';
	strn[dignum] = '\0';
	un = abs_val(n);
	while (1)
	{
		strn[--dignum] = un % 10 + '0';
		un /= 10;
		if (un == 0)
			break ;
	}
	return (strn);
}
