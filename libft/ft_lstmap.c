/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 19:29:56 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 16:43:01 by Dykk Dessie      ###   ########.fr       */
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
			ft_lstadd_back(&new_lst, f(lst->content));
			if (del && lst->content)
				del(lst->content);
		}
		lst = lst->next;
	}
	return (new_lst);
}