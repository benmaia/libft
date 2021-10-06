int ft_isascii(int arg)
{
    if (arg >= 0 && arg <= 127)
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = ' ';

    printf("%d\n", ft_isascii(test));
    printf("%d", isascii(test));
} */