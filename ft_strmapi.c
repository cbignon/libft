/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:55:38 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/14 16:49:38 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	int				len;
	char			*res;

	if (!s || !*s)
		return (NULL);
	len = ft_strlen((char*)s);
	if (!(res = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	x = 0;
	while (x < (unsigned)len)
	{
		res[x] = (*f)(x, (char)s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
