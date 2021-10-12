#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    char *new;

    len = ft_strlen(s1) + ft_strlen(s2);
    if(!(new = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (s1[i])
    {
        new[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        new[i] = s2[j];
        j++;
        i++;
    }
    new[i] = '\0';
    return (new);
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "1234567 8";
    char s2[] = "abcdefg h";

    printf("%s", ft_strjoin(s1, s2));
} */