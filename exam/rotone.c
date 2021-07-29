#include <unistd.h>

void ft_putchar(char c)

{
    write(1, &c, 1);
}

int main(int ac, char **av)

{
    int i;
    char j;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if ((av[1][i] >= 'A' && av[1][i] < 'Y')
            || (av[1][i] >= 'a' && av[1][i] < 'y'))
            {
                j = av[1][i] + 1;
                ft_putchar(j);
            }
            else if (av[1][i] == 'Z' || av[1][i] == 'z')
            {
                if (av[1][i] == 'Z')
                    ft_putchar('A');
                else
                    ft_putchar('z');
            }
            else
                ft_putchar(av[1][i]);
            i++;
        }
    }
    return (0);
}
                
