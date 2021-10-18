/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:41:24 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:41:25 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi (const char *str)
{
    int i;
    int sign;
    int new;

    i = 0;
    sign = 1;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i])
                i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= - 1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        new = new * 10 + (str[i] - '0');
        i++;
    }
    return (sign * new);
}

/*
 #include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_atoi(argv[1]));
} */