/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_nbr_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:49:27 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/15 00:14:06 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_base(char *base)
{
	int cpt;
	int cpt2;

	cpt = 0;
	while (base[cpt])
	{
		if (base[cpt] == '+' || base[cpt] == '-')
			return (0);
		cpt2 = cpt + 1;
		while (base[cpt2])
		{
			if (base[cpt] == base[cpt2++])
				return (0);
		}
		cpt++;
	}
	return (cpt);
}

void	parse_nbr(int nbr, char *base, int base_length)
{
	char	c;
	int		sign;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	if (nbr / base_length == 0)
	{
		c = base[sign * (nbr % base_length)];
		if (sign == -1)
			write(1, "-", 1);
		write(1, &c, 1);
	}
	else
	{
		parse_nbr(nbr / base_length, base, base_length);
		c = base[sign * (nbr % base_length)];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_length;

	base_length = parse_base(base);
	if (base_length > 1)
		parse_nbr(nbr, base, base_length);
}
