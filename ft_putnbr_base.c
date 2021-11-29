/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:24:46 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/11/29 22:28:04 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long int nbr, char *base)
{
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (nbr >= ft_strlen(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	write(1, &base[nbr % / ft_strlen(base)], 1)
}
