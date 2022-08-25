/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:55:23 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/11/27 01:55:27 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*q;

	p = *lst;
	if (!p)
		return ;
	while (p)
	{
		q = p;
		p = p->next;
		del(q->content);
		free(q);
	}
	*lst = NULL;
}
