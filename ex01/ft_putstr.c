/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabalet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:26:00 by alabalet          #+#    #+#             */
/*   Updated: 2020/10/14 23:09:44 by alabalet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt])
	{
		write(1, &str[cpt], 1);
		cpt++;
	}
}
