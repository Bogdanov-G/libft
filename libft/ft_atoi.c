/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:26:33 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 16:23:21 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_islower() function tests for any character that is a white-space 
characters (space (' '), form-feed ('\\f'),  newline  ('\\n'), carriage return
('\\r'), horizontal tab ('\\t'), and vertical tab ('\\v')) and returns 1 if
true, 0 otherwise.
*/
static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

/*
The space_skiper() skips white spaces and pick up leading +/- sign if any.
*/
static int	space_skiper(const char **nptr)
{
	int			neg;

	while (ft_isspace(**nptr))
		(*nptr)++;
	if (**nptr == '-')
	{
		neg = 1;
		(*nptr)++;
	}
	else
	{
		neg = 0;
		if (**nptr == '+')
			(*nptr)++;
	}
	return (neg);
}

/*
The ft_atoi() function converts the initial portion of the string pointed to
by nptr to int. The string may begin with an arbitrary amount of white space
(space (' '), form-feed ('\\f'),  newline  ('\\n'),  carriage  return ('\\r'),
horizontal tab ('\\t'), and vertical tab ('\\v')) followed by a single optional
'+' or '-' sign. The remainder  of  the string is converted to a int value in
the obvious manner, stopping at the first character which is not a valid digit
in  the decimal  base.
*/
int	ft_atoi(const char *nptr)
{
	int			neg;
	long		acc;

	acc = 0;
	neg = space_skiper(&nptr);
	while (ft_isdigit(*nptr))
	{
		acc *= 10;
		if (neg)
		{
			if (acc < -922337203685477580
				|| (acc == -922337203685477580 && ((*nptr) - '0') > 8))
				return (0);
			acc -= (*nptr) - '0';
		}
		else
		{
			if (acc > 922337203685477580
				|| (acc == 922337203685477580 && ((*nptr) - '0') > 7))
				return (-1);
			acc += (*nptr) - '0';
		}
		nptr++;
	}
	return ((int)acc);
}
