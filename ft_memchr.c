/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jm-hamdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:21:46 by jm-hamdi          #+#    #+#             */
/*   Updated: 2021/11/05 18:21:52 by jm-hamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned int	i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n && s2[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)s2 + i);
}
