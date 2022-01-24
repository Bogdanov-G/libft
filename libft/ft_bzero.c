/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:52:48 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 11:50:56 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_bzero() function fills the first n bytes of the memory area pointed
to by s with the constant byte '\0'.
*/
void	ft_bzero(void *s, size_t n)
{
	const unsigned char	uc = '\0';
	unsigned char		*su;

	su = s;
	while (n-- > 0)
		*su++ = uc;
}
