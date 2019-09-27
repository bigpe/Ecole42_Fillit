/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:43:54 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:38:45 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_free_map(t_game *game)
{
	int	i;

	i = 0;
	if (game->map)
	{
		while (i < 4 * game->nb_tetr)
			free(game->map[i++]);
		free(game->map);
		game->map = NULL;
	}
}

void			ft_print_map(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	while (j < game->size)
	{
		i = 0;
		while (i < game->size)
			ft_putchar(game->map[j][i++]);
		ft_putchar('\n');
		j++;
	}
}

void			ft_backward_tetr(t_game *game, t_tetr *tetr)
{
	t_tetr		*lst_tetr;

	lst_tetr = game->tetr;
	if (!lst_tetr)
	{
		game->tetr = tetr;
		game->nb_tetr++;
		return ;
	}
	while (lst_tetr->next)
		lst_tetr = lst_tetr->next;
	lst_tetr->next = tetr;
	game->nb_tetr++;
}

void			ft_error_handler(int c)
{
	if (c == 1)
	{
		ft_putstr_fd("Wrong number of arguments\n", 1);
		ft_putstr_fd("Usage: ./fillit source_file\n", 1);
	}
	else if (c == 2)
		ft_putstr_fd("error\n", 1);
	exit(1);
}

int				main(int argc, char **argv)
{
	t_game		game;

	if (argc != 2)
	{
		ft_error_handler(1);
		return (0);
	}
	if (ft_init_game(&game, argv[1]))
	{
		ft_solver(&game);
		ft_print_map(&game);
		ft_free_map(&game);
	}
	else
		ft_error_handler(2);
	return (1);
}
