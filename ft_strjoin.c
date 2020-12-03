/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:58:48 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/03 11:24:18 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char		len1;
	unsigned char		len2;
	int					x;
	int					y;
	char				*big_s;

	len1 = (unsigned char)ft_strlen((char*)s1);
	len2 = (unsigned char)ft_strlen((char*)s2);
	if (!(big_s = (char*)malloc(sizeof(char) * (len1 + len2) + 1)))
		return (NULL);
	x = 0;
	while (x < len1)
	{
		big_s[x] = s1[x];
		x++;
	}
	y = 0;
	while (x < len2 + len1)
	{
		big_s[x] = s2[y];
		x++;
		y++;
	}
	big_s[x] = '\0';
	return (big_s);
}
