/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:21:38 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/23 10:59:03 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strchr() function returns a pointer to the first occurrence of the
character c in the string s.
Here "character" means "byte"; these function do not work with wide or
multibyte characters.
*/
char	*ft_strchr(const char *s, int c)
{
	const char	cc = c;

	while (*s != cc)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
