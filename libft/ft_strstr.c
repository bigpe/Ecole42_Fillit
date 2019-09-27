/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 01:54:08 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/15 02:18:12 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *st)
{
	char	*sp1;
	char	*sp2;
	int		i;
	int		j;

	sp1 = (char*)src;
	sp2 = (char*)st;
	if (*sp2 == '\0')
		return (sp1);
	i = 0;
	while (sp1[i] != '\0')
	{
		j = 0;
		while (sp2[j] == sp1[j + i])
		{
			if (sp2[j + 1] == '\0')
				return (sp1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
