#include "libft.h"

char    *ft_strtrim(char const *s)
{
    char    *new;
    int i;
    int j;
    int len;

    i = 0;
    while(s[i] == ' ' || s[i] == '\n' || s[i] == '\t' && s[i])
        i++;
    j = 0;
    while(s[j])
        j++;
    while(s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
        j--;
    len = j - i;
    if (!(new = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    j = 0;
    while(s[i] && i < len)
    {
        new[j] = s[i];
        i++;
        j++;
    }
    new[j] = '\0';
    return (new);
}

/*
#include <stdio.h>
int main()
{
    char str[] = "      1234 5   6      ";
    char *dest;
    int i = 0;

    dest = ft_strtrim(str);
    while(dest[i])
        i++;
    printf("%d\n", i);
    printf("%s", dest);
} */