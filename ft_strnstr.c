/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:10:07 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/01 18:29:52 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (s1 != NULL)
	{
		if (s2 == NULL || *s2 == '\0')
			return ((char*)s1);
		while (s1[x] != '\0')
		{
			if (s2[x + y] == s1[x + y])
			{
				while (n != 1)
					n--;
				if (s2[x] == '\0')
					return ((char*)s1 + y);	
				y++;
			}
			x++;
		}
	}
	return (NULL);
}
