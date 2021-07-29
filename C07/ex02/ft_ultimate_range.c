/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 15:53:28 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/25 21:03:34 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)

{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
int	main(void)
{
 	int i;
 	int j;
 	int	min;
 	int	max;
 	int *tab;

 	i = 0;
 	min = -3;
 	max = 8;
 	j = ft_ultimate_range(&tab, min, max);
 	while (i < j)
 		printf("%d\n", tab[i++]);
}
*/
