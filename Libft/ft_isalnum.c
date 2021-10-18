/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:41:31 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:41:32 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int arg)
{
    if ((arg >= 'a' && arg <= 'z') ||
        (arg >= 'A' && arg <= 'Z') ||
        (arg >= '0' && arg <= '9'))
            return (1);
    return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
 int main()
{
    char test = '9';

    printf("%d\n", ft_isalnum(test));
    printf("%d", isalnum(test));
} */