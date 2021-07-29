#include <unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

int main(void)

{
    int digit;
    
    digit = '9';
    while (digit >= '0')
    {
        ft_putchar(digit);
        digit--;
    }
    ft_putchar('\n');
    return (0);
}
