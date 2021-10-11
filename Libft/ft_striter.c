#include "libft.h"

void    ft_striter(char *s, void (*f)(char *))
{
    int i;
    if (s)
    {
        i = 0;
        while(s[i])
        {
            f(&s[i]);
            i++;
        }
    }
}