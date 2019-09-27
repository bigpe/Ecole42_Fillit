/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:59:24 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 19:21:16 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t count)
{
	unsigned char	*ss;
	size_t			i;

	i = 0;
	ss = (unsigned char*)str;
	while (i < count)
	{
		if (ss[i] == (unsigned char)c)
			return (ss + i);
		i++;
	}
	return (NULL);
}
