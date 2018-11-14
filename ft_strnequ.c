/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:38:56 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/14 15:51:30 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int j;

	j = 0;
	if (s1 && s2)
	{
		if (ft_strlen((char *)s1) != ft_strlen((char *)s2))
			return (0);
		while (s1[j] && s2[j] && n)
		{
			if (s1[j] != s2[j])
				return (0);
			j++;
			n--;
		}
		return (1);
	}
	return (0);
}
