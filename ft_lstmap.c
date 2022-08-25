/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:39:51 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/11/15 20:44:29 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*first;
	t_list	*work;

	if (lst && f)
	{
		first = ft_lstnew(f(lst->content));
		work = first;
		while (lst->next)
		{
			lst = lst->next;
			work->next = ft_lstnew(ft_strdup(f(lst->content)));
			if (work->next == NULL)
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			work = work->next;
		}
		return (first);
	}
	return (NULL);
}
