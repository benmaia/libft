#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
    {
        i++;
    }
    if (s1[i] == s2[i])
        return (1);
    else
        return (0);
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "Ola Joao";
    char s2[] = "Ola JOao";

    printf("%d", ft_strnequ(s1, s2, 6));
} */