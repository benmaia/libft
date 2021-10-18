/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:25:23 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:25:24 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t counter)
{
    size_t i;
    const unsigned char *str1;
    const unsigned char *str2;

    i = 0;

    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < counter - 1)
    {
        i++;
    }
    return (str1[i] - str2[i]);
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "jooaf";
    char s2[] = "jooag";

    printf("%d", ft_memcmp(s1, s2, 5));
    return (0);
} */