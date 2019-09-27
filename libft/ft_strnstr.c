/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 03:03:17 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 20:49:10 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *st, size_t size)
{
	size_t		i;
	size_t		j;

	if (*st == '\0')
		return ((char*)src);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		j = 0;
		while (st[j] != '\0')
		{
			if (i + j >= size || src[i + j] != st[j])
				break ;
			j++;
		}
		if (st[j] == '\0')
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
