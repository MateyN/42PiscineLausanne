#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)

{
    write(1, &c, 1);
}

int main(int ac, char **av)

{
    int i;
    int count;
    
    i = 0;
    count = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 64;
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 96;
            while (count)
            {
                ft_putchar(av[1][i]);
            count--;
            }
            count = 1;
            i++;
        }
        ft_putchar('\n');
        return (0);
    }
}
