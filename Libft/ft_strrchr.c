/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:16:51 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/20 20:03:07 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int size;

	size = ft_strlen((char *)c);
	while (str[size] != (char)c)
	{
		size--;
	}
	if (str[size] == (char)c)
		return ((char *)&str[size]);
	return (NULL);
}

/*
#include <stdio.h>
int main()
{
	const char str[] = "www.olavalete.com";
	int c = '.';

	printf("%s", ft_strrchr(str, c));
}*/