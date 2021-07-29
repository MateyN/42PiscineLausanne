/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnikolov <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 15:13:19 by mnikolov          #+#    #+#             */
/*   Updated: 2021/07/22 13:23:33 by mnikolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(char *str)

{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (! (*(s1 + i) == *(s2 + i)))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}

void	ft_swap(char *a, char *b)

{
	char	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	while (argc > 1)
	{
		c = 0;
		i = 0;
		while (++i < argc)
			if (c == 0 || ft_strcmp(argv[i], argv[c]) < 0)
				c = i;
		while (*argv[c])
			ft_print(*argv[c]++);
		ft_print('\n');
		if (c != --argc)
			ft_swap* (argv + c), *(argv + argc);
	}
	return (0);
}
