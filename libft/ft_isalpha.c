/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:04:37 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 11:17:59 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_islower() function tests for any character that is a lowercase letter
and returns 1 if true, 0 otherwise.
*/
static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/*
The ft_isupper() function tests for any character that is a uppercase letter
and returns 1 if true, 0 otherwise.
*/
static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

/*
The ft_isalpha() checks for an alphabetic character; in the standard "C"
locale,  it  is equivalent  to  (isupper(c) || islower(c)).
*/
int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
		return (1);
	return (0);
}
