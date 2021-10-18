/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:24:43 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:24:44 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int arg)
{
    if (arg >= 'a' && arg <= 'z')
        return (2);
    if (arg >= 'A' && arg <= 'Z')
        return (1);
    return (0);
}

/* #include <stdio.h>
#include <ctype.h>

 int main()
{
    char test = 'a ';

    printf("%d\n", ft_isalpha(test));
    printf("%d", isalpha(test));
} */ 