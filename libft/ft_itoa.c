/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 21:44:44 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/26 21:31:24 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char*res;
	int	neg;
	int	len;
	int	g;

	g = n;
	len = 1;
	neg = ft_isnegative(n);
	while (g /= 10)
		len++;
	res = ft_strnew(len + neg);
	if (res == NULL)
		return (NULL);
	while (len--)
	{
		if (neg)
			res[len + neg] = -(n % 10) + '0';
		else
			res[len + neg] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
