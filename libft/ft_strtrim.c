/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:46:59 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 13:40:37 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strtrim() allocates (with malloc(3)) and returns a copy of ’s1’ with the
characters specified in ’set’ removed from the beginning and the end of the
string. Returns NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start_p;
	char	*end_p;
	char	*ret;
	char	*tmp;

	start_p = (char *)s1;
	while (start_p && *start_p != '\0' && ft_strchr(set, *start_p))
		start_p++;
	end_p = start_p;
	while (end_p && *end_p != '\0')
		end_p++;
	if (end_p)
		end_p--;
	while (end_p && end_p >= start_p && ft_strchr(set, *end_p))
		end_p--;
	ret = malloc(sizeof(char) * (end_p - start_p + 2));
	if (!ret)
		return (NULL);
	tmp = ret;
	while (start_p && end_p && start_p <= end_p)
		*tmp++ = *start_p++;
	*tmp = '\0';
	return (ret);
}
