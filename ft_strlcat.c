/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 11:56:20 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:45:06 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	x;

	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
	x = 0;
	if (size <= destlen)
		return (size + srclen);
	if (size > destlen)
	{
		while (src[x] && destlen + x < size - 1)
		{
			dest[destlen + x] = src[x];
			x++;
		}
	}
	dest[destlen + x] = '\0';
	return (srclen + destlen);
}
