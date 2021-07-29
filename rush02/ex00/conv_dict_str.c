/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_dict_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 19:28:13 by ebetrix           #+#    #+#             */
/*   Updated: 2021/07/25 21:32:50 by lgyger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char	*conv_dict_str(char *dict)
{
	int		i;
	int		l;
	int		fd;
	char	buf;
	char	*str;

	l = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buf, 1) != 0)
		l++;
	close(fd);
	i = 0;
	str = malloc(sizeof(char) * (l + 1));
	fd = open(dict, O_RDONLY);
	while (read(fd, &str[i], 1) != 0)
		i++;
	close(fd);
	str[l] = 0;
	return (str);
}

/*int	main(void)
{
	printf("%s\n", conv_dict_str("numbers.dict"));
	return (0);
}*/
