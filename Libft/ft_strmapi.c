/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:37:01 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:37:02 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *new;

    len = ft_strlen(s);
    new = (char *)malloc(sizeof(char) * (len + 1));
    if (!new)
         return (NULL);
     i = 0;
    while (s[i])
    {
           new[i] = f(i, s[i]);
         i++;
    }
    new[i] = '\0';
    return (new);
}