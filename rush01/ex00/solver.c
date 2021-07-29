/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 21:09:44 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/27 10:09:51 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"
#include <stdio.h>

//first thing is put numbers that are obious inside the grid
//then for non obious numbers, select line or column with less empty box
//try and put numbers in it until solve() == 1.
void	ft_obvious_solve(t_game *game)
{
	unsigned char	j;

	j = 0;
	while (j < 4 * game->nb)
	{
		if ((game->input)[j] == 1)
			ft_found_one(j, game);
		else if ((game->input)[j] == game->nb)
			ft_found_nb(j, game);
		++j;
	}
}

//implement me bitch with this param aswell unsigned char **solved
bool	ft_solve(t_game *game, unsigned char ***solved)
{
	unsigned char	i;
	unsigned char	col_i;
	unsigned char	line_i;
	bool			*decider;
	t_game			guess_game;

	i = -1;
	if (!ft_select_box(game, &line_i, &col_i))
	{
		if (ft_check_game(game))
		{
			*solved = ft_copy_tab(game->grid, game->nb);
			ft_print_grid(game->grid, game->nb);
			ft_free_game(game);
			return (1);
		}
		ft_free_game(game);
		return (0);
	}
	decider = malloc(game->nb * sizeof (bool));
	while (++i < game->nb)
		decider[i] = 0;
	if (compute_pos_nb(line_i, col_i, decider, game) == 0)
	{
		ft_free_game(game);
		return (0);
	}
	i = 0;
	while (i < game->nb)
	{
		if (decider[i] == 0)
		{
			guess_game = ft_copy_game(game);
			ft_put_nb_grid(line_i, col_i, i + 1, &guess_game);
			if (ft_solve(&guess_game, solved))
			{
				free(decider);
				return (1);
			}
		}
		++i;
	}
	ft_free_game(game);
	free(decider);
	return (0);
}
