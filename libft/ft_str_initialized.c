/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_initialized.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:44:51 by lrorscha          #+#    #+#             */
/*   Updated: 2019/08/18 19:45:07 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_initialized(size_t size, char c)
{
	char		*str;
	size_t		i;

	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	else
	{
		i = 0;
		while (i < size)
			str[i++] = c;
		str[i] = 0;
		return (str);
	}
}
