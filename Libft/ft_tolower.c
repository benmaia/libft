/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:38:56 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:38:57 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int arg)
{
    if (arg >= 'A' && arg <= 'Z')
        return (arg + 32);
    return (arg);
}

/*
#include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = '9';

    printf("%d\n", ft_tolower(test));
    printf("%d", tolower(test));
} */