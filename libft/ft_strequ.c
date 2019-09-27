/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 22:06:11 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/26 23:15:05 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int res;

	if (s1 == NULL || s2 == NULL)
		return (0);
	res = ft_strcmp(s1, s2);
	if (res == 0)
		return (1);
	return (0);
}
