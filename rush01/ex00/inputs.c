/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmontaur <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 20:58:50 by gmontaur          #+#    #+#             */
/*   Updated: 2021/07/17 20:58:55 by gmontaur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include "ft_fonctions.h"

bool	ft_is_bounded(unsigned char *input, unsigned char nb)
{
	unsigned char	i;
	unsigned char	val;

	i = 0;
	while (i < nb)
	{
		val = input[i] + input [i + nb];
		if (val > nb + 1 || val < 1 + 2)
			return (0);
		++i;
	}
	i = 2 * nb - 1;
	while (i < nb)
	{
		val = input[i] + input [i + nb];
		if (val > nb + 1 || val < 1 + 2)
			return (0);
		++i;
	}
	return (1);
}

bool	ft_bouds_are_once(unsigned char *input, unsigned char nb)
{
	unsigned char	max_counter;
	unsigned char	min_counter;
	unsigned char	i;
	unsigned char	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		max_counter = 0;
		min_counter = 0;
		while (i < nb)
		{
			if (input[i + j * nb] == nb)
				++max_counter;
			else if (input[i + j * nb] == 1)
				++min_counter;
			++i;
		}
		if (max_counter > 1 || min_counter > 1)
			return (0);
		++j;
	}
	return (1);
}

unsigned char	*ft_validate_inputs_splits(char *str)
{
	unsigned char	*input;
	unsigned char	size;

	input = 0;
	size = ft_input_size(str);
	if (size != 0)
		input = ft_split_inputs(str, size);
	else
		return (0);
	if (input == 0)
		return (0);
	if (!ft_is_bounded(input, size) || !ft_bouds_are_once(input, size))
		return (0);
	return (input);
}

unsigned char	ft_input_size(char *str)
{
	unsigned char	nb;
	bool			is_nb;

	nb = 0;
	is_nb = 1;
	while (*str != '\0')
	{
		if (*str <= '9' && *str >= '1' && is_nb)
		{
			is_nb = 0;
			++nb;
		}
		else if (*str == ' ' && is_nb == 0)
			is_nb = 1;
		else
			return (0);
		++str;
	}
	if (nb % 4 != 0)
		return (0);
	return (nb / 4);
}

unsigned char	*ft_split_inputs(char *str, unsigned char nb)
{
	unsigned char	*input;
	unsigned char	*input_begin;
	unsigned char	counter;
	bool			is_nb;

	is_nb = 1;
	counter = 0;
	input = malloc(4 * nb * sizeof (unsigned char));
	input_begin = input;
	while (*str != '\0')
	{
		if (*str <= (nb + '0') && *str >= '1' && is_nb && counter < (4 * nb))
		{
			*input = *str - '0';
			is_nb = 0;
			++input;
			++counter;
		}
		else if (*str == ' ' && is_nb == 0 && counter < (4 * nb))
			is_nb = 1;
		else
			return (0);
		++str;
	}
	return (input_begin);
}
