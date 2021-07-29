/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 20:53:04 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/19 12:47:22 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
*/
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	strlen;

	i = 0;
	strlen = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[strlen + i] = src[i];
		i++;
	}
	dest[strlen + i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[50] = "Hello";
	char	src[] = "World!";
	unsigned int n;
	char	*str;

	n = 3;

	str = ft_strncat(dest, src, n);
	printf("%s\n", str);
}
*/
