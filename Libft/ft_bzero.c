#include "libft.h"

void ft_bzero(void *str, size_t n)
{
    size_t i;
    char * dest;

    i = 0;
    dest = (char *)str;
    while (dest[i])
    {
        if (i >= n)
        {
            dest[i] = '\0';
        }
        i++;
    } 
}

/*
#include <stdio.h>
int main()
{
    char dest[] = "abcdefghklmnop";

    printf("%s", ft_bzero(dest, 2));
}*/