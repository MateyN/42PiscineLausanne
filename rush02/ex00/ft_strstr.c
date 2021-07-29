/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:11:13 by ebetrix           #+#    #+#             */
/*   Updated: 2021/07/25 21:11:10 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<fcntl.h>

void	ft_write(char str)
{
	write(1, &str, 1);
}

char	*ft_strstr(char *str)
{
	int		i;
	char	to_find[2];
	int		j;

	i = 0;
	j = 0;
	to_find[0] = ':';
	to_find[1] = ' ';
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0] && str[++i] == to_find[1])
		{
			i++;
			while (str[i] != '\0')
			{
				ft_write(str[i]);
				i++;
			}
			write(1, " ", 1);
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	ft_strstr(argv[1]);
	return (0);
}*/
