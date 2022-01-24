/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 09:45:18 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/11/06 09:32:11 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The ft_calloc() function allocates memory for an array of nmemb elements of size
bytes each and returns a pointer to the allocated memory.  The memory  is set to
zero.
If  nmemb  or size  is 0, then calloc() returns either NULL, or a unique pointer
value that can later be successfully passed to free().
If the multiplication  of  nmemb and size would result in integer overflow, then
the calloc() returns an error. By contrast, an integer overflow would not be
detected  in the following call to malloc(), with the result that an incorrectly
sized block of memory would be allocated:
		malloc(nmemb * size);
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && ((size_t)(-1) / nmemb < size))
		return (NULL);
	size *= nmemb;
	ptr = malloc(size);
	if (ptr)
		ft_memset(ptr, 0, size);
	return (ptr);
}
