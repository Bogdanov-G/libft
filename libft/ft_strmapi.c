/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:25:44 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/24 21:05:19 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strmapi() applies the function ’f’ to each character of the string ’s’
to create a new string (with malloc(3)) resulting from successive applications
of ’f’.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_maped;
	char	*tmp_ptr;

	if (!s)
		return (NULL);
	s_maped = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_maped)
		return (NULL);
	s_maped[ft_strlen(s)] = '\0';
	tmp_ptr = s_maped;
	if (*f)
	{
		while (*s != '\0')
		{
			*tmp_ptr = (*f)(tmp_ptr - s_maped, *s++);
			tmp_ptr++;
		}
	}
	else
	{
		while (*s != '\0')
			*tmp_ptr++ = *s++;
	}
	return (s_maped);
}
