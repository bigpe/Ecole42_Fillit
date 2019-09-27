/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:52:06 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:36:39 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t count)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < count)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < count)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
