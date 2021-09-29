/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:12:31 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:44:47 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dup;
	int		len;
	int		x;

	str = (char *)s;
	len = ft_strlen(str);
	x = 0;
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (!(dup))
		return (NULL);
	while (x < len)
	{
		dup[x] = str[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
