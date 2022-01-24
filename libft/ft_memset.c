/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:52:48 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 11:51:23 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_memset() function fills the first n bytes of the memory area pointed
to by s with the constant byte c.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	const unsigned char	uc = c;
	unsigned char		*su;

	su = s;
	while (n-- > 0)
		*su++ = uc;
	return (s);
}
