/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:01:34 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/23 13:21:26 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strnstr() function locates the first occurrence of the null-terminated
string s2 in the string s1, where not more than n characters are searched.
Characters that appear after a `\0' character are not searched.
*/
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char	*sc1;
	const char	*sc2;
	const char	*os1 = s1;

	if (*s2 == '\0')
		return ((char *)s1);
	s1 = ft_strchr(s1, *s2);
	while (s1 && (long unsigned)(s1 - os1) < n)
	{
		sc1 = s1;
		sc2 = s2;
		while (1)
		{
			if (*sc2 == '\0')
				return ((char *)s1);
			else if (*sc1 == '\0' || (long unsigned)(sc1 - os1) >= n
														|| *sc1 != *sc2)
				break ;
			sc2++;
			sc1++;
		}
		s1 = ft_strchr(s1 + 1, *s2);
	}
	return (NULL);
}
