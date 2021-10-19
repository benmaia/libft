/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:14:13 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/19 15:29:12 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *dest;
    char    *src;
    int i;
    int len;

    src = ft_putnbr_fd(n, 1);
    len = ft_strlen(src);
    if(!(dest = malloc(sizeof(char) * len + 1)))
        return (NULL);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    int n = 5000;
    printf("%s", ft_itoa(n));
}