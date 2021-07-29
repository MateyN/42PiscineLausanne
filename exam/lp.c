#include <unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

int main(int ac, char **av)

{
    int i;
    
    i = 0;
    if (ac > 1)
        ac--;
    while (av[ac][i] != '\0')
    {
        ft_putchar(av[ac][i]);
        i++;
    }
    ft_putchar('\n');
    return (0);
}
