#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)

{
	write(1, &c, 1);
}

void rev_print(char *str)

{
    int i;
    
    i = 0;
    if (str[i] != 2)
    {
        while (str[i] != '\0')
            i++;
        i--;
        while (i > -1)
        {
            ft_putchar(str[i]);
            i--;
        }
    }
    ft_putchar('\n');
}

int main (void)

{
    rev_print("rainbow dash");
    rev_print("Ponies are awesome");
    return (0);
}
