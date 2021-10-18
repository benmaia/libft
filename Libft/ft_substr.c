/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:38:53 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:38:54 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t size;
    int i;
    char *new;

    size = len - start;
    if(!(new = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    i = 0;
    while (s[start] && start < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[i] = '\0';
    return (new);
}

/*
#include <stdio.h>
int main ()
{
    char src[] = "vamos ver se funciona";
    int start = 0;
    int len = 14;

    printf("%s", ft_substr(src, start, len));
} */