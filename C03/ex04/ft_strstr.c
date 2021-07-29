/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 09:57:43 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/19 13:00:49 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
*/
char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j]) == to_find[j])
		{
			j++;
			if ((to_find[j]) == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main()

{

	char	*str = "Hello world - coding piscine in Lausanne!";
	char	*to_find = "coding";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));

	return 0;
}
*/
