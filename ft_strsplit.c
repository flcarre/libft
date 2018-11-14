/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 09:51:14 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		size_wd(char const *str, int i, char c)
{
	int n;

	n = 0;
	while (str[i] != '\0' && str[i] == c)
		i++;
	while (str[i + n] != '\0' && str[i + n] != c)
		n++;
	return (n);
}

static int		word_count(char const *str, char c)
{
	int i;
	int n;

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

char	**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	unsigned int			n;
	char		**tab;

	i = 0;
	j = 0;
	n = 0;
	if (!s)
		return(NULL);
	if ((tab = malloc(word_count(s, c) * sizeof(char*))) == NULL)
		return(NULL);
	while (n < ft_strlen(s))
	{
		while (s[n] == c)
			n++;
		if ((tab[i] = malloc((size_wd(s, n, c)) * sizeof(char))) == NULL)
			return(NULL);
		while (s[n] != c && s[n])
			tab[i][j++] = s[n++];
		if (tab[i][0] != 0 && tab[i][0] != 1)
		{
			tab[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	tab[i] = 0;
	return (tab);
}
