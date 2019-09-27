/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:08:21 by lrorscha          #+#    #+#             */
/*   Updated: 2019/06/28 22:08:22 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s2;

	i = 0;
	while (s[i] != '\0')
		i++;
	s2 = (char *)malloc(sizeof(char) * i + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
