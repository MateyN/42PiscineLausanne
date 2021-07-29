/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 16:20:44 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/28 09:42:53 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_atoi(char *str)

{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0') && str[i] <= '9')
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	return (n * sign);
	return (0);
}
/*
int	main(void)
{
	char *str = "   ----++--+1234ab567";
		printf("%d\n", ft_atoi(str));
}
*/
