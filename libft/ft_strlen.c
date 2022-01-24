/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:31:46 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 11:51:41 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The strlen() function calculates and  returns  (in bytes)  the  length  of  the
string pointed to by s, excluding the terminating null byte ('\0').
*/
size_t	ft_strlen(const char *s)
{
	char const	*tmp_ptr;

	tmp_ptr = s;
	while (*tmp_ptr != '\0')
		tmp_ptr ++;
	return (tmp_ptr - s);
}
