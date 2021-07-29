#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)

{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)

{
    int i;
    int len;
    char *str;
    
    len = ft_strlen(src);
    str = (char*)malloc(sizeof(str) * len);
    if (str == NULL)
        return (0);
    i = 0;
    while (i < len)
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)

{
    printf("%s\n", ft_strdup("Zdraveyyy"));
}
