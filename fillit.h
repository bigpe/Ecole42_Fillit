/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 17:44:27 by lrorscha          #+#    #+#             */
/*   Updated: 2019/09/26 21:10:05 by lrorscha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct		s_coord
{
	int co1;
	int co2;
	int co3;
	int co4;
}					t_coord;

typedef struct		s_tetr
{
	int				x;
	int				y;
	int				width;
	int				height;
	char			**map;
	char			character;
	struct s_tetr	*next;
}					t_tetr;

typedef struct		s_game
{
	t_tetr		*tetr;
	int			nb_tetr;
	int			size;
	char		**map;
}					t_game;

void				ft_print_map(t_game *game);
void				ft_error_handler(int c);
int					ft_file_read(t_game *game, char *file);
int					ft_init_game(t_game *game, char *file);
void				ft_build_the_wall(t_game *game, char *buf);
void				ft_backward_tetr(t_game *game, t_tetr *tetr);
void				ft_solver(t_game *game);
char				*ft_buf_to_tetr(char const *s, unsigned int start,
						size_t len, char l);

#endif
