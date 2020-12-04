/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:16:25 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/04 12:40:37 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;
	int		end;

	x = 0;
	end = ft_strlen((char *)s);
	if (c == '\0')
		return ((char *)s + end);
	while (s[x])
	{
		if (s[x] == c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}
