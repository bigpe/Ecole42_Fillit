/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 22:13:17 by lrorscha          #+#    #+#             */
/*   Updated: 2019/05/06 19:06:16 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *src, int c)
{
	unsigned char *s;

	s = (unsigned char*)src;
	while (*s)
	{
		if (*s == c)
			return (char*)(s);
		s++;
	}
	if (*s == c)
		return (char*)(s);
	return (0);
}
