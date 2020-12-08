/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:34:24 by cbignon           #+#    #+#             */
/*   Updated: 2020/12/08 11:46:13 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (set && *set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_new_len(char const *s1, char const *set)
{
	int		to_cut;
	int		i;
	int		end;

	to_cut = 0;
	i = 0;
	end = ft_strlen((char*)s1) - 1;
	while (in_set(s1[i], set))
	{
		to_cut++;
		i++;
	}
	if (to_cut == end)
		return (0);
	while (in_set(s1[end], set))
	{
		to_cut++;
		end--;
	}
	if ((ft_strlen((char*)s1) <= to_cut))
		return (0);
	return ((ft_strlen((char*)s1) - to_cut));
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		newlen;
	int		i;
	int		j;
	char	*new_s;

	if (set == NULL || s1 == NULL)
		return (NULL);
	if (!(newlen = ft_new_len(s1, set)))
		ft_strdup(s1);
	if (!(new_s = malloc(sizeof(char) * newlen + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (in_set((char)s1[i], (char*)set))
		i++;
	while (j < newlen)
	{
		new_s[j] = s1[i];
		i++;
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
