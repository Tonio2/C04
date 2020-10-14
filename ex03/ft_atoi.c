/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 23:08:57 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/14 23:45:01 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int cpt;
	int sign;
	int nb;

	cpt = 0;
	sign = 1;
	nb = 0;
	while (str[cpt] == ' ' || (9 <= str[cpt] && str[cpt] <= 13))
		cpt++;
	while (str[cpt] == '-' || str[cpt] == '+')
	{
		if (str[cpt] == '-')
			sign *= -1;
		cpt++;
	}
	while ('0' <= str[cpt] && str[cpt] <= '9')
		nb = nb * 10 + str[cpt++] - '0';
	return (sign * nb);
}
