/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:01:46 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/21 14:05:44 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)

{
	int	i;

	i = 1;
	while (i < 46341)
	{
		if (nb % i == 0 && ((i * i) == nb))
			return (i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("sqrt of %d is %d\n", 9, ft_sqrt(9));
}
*/
