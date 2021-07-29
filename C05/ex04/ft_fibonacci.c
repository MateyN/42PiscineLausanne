/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 19:59:09 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/21 16:11:32 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_fibonacci(int index)

{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
 int main(void)
 {
	 int nb = 5;
 	printf("Fibonacci is: %d\n", ft_fibonacci(nb));
 }
 */
