/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:52:48 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 12:17:06 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_memcmp()  function  compares  the  first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*su1 = s1;
	const unsigned char	*su2 = s2;
	int					ret;

	ret = 0;
	while (n-- > 0)
	{
		ret = *su1++ - *su2++;
		if (ret)
			break ;
	}
	return (ret);
}
