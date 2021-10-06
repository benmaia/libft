#include "libft.h"

void    ft_putendl(char const *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}
