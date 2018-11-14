/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 14:51:57 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_wd(char const *str, int i, char c)
{
	int				n;

	n = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i + n] != '\0' && str[i + n] != c)
		n++;
	return (n);
}

static int		word_count(char const *str, char c)
{
	int				i;
	int				n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || str[i - 1] == 0))
		{
			n++;
		}
		i++;
	}
	return (n + 1);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	*i;
	char			**tab;

	i = ft_memalloc(4);
	if (!s)
		return (NULL);
	if ((tab = malloc(word_count(s, c) * sizeof(char*))) == NULL)
		return (NULL);
	while (i[2] < ft_strlen(s))
	{
		while (s[i[2]] == c)
			i[2]++;
		if ((tab[i[0]] = malloc((size_wd(s, i[2], c)) * sizeof(char))) == NULL)
			return (NULL);
		while (s[i[2]] != c && s[i[2]])
			tab[i[0]][i[1]++] = s[i[2]++];
		if (tab[i[0]][0] != 0 && tab[i[0]][0] != 1)
		{
			tab[i[0]][i[1]] = '\0';
			i[0]++;
			i[1] = 0;
		}
	}
	tab[i[0]] = 0;
	return (tab);
}
