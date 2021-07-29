#include<unistd.h>
#include"ft_strlen.c"
void	cut_number(char *number);
void	ft_check(char number);
void	ft_showunit(char number);
void	ft_showtens(char number);
void	ft_showhundred(void);
void	ft_showspecial(char number);
typedef struct cut_num_1_100	t_1_100;
struct	s_cut_num_1_100
{
	int	units;
	int	tens;
	int	hundreds;
	int	thousands;
} nombre1, chercher;

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
		write(1, "ERROR", 5);
	i = ft_strlen(&argv[1][0]);
	if (i > 3 || i < 0)
		write(1, "ERROR", 5);
	else
		cut_number(argv[0]);
	return (0);
}

void	cut_number(char *number)
{
	int	a;

	a = ft_strlen(number);
	while (a != 0)
	{	
		if (a == 3)
		{
			ft_showunit(number[0]);
			ft_showhundred();
			a--;
		}
		if (a == 2)
		{
			if (number[1] == '1')
				ft_showspecial(number[2]);
			else
				ft_showtens(number[1]);
			a--;
		}
		if (a == 1)
			ft_check(number[2]);
		a--;
	}
}

void	ft_check(char number)
{
	if (number == 0)
		write(1, "zero", 4);
	else
		ft_showunit(number);
}
