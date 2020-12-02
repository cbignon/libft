/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:37:02 by cbignon           #+#    #+#             */
/*   Updated: 2020/11/30 11:15:49 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*s_tmp;

	x = 0;
	s_tmp = (unsigned char*)s;
	while (x < n)
	{
		if (s_tmp[x] == (unsigned char)c)
			return ((void*)&(s_tmp[x]));
		x++;
	}
	return (NULL);
}
