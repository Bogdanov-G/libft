/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:52:48 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 14:42:24 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_memmove() function copies  n  bytes from memory area src to memory area
dst.  The memory  areas may overlap: copying takes place as though  the  bytes
in  src  are  first copied into a temporary array that does not overlap src or
dest, and the bytes are then copied from the temporary array to dest.
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_p;
	const char	*src_p;

	if (!dst && !src)
		return (NULL);
	if (src < dst && dst < src + n)
	{
		dst_p = dst + n;
		src_p = src + n;
		while (n-- > 0)
			*--dst_p = *--src_p;
	}
	else
	{
		dst_p = dst;
		src_p = src;
		while (n-- > 0)
			*dst_p++ = *src_p++;
	}
	return (dst);
}
