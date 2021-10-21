/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:02:02 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/21 18:06:35 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	int	i;
	char	*new;

	i = 0;
	while (str[i])
		i++;
	if (!(new = (char *) malloc((i + 1) * sizeof(char))))
			return (NULL);
	i = 0;
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new [i] = '\0';
	return (new);
}
