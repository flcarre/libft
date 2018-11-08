/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:07:38 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/08 15:55:19 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	unsigned int i;
	unsigned int j;
	unsigned int ret;

	i = 0;
	j = ft_strlen(dst);
	ret = ft_strlen(src);
	if (n == 0)
		return (0);
	if (n <= j)
		ret += n;
	else
		ret += j;
	while (src[i] && j < n - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ret);
}