/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 22:07:56 by lrorscha          #+#    #+#             */
/*   Updated: 2019/06/28 22:07:58 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	if (s == NULL)
		return (NULL);
	ss = ft_strnew(len);
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (len--)
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}
