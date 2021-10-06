int ft_isdigit(int arg)
{
    if (arg >= '0' && arg <= '9')
        return (1);
    return (0);
}


/* 
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = '9';

    printf("%d\n", ft_isdigit(test));
    printf("%d", isdigit(test));
} */