/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:35:28 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:35:29 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *str)
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
