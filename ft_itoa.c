/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:20:49 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:46:16 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int				count;
	unsigned int	nb;

	if (n < 0)
	{
		nb = (unsigned)-(long)n;
		count = 2;
	}
	else
	{
		nb = n;
		count = 1;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*ntoa;
	int				end;

	end = ft_count_digit(n);
	ntoa = (char *)malloc(sizeof(char) * end + 1);
	if (!ntoa)
		return (NULL);
	ntoa[end] = '\0';
	num = n;
	if (n < 0)
		num = (unsigned)-(long)n;
	ntoa[--end] = num % 10 + '0';
	while (num >= 10)
	{
		num = num / 10;
		ntoa[--end] = num % 10 + '0';
	}
	if (n < 0)
		ntoa[--end] = '-';
	return (ntoa);
}
