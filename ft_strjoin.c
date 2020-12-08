/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:58:48 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/08 16:10:54 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		biglen;
	size_t		x;
	size_t		y;
	char		*big_s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	biglen = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	if (!(big_s = (char*)malloc(sizeof(char) * (biglen) + 1)))
		return (NULL);
	x = 0;
	while (x < ft_strlen((char*)s1))
	{
		big_s[x] = s1[x];
		x++;
	}
	y = 0;
	while (x < biglen)
	{
		big_s[x] = s2[y];
		x++;
		y++;
	}
	big_s[x] = '\0';
	return (big_s);
}
