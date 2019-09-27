/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 18:51:18 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:45:42 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	int		st;

	st = ft_strlen(dst);
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[st + i] = src[i];
		i++;
	}
	dst[st + i] = '\0';
	return (dst);
}
