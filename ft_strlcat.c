/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:30:04 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 12:12:46 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strlcat() take the full size of the destination buffer and guarantee
NUL-termination if there is room. Note that room for the NUL should be included
in dstsize.
The ft_strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in practice
this should not happen as it means that either dstsize is incorrect or that dst
is not a proper string).
The ft_strlcat() returns the total length of the string it tried to create (the
initial length of dst plus the length of src).
If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*odst = dst;
	const char	*osrc = src;
	size_t		size;
	size_t		dstlen;

	size = dstsize;
	while (size-- != 0 && *dst != '\0')
		dst++;
	dstlen = dst - odst;
	size = dstsize - dstlen;
	if (size == 0)
		return (dstlen + ft_strlen(src));
	size--;
	while (*src)
	{
		if (size != 0)
		{
			*dst++ = *src;
			size--;
		}
		src++;
	}
	*dst = '\0';
	return (dstlen + (src - osrc));
}
