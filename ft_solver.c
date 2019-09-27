/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 19:57:08 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:11:26 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_map_revert(t_game *game, t_tetr *tetr, int w, int h)
{
	int i;
	int j;

	j = 0;
	w = (h > 0 ? tetr->width - 1 : w);
	while (j <= h)
	{
		i = 0;
		while (i <= w)
		{
			if (game->map[tetr->y + j][tetr->x + i] == tetr->character)
				game->map[tetr->y + j][tetr->x + i] = '.';
			i++;
		}
		j++;
	}
	return (0);
}

static int		ft_add_to_map(t_game *game, t_tetr *tetr)
{
	int	i;
	int	j;
	int	ready;

	j = 0;
	ready = 1;
	if (game->map[tetr->y][tetr->x] != '.' && tetr->map[0][0] != '.')
		return (0);
	while (ready && j < tetr->height)
	{
		i = 0;
		while (ready && i < tetr->width)
		{
			if (game->map[tetr->y + j][tetr->x + i] != '.'
					&& tetr->map[j][i] != '.')
				ready = 0;
			else if (game->map[tetr->y + j][tetr->x + i] == '.')
				game->map[tetr->y + j][tetr->x + i] = tetr->map[j][i];
			i = (ready) ? i + 1 : i;
		}
		j = (ready) ? j + 1 : j;
	}
	if (ready)
		return (1);
	return (ft_map_revert(game, tetr, i, j));
}

static int		ft_dont_overlay(t_game *game, t_tetr *pc)
{
	if (!pc)
		return (1);
	pc->x = 0;
	pc->y = 0;
	while (pc->y + pc->height <= game->size)
	{
		pc->x = 0;
		while (pc->x + pc->width <= game->size)
		{
			if (ft_add_to_map(game, pc))
			{
				if (ft_dont_overlay(game, pc->next))
					return (1);
				else
					ft_map_revert(game, pc, pc->width - 1, pc->height - 1);
			}
			pc->x++;
		}
		pc->y++;
	}
	return (0);
}

void			ft_solver(t_game *game)
{
	int j;

	while (!ft_dont_overlay(game, game->tetr))
	{
		game->size++;
		j = 0;
		while (j < game->size)
			ft_memset(game->map[j++], '.', game->size);
	}
}
