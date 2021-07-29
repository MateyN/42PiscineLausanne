/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_game.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:13:17 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/27 12:22:59 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_fonctions.h"

t_game	ft_make_game(unsigned char nb, unsigned char *input)
{
	t_game	A;

	A.nb = nb;
	A.input = input;
	A.empty_boxes = ft_make_empty_boxes(nb);
	A.grid = ft_init_tab(nb);
	return (A);
}

t_game	ft_copy_game(t_game *game)
{
	t_game	A;

	A.nb = game->nb;
	A.input = game->input;
	A.empty_boxes = ft_copy_empty_boxes(game->nb, game->empty_boxes);
	A.grid = ft_copy_tab(game->grid, game->nb);
	return (A);
}

unsigned char	*ft_copy_empty_boxes(unsigned char nb,
					unsigned char *empty_boxes)
{
	unsigned char	i;
	unsigned char	*A;

	A = 0;
	while (A == 0)
		A = malloc(2 * nb * sizeof (unsigned char));
	i = 0;
	while (i < 2 * nb)
	{
		A[i] = empty_boxes[i];
		++i;
	}
	return (A);
}

unsigned char	*ft_make_empty_boxes(unsigned char nb)
{
	unsigned char	i;
	unsigned char	*A;

	A = 0;
	while (A == 0)
		A = malloc(2 * nb * sizeof (unsigned char));
	i = 0;
	while (i < 2 * nb)
	{
		A[i] = nb;
		++i;
	}
	return (A);
}
