/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:42:14 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:42:15 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int arg)
{
    if (arg >= 0 && arg <= 127)
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = ' ';

    printf("%d\n", ft_isascii(test));
    printf("%d", isascii(test));
} */