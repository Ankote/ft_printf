/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsign_dic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:43:55 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 06:14:02 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	count(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_putunsdic(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
	else
	{
		ft_putchar(nbr + 48);
	}
	return (count(nbr));
}
// int main()
// {
// 	printf("\n%d.",ft_putunsdic(-1411555444));
// }