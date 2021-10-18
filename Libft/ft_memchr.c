/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:20 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:25:21 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t counter)
{
    size_t i;
    unsigned char *s;
    unsigned char ch;

    s = (unsigned char *)str;
    ch = (unsigned char)c;

    i = 0;
    while (i < counter)
    {
        if (*s == ch)
        {
            return (s);
        }
        i++;
        s++;
    }
    return (NULL);
}

/*
#include <stdio.h>
int main ()
{
    const char str[50] = "www.valete.com";
    int c = '.';

    printf("%s", ft_memchr(str, c, 10));
} */