/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcube.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:51:00 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/14 22:05:34 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_getcube(char **line, int d, int c)
{
	char *res[50][7];
	int i;
	int f;
	
	i = 0;
	f = 0;
	res[c][d] = ft_strnew(ft_strlen(*line));
	ft_strcpy(res[c][d], *line);
	if (d == 3)
	{
		d = 0;
		while (res[c][d] != '\0')
		{
			i = 0;
			while (res[c][d][i] != '\0' && res[c][d][i] != '#')
				i++;
			if (res[c][d][i] == '#')
			{
				break;
			}
			d++;
		}
		f = ch_tetr(res[c], d, i);
		ft_putnbr(f);
		if (f == 6 || f == 8)
			ft_move(res[c]);
		else
			ft_putstr("BLYAAAAA\n");
		c++;
	}
	return (c);
}
