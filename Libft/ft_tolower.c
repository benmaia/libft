int ft_tolower(int arg)
{
    if (arg >= 'A' && arg <= 'Z')
        return (arg + 32);
    return (arg);
}

/*
#include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = '9';

    printf("%d\n", ft_tolower(test));
    printf("%d", tolower(test));
} */