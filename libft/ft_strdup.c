/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:36:32 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/22 12:36:14 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
The ft_strdup() function returns a pointer to a new string which is a duplicate
of the string s. Memory for the new string is obtained  with  ft_malloc(),  and
can be freed with free().
*/
char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*s_copy;

	size = ft_strlen(s) + 1;
	s_copy = malloc(size);
	if (s_copy)
		(void)ft_memcpy(s_copy, s, size);
	return (s_copy);
}
