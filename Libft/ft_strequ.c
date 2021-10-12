#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
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
    char s2[] = "Ola Joao ";

    printf("%d", ft_strequ(s1, s2));
} */