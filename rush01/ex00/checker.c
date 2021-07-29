/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:25:36 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/27 10:39:31 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

bool	ft_check_game(t_game *game)
{
	unsigned char	i;
	unsigned char	j;
	char			res;

	i = 0;
	j = 0;
	while (j < game->nb)
	{
		while (i < game->nb)
		{
			res = ft_check(i, j, game);
			if (res != 1)
				return (0);
			++i;
		}
		++j;
	}
	return (1);
}

char	ft_check(unsigned char line, unsigned char column, t_game *game)
{
	if (game->empty_boxes[column] != 0
		|| game->empty_boxes[line + game->nb] != 0 )
		return (-1);
	else if (game->empty_boxes[column] == 0
		&& game->empty_boxes[line + game->nb] == 0 )
	{
		if (!ft_check_line(line, game) || !ft_check_col(column, game))
			return (0);
		return (1);
	}
	return (0);
}

bool	ft_check_line(unsigned char line, t_game *game)
{
	unsigned char	tab[4];
	unsigned char	i;

	i = -1;
	while (++i < 4)
		tab[i] = 0;
	i = 0;
	while (i < game->nb)
	{
		if (game->grid[line][i] > tab[2])
		{
			tab[2] = game->grid[line][i];
			++tab[0];
		}
		if (game->grid[line][game->nb - i - 1] > tab[3])
		{
			tab[3] = game->grid[line][game->nb - i - 1];
			++tab[1];
		}
		++i;
	}
	if (tab[0] != game->input[2 * game->nb + line]
		|| tab[1] != game->input[3 * game->nb + line])
		return (0);
	return (1);
}

bool	ft_check_col(unsigned char col, t_game *game)
{
	unsigned char	tab[4];
	unsigned char	i;

	i = -1;
	while (++i < 4)
		tab[i] = 0;
	i = 0;
	while (i < game->nb)
	{
		if (game->grid[i][col] > tab[2])
		{
			tab[2] = game->grid[i][col];
			++tab[0];
		}
		if (game->grid[game->nb - i - 1][col] > tab[3])
		{
			tab[3] = game->grid[game->nb - i - 1][col];
			++tab[1];
		}
		++i;
	}
	if (tab[0] != game->input[col]
		|| tab[1] != game->input[game->nb + col])
		return (0);
	return (1);
}
