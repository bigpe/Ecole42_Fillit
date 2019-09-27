/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:29:41 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:14:06 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char*)s1;
	src2 = (unsigned char*)s2;
	while (size--)
	{
		if (*src1++ != *src2++)
			return (src1[-1] - src2[-1]);
	}
	return (0);
}
