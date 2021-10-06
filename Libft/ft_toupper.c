int ft_toupper(int arg)
{
    if (arg>= 'a' && arg<= 'z')
        return (arg - 32);
    return (arg);
}

/*
#include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = 'a';

    printf("%d\n", ft_toupper(test));
    printf("%d", toupper(test));
} */