/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:35:18 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:19 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2 [i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int main()
{
    char s1[] = "Ola Joao";
    char s2[] = "Ola Jeao";

    printf("%d", ft_strcmp(s1, s2));
    return (0);
} */