/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:25:44 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/25 15:52:40 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)

{
	int	i;
	int	*range;

	range = NULL;
	if (min < max)
	{
		range = malloc(sizeof(*range) * (max - min));
		i = 0;
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
	}
	return (range);
}
/*
int	main(void) 
{
	int i;
 	int	min;
 	int	max;
 	int	*tab;
 
 	i = 0;
 	min = 3;
 	max = 8;
 	tab = ft_range(min, max);
	while ((min + i) < max)
		printf("%d\n", tab[i++]);
}
*/
