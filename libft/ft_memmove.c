/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:41:07 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 17:59:26 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t count)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d == s)
		return (dst);
	if (dst > src)
	{
		s = (unsigned char*)src + count - 1;
		d = dst + count - 1;
		while (count--)
			*d-- = *s--;
	}
	else
		while (count--)
			*d++ = *s++;
	return (dst);
}
