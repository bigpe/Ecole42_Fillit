/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 18:00:05 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/26 21:56:18 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t count)
{
	char *point;

	point = src;
	while (count > 0)
	{
		*point++ = c;
		count--;
	}
	return (src);
}
