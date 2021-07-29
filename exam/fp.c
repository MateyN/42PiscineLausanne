#include <unistd.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

int main(int ac, char **av)

{
    int i;
    
    i = -1;
    if (ac > 1)
        while (av[1][++i])
            ft_putchar(av[1][i]);
    ft_putchar('\n');
    return (0);
            
}
