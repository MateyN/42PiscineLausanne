/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:19:59 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/17 20:20:01 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ft_fonctions.h"

void	ft_put_nb_grid(unsigned char i, unsigned char j,
			unsigned char nb_to_write, t_game *game)
{
	if (game->grid[i][j] == 0)
	{
		game->grid[i][j] = nb_to_write;
		game->empty_boxes[game->nb + i] -= 1;
		game->empty_boxes[j] -= 1;
	}
}

void	ft_found_one(unsigned char position, t_game *game)
{
	unsigned char	j;

	j = position;
	if (j < game->nb)
		ft_put_nb_grid(0, j, game->nb, game);
	else if (j < 2 * game->nb)
		ft_put_nb_grid(game->nb - 1, j % game->nb, game->nb, game);
	else if (j < 3 * game->nb)
		ft_put_nb_grid(j % game->nb, 0, game->nb, game);
	else if (j < 4 * game->nb)
		ft_put_nb_grid(j % game->nb, game->nb - 1, game->nb, game);
}

void	ft_found_nb(unsigned char j, t_game *game)
{
	unsigned char	i;
	unsigned char	value;
	bool			direction[4];

	i = -1;
	while (++i < 4)
		direction[i] = 0;
	i = 0;
	value = 1;
	direction[j / game->nb] = 1;
	while (value < game->nb + 1)
	{
		ft_put_nb_grid((direction[0] * i) + ((game->nb - 1 - i) * direction[1])
			+ (direction[2] * (j % game->nb)) + (direction[3] * (j % game->nb)),
			(j * direction[0]) + ((j % game->nb) * direction[1])
			+ (i * direction[2]) + ((game->nb - 1 - i) * direction[3]),
			value, game);
		++i;
		++value;
	}
}

void	ft_print_grid(unsigned char **grid, unsigned char nb)
{
	unsigned char	i;
	unsigned char	j;
	char			c;

	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			++j;
			if (j < nb)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		++i;
	}
}
