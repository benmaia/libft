/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:37:22 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:37:23 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char*str;

    if(!(str = (char *)malloc(size * sizeof(char) + 1)))
        return (NULL);
    while (size >= 0)
    {
        str[size] = '\0';
        size--;
    }
    return (str);
}