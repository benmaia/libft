#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t size;
    int i;
    char *new;

    size = len - start;
    if(!(new = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    while (s[start] && start < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[i] = '\0';
    return (new);
}

/*
#include <stdio.h>
int main ()
{
    char src[] = "vamos ver se funciona";
    int start = 0;
    int len = 14;

    printf("%s", ft_strsub(src, start, len));
} */