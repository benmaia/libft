/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:58:27 by marvin            #+#    #+#             */
/*   Updated: 2021/10/21 18:59:35 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_numberofwords(char const *s, char c)
{
    int words;
    int i;

    words = 0;
    i = 0;
    if(s[i] && s[i] != c)
    {
        words++;
        i++;
    }
    while(s[i])
    {
        while(s[i] == c)
        {
            i++;
            if(s[i] && s[i] != c)
            {
                words++;
            }
        }
        i++;
    }
    return(words);
}

static int  ft_lenwords(char const *s, char c)
{
    int size;

    size = 0;
    while(s[size] && s[size != c])
    {
        size++;
    }
    return(size);
}

char    **ft_split(char const *s, char c)
{
    int i;
    int j;
    int k;
    char **new;

    i = 0;
    j = 0;
    k = 0;
    if(!(new = (char **)malloc(sizeof(char) * (ft_numberofwords(s, c) + 1))))
        return (NULL);
    while (s[k])
    {
        while(s[k] && s[k] == c)
            k++;
        if(s[k] && s[k] != c)
        {
            if(!(new[j] = (char *)malloc(sizeof(char) * (ft_lenwords(s, c) + 1))))
                return (NULL);
            while(s[k] && s[k] != c)
            {
                new[j][i] = (char)s[k];
                i++;
            }
            new[j][i] = '\0';
            j++;
            i = 0;
        }
    }
    new[j] = NULL;
    return (new);
}

