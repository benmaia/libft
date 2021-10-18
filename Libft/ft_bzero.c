/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:41:28 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:41:29 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *str, size_t n)
{
    size_t i;
    char * dest;

    i = 0;
    dest = (char *)str;
    while (dest[i])
    {
        if (i >= n)
        {
            dest[i] = '\0';
        }
        i++;
    } 
}

/*
#include <stdio.h>
int main()
{
    char dest[] = "abcdefghklmnop";

    printf("%s", ft_bzero(dest, 2));
} */