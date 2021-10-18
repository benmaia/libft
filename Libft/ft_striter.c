/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:35:35 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:36 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striter(char *s, void (*f)(char *))
{
    int i;
    if (s)
    {
        i = 0;
        while(s[i])
        {
            f(&s[i]);
            i++;
        }
    }
}