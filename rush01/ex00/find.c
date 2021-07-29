/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:07:37 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/18 19:07:39 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

unsigned char	ft_find_zero_col(unsigned char col, t_game *game)
{
	unsigned char	i;

	i = 0;
	while (i < game->nb)
	{
		if (game->grid[i][col] == 0)
		{
			return (i);
		}
		++i;
	}
	return (-1);
}

unsigned char	ft_fzl(unsigned char line, t_game *game)
{
	unsigned char	i;

	i = 0;
	while (i < game->nb)
	{
		if (game->grid[line][i] == 0)
			return (i);
		++i;
	}
	return (-1);
}

unsigned char	compute_pos_nb(unsigned char i, unsigned char j,
					bool *decider, t_game *game)
{
	int				k;
	unsigned char	counter;

	k = -1;
	counter = 0;
	while (++k < game->nb)
	{
		if (game->grid[i][k] != 0)
		{
			decider[game->grid[i][k] - 1] = 1;
			++counter;
		}
	}
	k = -1;
	while (++k < game->nb)
	{
		if (game->grid[k][j] != 0)
		{
			decider[game->grid[k][j] - 1] = 1;
			++counter;
		}
	}
	return (counter);
}

bool	ft_select_box(t_game *game, unsigned char *line, unsigned char *col)
{
	unsigned char	tab[3];
	int				i;

	i = -1;
	while (++i < 3)
		tab[i] = 255;
	i = -1;
	while (++i < 2 * game->nb)
	{
		if (game->empty_boxes[i] < tab[0] && game->empty_boxes[i] != 0)
		{
			tab[0] = game->empty_boxes[i];
			tab[1] = i;
			tab[2] = 1;
		}
	}
	if (tab[2] == 1)
	{
		if (tab[1] < game->nb)
			ft_assign(ft_find_zero_col(*col, game), tab[1], line, col);
		else if (tab[1] != 255)
			ft_assign(tab[1] % game->nb, ft_fzl(*line, game), line, col);
		if (*line != 255 || *col != 255)
			return (1);
	}
	return (0);
}

void	ft_assign(unsigned char line, unsigned char col,
			unsigned char *line_ptr, unsigned char *col_ptr)
{
	*line_ptr = line;
	*col_ptr = col;
}
