/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:07:50 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/02 15:34:44 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				x;
	unsigned char		*dest_tmp;
	unsigned char		*src_tmp;

	x = 0;
	dest_tmp = (unsigned char*)dest;
	src_tmp = (unsigned char*)src;
	while (x < n)
	{
		dest_tmp[x] = src_tmp[x];
		if (src_tmp[x] == (unsigned char)c)
			return ((void*)&(dest[x + 1]));
		x++;
	}
	return (NULL);
}
