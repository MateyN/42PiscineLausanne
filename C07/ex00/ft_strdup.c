/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 10:32:22 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/25 21:03:23 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)

{
	char	*str;
	int		i;
	int		lenght;

	lenght = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * lenght);
	if (str == NULL)
		return (0);
	i = 0;
	while (i < lenght)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)

{
	printf("%s\n", ft_strdup("Zdraveyyyyy"));
}
*/
