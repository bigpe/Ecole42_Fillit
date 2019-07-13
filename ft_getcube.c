/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcube.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:51:00 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/13 21:51:48 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int ft_getcube(char **line, int d, int c)
{
	char *res[50][7];


	if  (d == 0)
		printf("Block: %d:\n", c + 1);
	res[c][d] = ft_strnew(ft_strlen(*line));
	ft_strcpy(res[c][d], *line);
	if (d == 3)
	{
		ch_tetr(res[c]);
		c++;
	}
	return (c);
}
