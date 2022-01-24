/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:04:37 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 19:41:05 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_ispunct() checks for any printable character which is not a space or
an alphanu‐meric character.
*/
static int	ft_ispunct(int c)
{
	if (
		(c >= '!' && c <= '/')
		|| (c >= ':' && c <= '@')
		|| (c >= '[' && c <= '`')
		|| (c >= '{' && c <= '~')
	)
		return (1);
	return (0);
}

/*
The ft_isprint() function tests for any printing character including space.
*/
int	ft_isprint(int c)
{
	if (c == 32 || ft_ispunct(c) || ft_isalnum(c) || ft_isdigit(c))
		return (1);
	return (0);
}
