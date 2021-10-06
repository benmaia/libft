#include "libft.h"

void *ft_memset(void *str, int c, size_t count)
{
    char *dest;

    dest = (char *) str;
    while (0 < count)
    {
        dest[count - 1] = c;
        count--;
    }
    return (str);
}

/*
#include <stdio.h>

int main()
{
    char dest[50];
    char c = 'a';

    printf("%s\n", ft_memset(dest, c, 10));
    printf("%s", memset(dest, c, 10));
} */