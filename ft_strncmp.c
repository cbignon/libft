/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:36:46 by cbignon           #+#    #+#             */
/*   Updated: 2021/01/04 15:28:20 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	x;

	x = 0;
	while (x < ((int)n - 1) && ((unsigned char)s1[x] == (unsigned char)s2[x])
		&& s1[x] && s2[x])
		x++;
	if (n)
		return ((unsigned char)s1[x] - (unsigned char)s2[x]);
	return (0);
}
