/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:09:22 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/11 14:11:29 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int line, int column, int x_max, int y_max)

{
	if (line == 0)
	{
		if (column == 0)
			ft_putchar('A');
		else if (column == x_max - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == y_max - 1)
	{
		if (column == 0)
			ft_putchar('C');
		else if (column == x_max - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (column == 0 || column == x_max - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	ft_negative(int *x, int *y)

{
	if (*x < 0)
		*x = *x * -1;
	if (*y < 0)
		*y = *y * -1;
}

void	rush(int x, int y)
{
	int	line;
	int	column;

	ft_negative(&x, &y);
	line = 0;
	while (line < y)
	{
		column = 0;
		while (column < x)
		{
			ft_print(line, column, x, y);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}
