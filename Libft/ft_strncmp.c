/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:15:55 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 17:15:56 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && s1[i] == s2 [i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "Ola Joao";
    char s2[] = "Ola Jeao";

    printf("%d", ft_strncmp(s1, s2, 5));
    return (0);
} */