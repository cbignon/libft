/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbignon <cbignon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:28:22 by cbignon           #+#    #+#             */
/*   Updated: 2021/09/29 10:26:59 by cbignon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	c_words;

	c_words = 0;
	while (s && *s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			c_words++;
		while (*s != c & *s != '\0')
			s++;
	}
	return (c_words);
}

static int	ft_word_len(char const *s, char c)
{
	int	w_len;

	w_len = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
		{
			w_len++;
			s++;
		}
		if (*s == c || *s == '\0')
			return (w_len);
	}
	return (w_len);
}

static void	*free_tab(char **tab, int j)
{
	int	x;

	x = 0;
	while (x < j)
	{
		free(tab[x]);
		x++;
	}
	free(tab);
	tab = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!(s) || !(tab))
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_words(s, c) && s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		k = 0;
		tab[j] = (char *)malloc(sizeof(char) * (ft_word_len(&s[i], c) + 1));
		if (!(tab[j]))
			return (free_tab(tab, j));
		while (s[i] != c && s[i] != '\0')
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
