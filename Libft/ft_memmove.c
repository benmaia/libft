/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:43:07 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/21 15:51:39 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t counter)
{
    size_t i;

    i = 0;
    if (!dest && !src)
        return (NULL);
    if (dest > src)
    {
        while (counter > 0)
        {
            ((char *)dest)[counter - 1] = ((char *)src)[counter - 1];
            counter--;
        }
    }
    else
    {
        while (i < counter)
        {
            ((char *)dest)[i] = ((char *)src)[i];
            i++;
        }
    }
    return (dest);
}

/*
#include <stdio.h>
int main()
{
    char dest[] = "500";
    char src[] = "ola";

    printf("%s", ft_memmove(dest, src, 3));
} */