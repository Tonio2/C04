/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 00:18:16 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/15 00:41:38 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_base(char *base)
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

int	ft_index(char c, char *base)
{
	int cpt;

	cpt = 0;
	while (base[cpt])
	{
		if (base[cpt] == c)
			return (cpt);
		cpt++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int cpt;
	int sign;
	int base_length;
	int nb;

	base_length = parse_base(base);
	if (base_length > 1)
	{
		cpt = 0;
		sign = 1;
		nb = 0;
		while (str[cpt] == ' ' || (9 <= str[cpt] && str[cpt] <= 13))
			cpt++;
		while (str[cpt] == '-' || str[cpt] == '+')
		{
			if (str[cpt++] == '-')
				sign *= -1;
		}
		while (ft_index(str[cpt], base) != -1)
			nb = nb * base_length + ft_index(str[cpt++], base);
		return (sign * nb);
	}
	else
		return (0);
}
