/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:21:38 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/23 08:13:53 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strrchr() function returns a pointer to the last occurrence of the
character c in the string s.
Here "character" means "byte"; these function do not work with wide or
multibyte characters.
*/
char	*ft_strrchr(const char *s, int c)
{
	const char	cc = c;
	const char	*sc;

	sc = NULL;
	while (1)
	{
		if (*s == cc)
			sc = s;
		if (!*s)
			break ;
		s++;
	}
	return ((char *)sc);
}
