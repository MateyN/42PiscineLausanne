/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 18:39:33 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/21 19:09:18 by mnikolov         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (! ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int	n;
	int	count;

	n = 1;
	count = 0;
	while (count < 5)
	{
		n = ft_find_next_prime(n);
		printf("prime = %d\n", n);
		n++;
		count++;
	}
}
*/
