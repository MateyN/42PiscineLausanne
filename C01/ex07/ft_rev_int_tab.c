/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:39:49 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/14 13:46:28 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	a;
	int	b;
	int	c;

	a = size - 1;
	b = 0;
	while (a >= (size / 2))
	{
		c = tab[a];
		tab[a] = tab[b];
		tab[b] = c;
		a--;
		b++;
	}
}
