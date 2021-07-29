/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 19:54:55 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/27 10:39:15 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_fonctions.h"

unsigned char	**ft_init_tab(unsigned char nb)
{
	unsigned char	**tab;
	unsigned char	i;
	unsigned char	j;

	i = 0;
	tab = malloc(nb * sizeof (unsigned char *));
	while (i < nb)
	{
		tab[i] = malloc(nb * sizeof (unsigned char));
		++i;
	}
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			tab[i][j] = 0;
			++j;
		}
		++i;
	}
	return (tab);
}

unsigned char	**ft_copy_tab(unsigned char **grid, unsigned char nb)
{
	unsigned char	**tab;
	unsigned char	i;
	unsigned char	j;

	i = -1;
	tab = malloc(nb * sizeof (unsigned char *));
	while (++i < nb)
		tab[i] = malloc(nb * sizeof (unsigned char));
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			if (grid[i][j] != 0)
				tab[i][j] = grid[i][j];
			else
				tab[i][j] = 0;
			++j;
		}
		++i;
	}
	return (tab);
}
