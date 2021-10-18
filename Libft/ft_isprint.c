/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:42:19 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:42:20 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int arg)
{
    if (arg >= 32 && arg <= 126)
        return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = '5';

    printf("%d\n", ft_isprint(test));
    printf("%d", isprint(test));
} */