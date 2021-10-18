/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:12 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:25:12 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t count)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (NULL);
    while (i < count)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        if (((unsigned char *)src)[i] == (unsigned char)c)
        {
            i++;
            return ((void *)(dest + i));
        }
        i++;
    }
    return (NULL);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
    const char src[] = "Hello, Venus, Earth. Sun!";
    char dest[50];
    int c = ','; 

    printf("%s", ft_memccpy(dest, src, c, 25));
    //printf("%s", memccpy(dest, src, c, 10));
} */