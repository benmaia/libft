int ft_isalpha(int arg)
{
    if (arg >= 'a' && arg <= 'z')
        return (2);
    if (arg >= 'A' && arg <= 'Z')
        return (1);
    return (0);
}

/* #include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = 'a ';

    printf("%d\n", ft_isalpha(test));
    printf("%d", isalpha(test));
} */ 