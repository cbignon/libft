/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:46:35 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:13:40 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		x;
	char		*dest_tmp;
	const char	*src_tmp;

	x = 0;
	dest_tmp = (char *)dest;
	src_tmp = (const char *)src;
	if (dest_tmp != NULL || src_tmp != NULL)
	{
		while (x < n)
		{
			dest_tmp[x] = src_tmp[x];
			x++;
		}
	}
	return (dest);
}
