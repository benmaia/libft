/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:08:41 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/21 18:37:13 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int x;
    int z;
    char *dest;

    i = 0;
    j = 0;
    while(s1[i] != set[j] && set[j])
    {
        while(s1[i] == set[j])
        {
            i++;
        }
        j++;
    }
    x = ft_strlen(s1);
    z = 0;
    while(s1[x] != set[z] && set[z])
    {
        while(s1[x] == set[z])
        {
            x--;
        }
        z++;
    }
    if(!(dest = (char *)malloc(sizeof(char) * x - i + 1)))
        return(NULL);
    j = 0;
    while(s1[i] && i <= x)
    {
        dest[j] = s1[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return(dest);
}