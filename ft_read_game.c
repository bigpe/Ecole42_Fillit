/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:57:40 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:11:16 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_valid_char(int c, int i)
{
	if (c == '.' || c == '#'
		|| ((c == '\n') && ((i % 5 == 4) || (i == 20))))
		return (1);
	return (0);
}

static int		ft_check_valid_tetr(char *buf, int i)
{
	int res;

	if (i == 19)
		return (0);
	res = 0;
	if (buf[i] == '#')
	{
		if (i > 0 && buf[i - 1] == '#')
			res++;
		if (i < 19 && buf[i + 1] == '#')
			res++;
		if (i >= 5 && buf[i - 5] == '#')
			res++;
		if (i <= 14 && buf[i + 5] == '#')
			res++;
	}
	return (res + ft_check_valid_tetr(buf, ++i));
}

static int		ft_check_tetr(char *buf)
{
	int i;
	int cell;
	int first_cell;
	int res;

	i = 0;
	cell = 0;
	while (buf[i] && ft_valid_char(buf[i], i) && cell <= 4)
	{
		if (buf[i] == '#')
		{
			cell++;
			if (cell == 1)
				first_cell = i;
		}
		i++;
	}
	if (i >= 20 && !buf[i] && cell == 4
		&& (res = ft_check_valid_tetr(buf, first_cell))
		&& (res == 6 || res == 8))
		return (1);
	else
		ft_error_handler(2);
	return (0);
}

int				ft_file_read(t_game *game, char *file)
{
	int		fd;
	int		ret;
	int		lastret;
	char	buf[22];

	ret = 0;
	lastret = 0;
	if ((fd = open(file, O_RDONLY)) < 0)
		ft_error_handler(2);
	while ((ret = read(fd, buf, 21)) > 0)
	{
		lastret = ret;
		buf[ret] = '\0';
		if (ret >= 20 && ft_check_tetr(buf))
			ft_build_the_wall(game, buf);
		else
			ft_error_handler(2);
	}
	if (ret <= 0 && (lastret == 21 || !lastret))
		ft_error_handler(2);
	return (1);
}
