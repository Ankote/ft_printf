/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aankote <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:14:28 by aankote           #+#    #+#             */
/*   Updated: 2022/11/05 02:22:11 by aankote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	count(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	if (nbr == INT_MIN)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
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
