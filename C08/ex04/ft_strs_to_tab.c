/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:06:34 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/27 16:56:16 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strs_to_tab.h"
#include <unistd.h>
#include <stdio.h>

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

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (! (s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)

{
	int			i;
	t_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	i = 0;
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		if (tab == NULL)
			return (NULL);
		tab[i].str = ft_strcpy(tab[i].str, av[i]);
		tab[i].copy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		if (tab == NULL)
			return (NULL);
		tab[i].copy = tab[i].str;
		i++;
	}
	tab[i].str = "";
	return (tab);
}
/*
int	main(int ac, char **av)
{
	int	i;
	t_stock_str *str;

	str = ft_strs_to_tab(ac - 1, av + 1);
	i = 0;
	while (ft_strcmp(str[i].str, ""))
	{
		printf("string size: %d\n", str[i].size);
		printf("string: %s\n", str[i].str);
		printf("string copy: %s\n", str[i].copy);
		i++;
	}
}
*/
