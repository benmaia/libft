/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:35:15 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:16 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    int i;
    char *new;
    int len;

    len = ft_strlen(s);
    new = (char *)malloc(sizeof(char) * (len + 1));
    if (!new)
         return (NULL);
    i = 0;
    while(s[i])
    {
        new[i] = f(s[i]);
        i++;
    }
    new[i] = '\0';
    return (new);
}