/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:58:45 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/22 19:39:44 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s == 0)
		return (NULL);
	i = 0;
	str = ft_strnew(ft_strlen(s));
	if (str == 0)
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
