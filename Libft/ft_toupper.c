/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:39:00 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:39:01 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int arg)
{
    if (arg>= 'a' && arg<= 'z')
        return (arg - 32);
    return (arg);
}

/*
#include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = 'a';

    printf("%d\n", ft_toupper(test));
    printf("%d", toupper(test));
} */