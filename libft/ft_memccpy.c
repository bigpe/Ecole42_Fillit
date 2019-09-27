/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:28:47 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:05:37 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t count)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned char	c1;

	p1 = (unsigned char*)dst;
	p2 = (unsigned char*)src;
	c1 = c;
	while (count-- != 0)
	{
		if ((*p1++ = *p2++) == c1)
			return (p1);
	}
	return (0);
}
