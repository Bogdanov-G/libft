/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:36:42 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/24 21:13:30 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_substr() allocates (with malloc(3)) and returns a substring from the
string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.
Returns NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			s_len;
	size_t			n_len;
	unsigned int	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		n_len = 0;
	else
		n_len = ft_strlen(s + start);
	if (n_len > len)
		n_len = len;
	substr = malloc((n_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	substr[n_len] = '\0';
	i = 0;
	while (i < n_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
