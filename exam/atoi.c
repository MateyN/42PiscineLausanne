#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)

{
    int i;
    int n;
    int sign;
    
    i = 0;
    n = 0;
    sign = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        n = -1
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        sign *= 10;
        sign += str[i] - '0';
    }
    return (sign * n);
}
