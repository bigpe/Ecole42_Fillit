/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:44:41 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:51:50 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			*ft_buf_to_tetr(char const *s, unsigned int start,
					size_t len, char l)
{
	char			*res;
	unsigned int	i;

	if (!s)
		return (NULL);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (s[start + i] == '#')
			res[i] = l;
		else
			res[i] = s[start + i];
		i++;
	}
	return (res);
}

static int		ft_set_map(t_game *game, int size)
{
	int i;

	if (!(game->map = (char **)malloc(size * sizeof(char *))))
		return (0);
	i = 0;
	while (i < size)
	{
		if (!(game->map[i] = (char *)malloc(size * sizeof(char))))
			return (0);
		ft_memset(game->map[i++], '.', size);
	}
	return (1);
}

int				ft_init_game(t_game *game, char *file)
{
	int	size;

	size = 1;
	game->tetr = NULL;
	game->nb_tetr = 0;
	game->map = NULL;
	if (ft_file_read(game, file))
	{
		while (size * size < game->nb_tetr)
			size++;
		ft_set_map(game, 4 * game->nb_tetr);
		game->size = 2 * (size - 1);
		return (1);
	}
	return (0);
}
