#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;
	t_list	*tmp;

	if (!lst)
		return ;
	cur = *lst;
	while (cur)
	{
		if (cur->content)
			del(cur->content);
		tmp = cur;
		cur = cur->next;
		free(tmp);
	}
	*lst = (void *)(0);
}