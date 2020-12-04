/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:16:25 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/04 13:15:36 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;

	x = 0;
	while ((unsigned char)s[x] || c == '\0')
	{
		if (s[x] == c)
			return ((char *)s + x);
		x++;
	}
	return (NULL);
}
