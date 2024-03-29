/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:38:33 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:44:13 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*to_allocate;

	to_allocate = malloc(size * number);
	if (!(to_allocate))
		return (NULL);
	ft_bzero(to_allocate, size * number);
	return (to_allocate);
}
