/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:37:02 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:27:20 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*s_tmp;

	x = 0;
	s_tmp = (unsigned char *)s;
	while (x < n)
	{
		if (s_tmp[x] == (unsigned char)c)
			return ((void *)&(s_tmp[x]));
		x++;
	}
	return (NULL);
}
