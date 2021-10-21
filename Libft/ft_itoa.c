/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:14:13 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/21 21:12:34 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int nb_len(n)
{
    int counter;

    counter = 0;
    if(n < 0)
    {
        n *= -1;
        counter++;
    }
    while (n > 0)
    {
        n = n / 10;
        counter++;
    }
    return(counter);
}

char    *ft_itoa(int n)
{
    char    *dest;
    int size;
    long nb;

    size = nb_len(n);
    nb = n;
    if(!(dest = (char *)malloc(sizeof(char) * size + 1)))
        return(NULL);
    dest[size] = '\0';
    size--;
    if(nb == 0)
        dest[0] = '0';
    if(nb == -2147483648)
    {
        dest = "-2147483648";
    }
    if(nb < 0)
    {
        dest[0] = '-';
        nb *= -1;
    }
    while(nb > 0)
    {
        dest[size] = (nb % 10) + '0';
        nb = nb / 10;
        size--;
    }
    return(dest);
}