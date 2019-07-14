/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrorscha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:55:01 by lrorscha          #+#    #+#             */
/*   Updated: 2019/07/14 18:58:39 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	char*line;
	int	fd;
	int	i;
	int d;
	int c;

	i = 1;
	c = 0;
	d = 0;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while (get_next_line(fd, &line) == 1)
		{
			if (line[0] != '\0')
			{
				c = ft_getcube(&line, d, c);
				d++;
				if (d == 4)
					d = 0;
			}
		}
		i++;
	}
	close(fd);
	return (0);
}
