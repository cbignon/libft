/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:53:01 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/02 13:23:44 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	char		*str;
	int			x;
	int			nb;
	int			minus;

	str = (char *)nptr;
	x = 0;
	nb = 0;
	minus = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			minus = minus * -1;
		x++;
	}
	while (ft_isdigit(str[x]) == 1)
	{
		nb = nb * 10 + (str[x] - '0');
		x++;
	}
	return (nb * minus);
}
