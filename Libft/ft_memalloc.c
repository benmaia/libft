#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void *memory;

    memory = malloc(size);
    if (memory <= 0)
        return (NULL);
    ft_bzero(memory, size);
    return (memory);
}