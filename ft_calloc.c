/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:09:32 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/11/06 11:44:37 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = malloc(num * size);
	if (str == 0)
		return (0);
	while (i < num * size)
	{
		((char *)str)[i] = 0;
		i++;
	}
	return (str);
}
