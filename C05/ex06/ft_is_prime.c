/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:52:23 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/21 18:53:28 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)

{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb && i < 46341)
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
