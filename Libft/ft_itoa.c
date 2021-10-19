/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:14:13 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/19 17:22:27 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char    *ft_itoa(int n)
{
    char    *dest;
    int len;
    int m;

    m = n;
    while(m > 0)
    {
        m = m / 10;
        len++;
    }
    m = n;
    if(!(dest = malloc(sizeof(char) * len + 1)))
        return (NULL);
    while(len > 0)
    {
        
    }
    return (dest);
}



int main()
{
    int n = 5000;
    printf("%s", ft_itoa(n));
}