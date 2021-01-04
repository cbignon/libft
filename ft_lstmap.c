/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:16:37 by cbignon           #+#    #+#             */
/*   Updated: 2021/01/04 12:57:31 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newhead;
	t_list	*elt;

	if (!lst || !f)
		return (NULL);
	newhead = NULL;
	while (lst)
	{
		if (!(elt = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newhead, del);
			return (NULL);
		}
		ft_lstadd_back(&newhead, elt);
		lst = lst->next;
	}
	return (newhead);
}
