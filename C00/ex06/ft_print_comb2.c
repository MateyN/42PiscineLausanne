/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:23:36 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/12 19:35:42 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	nb1;
	char	nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 < 99)
	{
		ft_print(nb1 / 10 + '0');
		ft_print(nb1 % 10 + '0');
		ft_print(' ');
		ft_print(nb2 / 10 + '0');
		ft_print(nb2 % 10 + '0');
		if (nb1 < 98)
		{
			write(1, ", ", 2);
		}
		if (++nb2 > 99)
		{
			nb2 = ++nb1 + 1;
		}
	}
}
