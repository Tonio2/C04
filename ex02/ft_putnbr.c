/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:34:41 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/14 23:10:57 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	int		signe;

	signe = 1;
	if (nb < 0)
		signe = -1;
	if (nb / 10 == 0)
	{
		c = '0' + signe * (nb % 10);
		if (signe == -1)
			write(1, "-", 1);
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		c = '0' + signe * (nb % 10);
		write(1, &c, 1);
	}
}
