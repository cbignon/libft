/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:36:13 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/04 15:48:33 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				x;

	x = ft_strlen((char *)s);
	while (x >= 0)
	{
		if ((unsigned char)s[x] == (unsigned char)c)
			return ((char *)&(s[x]));
		x--;
	}
	return (NULL);
}
