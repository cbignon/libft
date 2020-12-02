/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:35:44 by cbignon           #+#    #+#             */
/*   Updated: 2020/11/30 16:18:26 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*src_tmp;
	unsigned char	*dest_tmp;
	unsigned char	tmp[sizeof(char) * n];

	if ((!src && !dest) || n > (2 * 1024 * 1024))
		return (0);
	src_tmp = (unsigned char *)src;
	dest_tmp = (unsigned char *)dest;
	x = 0;
	while (x < n)
	{
		tmp[x] = src_tmp[x];
		x++;
	}
	x = 0;
	while (x < n)
	{
		dest_tmp[x] = tmp[x];
		x++;
	}
	return (dest);
}
