/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <bmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:24:46 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/11/30 00:53:46 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_n_pointer(unsigned long int nbr, char *base)
{
	int	counter;

	counter = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		counter++;
	}
	if (nbr >= (unsigned long int)ft_strlen(base))
		counter += ft_n_pointer(nbr / ft_strlen(base), base);
	counter += write(1, &base[nbr % ft_strlen(base)], 1);
	return (counter);
}
