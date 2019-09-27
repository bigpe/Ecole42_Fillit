/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_the_wall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:45:06 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:16:52 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_coord		ft_get_coords(char *buf)
{
	t_coord	coord;
	int		i;

	coord.co1 = 3;
	coord.co2 = 0;
	coord.co3 = 0;
	coord.co4 = 3;
	i = 0;
	while (buf[i])
	{
		if (buf[i] == '#')
		{
			if (i / 5 < coord.co1)
				coord.co1 = i / 5;
			if (i / 5 > coord.co3)
				coord.co3 = i / 5;
			if (i % 5 > coord.co2)
				coord.co2 = i % 5;
			if (i % 5 < coord.co4)
				coord.co4 = i % 5;
		}
		i++;
	}
	return (coord);
}

static t_tetr		*ft_init_tetr(char *buf)
{
	t_tetr		*new;
	t_coord		cds;
	int			i;
	static char	c = 'A';

	if (!(new = ft_memalloc(sizeof(t_tetr))))
		ft_error_handler(2);
	new->x = 0;
	new->y = 0;
	new->character = c++;
	new->next = NULL;
	cds = ft_get_coords(buf);
	new->width = cds.co2 - cds.co4 + 1;
	new->height = cds.co3 - cds.co1 + 1;
	if (!(new->map = (char **)malloc(new->height * sizeof(char *))))
		ft_error_handler(2);
	i = 0;
	while (i < new->height)
	{
		new->map[i] = ft_buf_to_tetr(buf,
				((cds.co1 + i) * 5 + cds.co4), new->width, new->character);
		i++;
	}
	return (new);
}

void				ft_build_the_wall(t_game *game, char *buf)
{
	t_tetr	*new;

	new = ft_init_tetr(buf);
	ft_backward_tetr(game, new);
}
