/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 12:30:43 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/19 17:01:11 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
*/
int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
/*
int main(void)

{
	char dest[12] = "Hello ";
	char src[12] = "World";

	printf("Mine: %s\n", ft_strcat(dest, src));
	return 0;
}
*/
