/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:34:53 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 00:07:07 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	unsigned int i;

	i = 0;
	while (*(s1 + i) && *(s1 + i) == *(s2 + i) && i < size - 1)
		i++;
	if (size)
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	return (0);
}
