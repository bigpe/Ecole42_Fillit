/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 20:57:41 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/22 22:24:46 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	end;
	size_t	j;
	char	*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	end = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t')
		end--;
	if (i == ft_strlen(s))
		str = ft_strnew(1);
	else
		str = ft_strnew(end - i);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (i < end)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
