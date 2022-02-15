/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <ddessie@student.21-school.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:08:47 by gleb              #+#    #+#             */
/*   Updated: 2022/02/15 14:13:54 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	new_lst = NULL;
	while (lst)
	{
		if (f)
		{
			ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
			if (del && lst->content)
				del(lst->content);
		}
		lst = lst->next;
	}
	return (new_lst);
}
