/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 23:06:27 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 18:42:07 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int st;

	i = 0;
	st = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[st + i] = src[i];
		i++;
	}
	dst[st + i] = '\0';
	return (dst);
}
