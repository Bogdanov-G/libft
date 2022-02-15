/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <ddessie@student.21-school.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:00:19 by gleb              #+#    #+#             */
/*   Updated: 2022/02/15 14:14:00 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> /* malloc */
#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new node. The member variable ’content’
is initialized with the value of the parameter ’content’. The variable ’next’
is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*nn;

	nn = malloc(sizeof(t_list));
	if (!nn)
		return (NULL);
	nn->content = content;
	nn->next = NULL;
	return (nn);
}
