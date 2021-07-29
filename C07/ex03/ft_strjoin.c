/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:04:16 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/25 21:05:04 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)

{
	int		i;
	int		c;
	char	*dest;
	int		n;

	dest = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		n = 0;
		while (strs[i][n] != '\0')
			dest[c++] = strs[i][n++];
		n = 0;
		while (sep[n] != '\0' && i < size - 1)
			dest[c++] = sep[n++];
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
 {
 	printf("%s\n", ft_strjoin(argc - 1, argv + 1, ", "));
 }
*/
