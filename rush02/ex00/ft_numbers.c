#include<unistd.h>
void	ft_showunit(char number)
{
	if (number == 1)
		write(1, "one", 3);
	if (number == 2)
		write(1, "two", 3);
	if (number == 3)
		write(1, "three", 5);
	if (number == 4)
		write(1, "four", 4);
	if (number == 5)
		write(1, "five", 5);
	if (number == 6)
		write(1, "six", 3);
	if (number == 7)
		write(1, "seven", 5);
	if (number == 8)
		write(1, "eight", 5);
	if (number == 9)
		write(1, "nine", 4);
}

void	ft_showtens(char number)
{
	if (number == 2)
		write(1, "twenty", 6);
	if (number == 3)
		write(1, "thirty", 6);
	if (number == 4)
		write(1, "fourty", 6);
	if (number == 5)
		write(1, "fifty", 5);
	if (number == 6)
		write(1, "sixty", 5);
	if (number == 7)
		write(1, "seventy", 7);
	if (number == 8)
		write(1, "eighty", 6);
	if (number == 9)
		write(1, "ninety", 6);
}

void	ft_showhundred(void)
{
	write(1, "hundred", 7);
}

void	ft_showspecial(char number)
{
	if (number == 1)
		write(1, "eleven", 6);
	if (number == 2)
		write(1, "twelve", 6);
	if (number == 3)
		write(1, "thirteen", 8);
	if (number == 4)
		write(1, "fourteen", 8);
	if (number == 5)
		write(1, "fifteen", 6);
	if (number == 6)
		write(1, "sixteen", 7);
	if (number == 7)
		write(1, "seventeen", 8);
	if (number == 8)
		write(1, "eighteen", 8);
	if (number == 9)
		write(1, "nineteen", 8);
}
