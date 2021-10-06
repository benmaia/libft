int ft_isalnum(int arg)
{
    if ((arg >= 'a' && arg <= 'z') ||
        (arg >= 'A' && arg <= 'Z') ||
        (arg >= '0' && arg <= '9'))
            return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = '9';

    printf("%d\n", ft_isalnum(test));
    printf("%d", isalnum(test));
} */