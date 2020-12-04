/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:36:13 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/04 13:17:19 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				x;
	unsigned char	to_find;

	to_find = (unsigned char)c;
	x = ft_strlen((char *)s);
	while (x >= 0)
	{
		if ((unsigned char)s[x] == to_find)
			return ((char *)&(s[x]));
		x--;
	}
	return (NULL);
}
