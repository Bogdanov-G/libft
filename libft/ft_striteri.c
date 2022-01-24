/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:54:26 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/11/06 19:11:19 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_striteri() applies the function f to each character of the string passed
as argument, and passing its index as first argument. Each character is passed
by address to f to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*tmp_ptr;

	if (!s)
		return ;
	tmp_ptr = s;
	if (f)
	{
		while (*tmp_ptr != '\0')
		{
			f(tmp_ptr - s, tmp_ptr);
			tmp_ptr++;
		}
	}
	else
	{
		while (*tmp_ptr != '\0')
			tmp_ptr++;
	}
}
