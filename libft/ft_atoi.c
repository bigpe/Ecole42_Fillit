/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:44:39 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/27 19:17:31 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	long long int	neg;
	long long int	res;

	res = 0;
	neg = 1;
	while (*str == '\t' || *str == '\v' || *str == '\r'
			|| *str == '\n' || *str == ' ' || *str == '\f')
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if (*str == '+' && neg == 1)
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (res > 9223372036854775807 && neg == 1)
			return (-1);
		else if (res < -9223372036854775807 && neg == -1)
			return (0);
		res = (res * 10) + *str - '0';
		str++;
	}
	return (res * neg);
}
