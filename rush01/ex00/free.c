/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:01:05 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/18 19:01:08 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonctions.h"

void	ft_free_tab(unsigned char **grid, unsigned char nb)
{
	unsigned char	i;

	i = 0;
	while (i < nb)
	{
		free(grid[i]);
		++i;
	}
	free(grid);
}

void	ft_free_game(t_game *game)
{
	free(game->empty_boxes);
	ft_free_tab(game->grid, game->nb);
}
