/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:30:24 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 13:35:50 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_strjoin() allocates (with malloc(3)) and returns a new string, which is
the result of the concatenation of ’s1’ and ’s2’. Returns NULL if the
allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*end_p1;
	char const	*end_p2;
	char		*ret;
	char		*tmp;

	end_p1 = s1;
	end_p2 = s2;
	while (end_p1 && *end_p1 != '\0')
		end_p1++;
	while (end_p2 && *end_p2 != '\0')
		end_p2++;
	ret = malloc(sizeof(char) * ((end_p1 - s1) + (end_p2 - s2) + 1));
	if (!ret)
		return (NULL);
	ret[(end_p1 - s1) + (end_p2 - s2)] = '\0';
	tmp = ret;
	while (s1 != end_p1)
		*tmp++ = *s1++;
	while (s2 != end_p2)
		*tmp++ = *s2++;
	return (ret);
}
