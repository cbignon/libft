/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:08 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:29:43 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			x;

	str = (char *)malloc(sizeof(char) * (unsigned char)len + 1);
	if (!s || !str)
		return (NULL);
	x = 0;
	if ((size_t)start < (ft_strlen((char *)s)))
	{
		while (x < len && s[start])
		{
			str[x] = s[start];
			start++;
			x++;
		}
	}
	str[x] = '\0';
	return (str);
}
