#include <unistd.h>

void    ft_putchar(char c)

{
    write(1, &c, 1);
}

int main(int ac, char **av)

{
    int i;
    char *lw;
    
    i = 0;
    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] <= 32 && av[1][i + 1] > 32)
                lw = &av[1][i + 1];
            i++;
        }
        i = 0;
        while (lw[i] > 32)
        {
            ft_putchar(lw[i]);
            i++;
        }
        ft_putchar('\n');
        return (0);
    }
}
