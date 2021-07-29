/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:55:26 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/17 11:55:28 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include "ft_fonctions.h"

//... @IMPLEMENTATION NEEDED int argc, char *argv[]
int	main(int argc, char *argv[])
{
	unsigned char	size;
	unsigned char	*inputs;
	unsigned char	**solved;
	t_game			A;
	unsigned char	i;

	size = ft_input_size(argv[1]);
	inputs = ft_validate_inputs_splits(argv[1]);
	i = 0;
	A = ft_make_game(size, inputs);
	ft_obvious_solve(&A);
	if (!ft_solve(&A, &solved))
		printf("Error\n");
	return (0);
}
