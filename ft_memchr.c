/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:52:48 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 12:16:14 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_memchr() scans the initial n bytes of the memory area pointed to by s
for the first instance of c. Both c and the bytes of the memory area pointed
to by s are interpreted as unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	uc = c;
	const unsigned char	*su = s;

	while (n-- > 0)
	{
		if (*su == uc)
			return ((void *)su);
		su++;
	}
	return (NULL);
}
