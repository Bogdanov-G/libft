/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:30:04 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 21:15:07 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strlcpy() takes the full size of the destination buffer and guarantee
NUL-termination if there is room. Note that room for the NUL should be included
in dstsize.
The ft_strlcpy() copies up to dstsize - 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.
The ft_strlcpy() returns the total length of the string it tried to create (the
length of src).
If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*osrc = src;
	size_t		size;

	size = dstsize;
	if (size != 0)
	{
		while (--size != 0)
		{
			*dst = *src;
			if (*dst == '\0')
				break ;
			dst++;
			src++;
		}
	}
	if (dstsize != 0)
		*dst = '\0';
	while (*src++)
		;
	return (src - osrc - 1);
}
